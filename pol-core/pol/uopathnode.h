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

  for ( const auto& newpos : Range2d( pos.xy() - Vec2d( 1, 1 ), pos.xy() + Vec2d( 1, 1 ), realm ) )
  {
    if ( newpos == pos.xy() )
      continue;
    if ( !theBlockers->range.contains( newpos ) )
      continue;
    short newz;
    if ( !realm->walkheight( newpos, pos.z(), &newz, &supporting_multi, &walkon_item, doors_block,
                             Plib::MOVEMODE_LAND ) )
      continue;
    // Forbid diagonal move, if between 2 blockers - OWHorus {2011-04-26)
    if ( ( newpos.x() != pos.x() ) && ( newpos.y() != pos.y() ) )  // do only for diagonal moves
    {
      // If both neighbouring tiles are blocked, the move is illegal (diagonal move)
      if ( !realm->walkheight( Pos2d( pos.xy() ).x( newpos.x() ), pos.z(), &newz, &supporting_multi,
                               &walkon_item, doors_block, Plib::MOVEMODE_LAND ) )
        if ( !realm->walkheight( Pos2d( pos.xy() ).y( newpos.y ), pos.z(), &newz, &supporting_multi,
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

  return true;
}
}  // namespace Core
}  // namespace Pol
#endif
