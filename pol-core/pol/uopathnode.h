/** @file
 *
 * @par History
 * - 2005/09/03 Shinigami: GetSuccessors - added support for non-blocking doors
 */


#ifndef __UOPATHNODE_H
#define __UOPATHNODE_H
// AStar search class
#include "../plib/stlastar.h"
#include "realms/realm.h"

#include "realms/realms.h"

#include "base/position.h"
#include "base/vector.h"

namespace Pol
{
namespace Core
{
#define BORDER_SKIRT 5
class AStarBlockers
{
public:
  Range2d range;

  typedef std::vector<Pos3d> BlockNodeVector;

public:
  AStarBlockers( Range2d searchrange ) : range( std::move( searchrange ) ) {}

  void AddBlocker( Pos3d pos ) { m_List.push_back( std::move( pos ) ); }

  ~AStarBlockers() = default;

  bool IsBlocking( const Pos3d& pos )
  {
    for ( const auto& blockNode : m_List )
    {
      if ( blockNode.xy() == pos.xy() &&
           ( abs( blockNode.z() - pos.z() ) < settingsManager.ssopt.default_character_height ) )
        return true;
    }
    return false;
  }
  BlockNodeVector m_List;
};

class UOPathState
{
public:
  AStarBlockers* theBlockers;
  Pos3d pos;
  Realms::Realm* realm;

  UOPathState();
  UOPathState( Pos3d p, Realms::Realm* newrealm, AStarBlockers* blockers );
  float GoalDistanceEstimate( UOPathState& nodeGoal );
  bool IsGoal( UOPathState& nodeGoal );
  bool GetSuccessors( Plib::AStarSearch<UOPathState>* astarsearch, UOPathState* parent_node,
                      bool doors_block );
  float GetCost( UOPathState& successor );
  bool IsSameState( UOPathState& rhs );
  std::string Name();
};
UOPathState::UOPathState()
    : theBlockers( nullptr ), pos(), realm( Core::find_realm( std::string( "britannia" ) ) ){};
UOPathState::UOPathState( Pos3d p, Realms::Realm* newrealm, AStarBlockers* blockers )
    : theBlockers( blockers ), pos( std::move( p ) ), realm( newrealm ){};
bool UOPathState::IsSameState( UOPathState& rhs )
{
  return pos == rhs.pos && realm == rhs.realm;
}
float UOPathState::GoalDistanceEstimate( UOPathState& nodeGoal )
{
  return ( (float)( abs( pos.x() - nodeGoal.pos.x() ) + abs( pos.y() - nodeGoal.pos.y() ) +
                    abs( pos.z() - nodeGoal.pos.z() ) ) );
}
bool UOPathState::IsGoal( UOPathState& nodeGoal )
{
  return pos.xy() == nodeGoal.pos.xy() &&
         ( abs( nodeGoal.pos.z() - pos.z() ) <= settingsManager.ssopt.default_character_height );
}
float UOPathState::GetCost( UOPathState& successor )
{
  int xdiff = abs( pos.x() - successor.pos.x() );
  int ydiff = abs( pos.y() - successor.pos.y() );
  if ( xdiff && ydiff )
    return 1.414f;
  else
    return 1.0f;
}
std::string UOPathState::Name()
{
  fmt::Writer writer;
  writer << pos;
  return writer.str();
}
bool UOPathState::GetSuccessors( Plib::AStarSearch<UOPathState>* astarsearch,
                                 UOPathState* /*parent_node*/, bool doors_block )
{
  Multi::UMulti* supporting_multi = nullptr;
  Items::Item* walkon_item = nullptr;

  UOPathState SolutionStartNode = ( *( astarsearch->GetSolutionStart() ) );
  UOPathState SolutionEndNode = ( *( astarsearch->GetSolutionEnd() ) );

  for ( short i = -1; i <= 1; i++ )
  {
    for ( short j = -1; j <= 1; j++ )
    {
      if ( ( i == 0 ) && ( j == 0 ) )
        continue;
      short newx = pos.x() + i;
      short newy = pos.y() + j;
      short newz = pos.z();

      if ( !theBlockers->range.contains( Pos2d( newx, newy ) ) )
        continue;

      if ( newx < 0 || newx > realm->width() )
        continue;

      if ( newy < 0 || newy > realm->height() )
        continue;
      Pos2d newpos( static_cast<u16>( newx ), static_cast<u16>( newy ) );

      if ( realm->walkheight( newpos, pos.z(), &newz, &supporting_multi, &walkon_item, doors_block,
                              Plib::MOVEMODE_LAND ) )
      {
        // Forbid diagonal move, if between 2 blockers - OWHorus {2011-04-26)
        if ( ( i != 0 ) && ( j != 0 ) )  // do only for diagonal moves
        {
          // If both neighbouring tiles are blocked, the move is illegal (diagonal move)
          if ( !realm->walkheight( newpos + Vec2d( i, 0 ), pos.z(), &newz, &supporting_multi,
                                   &walkon_item, doors_block, Plib::MOVEMODE_LAND ) )
            if ( !realm->walkheight( newpos + Vec2d( 0, j ), pos.z(), &newz, &supporting_multi,
                                     &walkon_item, doors_block, Plib::MOVEMODE_LAND ) )
              continue;
        }

        UOPathState NewNode{ Pos3d( newpos, newz ), realm, theBlockers };

        if ( ( !NewNode.IsSameState( SolutionStartNode ) ) &&
             ( !NewNode.IsSameState( SolutionEndNode ) ) )
          if ( theBlockers->IsBlocking( NewNode.pos ) )
            continue;

        if ( !astarsearch->AddSuccessor( NewNode ) )
          return false;
      }
    }
  }

  return true;
}
}  // namespace Core
}  // namespace Pol
#endif
