/** @file
 *
 * @par History
 * - 2005/09/03 Shinigami: GetSuccessors - added support for non-blocking doors
 */


#pragma once
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
class AStarBlockers
{
public:
  AStarBlockers( Range2d searchrange ) : range( std::move( searchrange ) ) {}
  ~AStarBlockers() = default;

  void AddBlocker( Pos3d pos ) { m_List.push_back( std::move( pos ) ); }

  bool IsBlocking( const Pos3d& pos ) const
  {
    for ( const auto& blockNode : m_List )
    {
      if ( blockNode.xy() == pos.xy() &&
           ( abs( blockNode.z() - pos.z() ) < settingsManager.ssopt.default_character_height ) )
        return true;
    }
    return false;
  }
  const Range2d& range() const { return m_range; };

private:
  Range2d range;
  std::vector<Pos3d> m_List;
};

class UOPathState
{
public:
  UOPathState();
  UOPathState( Pos3d p, Realms::Realm* newrealm, AStarBlockers* blockers );
  ~UOPathState() = default;

  float GoalDistanceEstimate( const UOPathState& nodeGoal ) const;
  bool IsGoal( const UOPathState& nodeGoal ) const;
  bool GetSuccessors( Plib::AStarSearch<UOPathState>* astarsearch, UOPathState* parent_node,
                      bool doors_block ) const;
  float GetCost( const UOPathState& successor ) const;
  bool IsSameState( const UOPathState& rhs ) const;
  std::string Name() const;

private:
  AStarBlockers* theBlockers;
  Pos3d pos;
  Realms::Realm* realm;
};

UOPathState::UOPathState() : theBlockers( nullptr ), pos(), realm( nullptr ){};

UOPathState::UOPathState( Pos3d p, Realms::Realm* newrealm, AStarBlockers* blockers )
    : theBlockers( blockers ), pos( std::move( p ) ), realm( newrealm ){};

bool UOPathState::IsSameState( const UOPathState& rhs ) const
{
  return pos == rhs.pos && realm == rhs.realm;
}

float UOPathState::GoalDistanceEstimate( const UOPathState& nodeGoal ) const
{
  return ( (float)( abs( pos.x() - nodeGoal.pos.x() ) + abs( pos.y() - nodeGoal.pos.y() ) +
                    abs( pos.z() - nodeGoal.pos.z() ) ) );
}

bool UOPathState::IsGoal( const UOPathState& nodeGoal ) const
{
  return pos.xy() == nodeGoal.pos.xy() &&
         ( abs( nodeGoal.pos.z() - pos.z() ) <= settingsManager.ssopt.default_character_height );
}

float UOPathState::GetCost( const UOPathState& successor ) const
{
  int xdiff = abs( pos.x() - successor.pos.x() );
  int ydiff = abs( pos.y() - successor.pos.y() );
  if ( xdiff && ydiff )
    return 1.414f;
  else
    return 1.0f;
}

std::string UOPathState::Name() const
{
  fmt::Writer writer;
  writer << pos;
  return writer.str();
}

bool UOPathState::GetSuccessors( Plib::AStarSearch<UOPathState>* astarsearch,
                                 UOPathState* /*parent_node*/, bool doors_block ) const
{
  Multi::UMulti* supporting_multi = nullptr;
  Items::Item* walkon_item = nullptr;

  UOPathState* SolutionStartNode = astarsearch->GetSolutionStart();
  UOPathState* SolutionEndNode = astarsearch->GetSolutionEnd();

  for ( const auto& newpos : Range2d( pos.xy() - Vec2d( 1, 1 ), pos.xy() + Vec2d( 1, 1 ), realm ) )
  {
    if ( newpos == pos.xy() )
      continue;
    if ( !theBlockers->range().contains( newpos ) )
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
        if ( !realm->walkheight( Pos2d( pos.xy() ).y( newpos.y() ), pos.z(), &newz,
                                 &supporting_multi, &walkon_item, doors_block,
                                 Plib::MOVEMODE_LAND ) )
          continue;
    }

    UOPathState NewNode{ Pos3d( newpos, newz ), realm, theBlockers };

    if ( ( !NewNode.IsSameState( *SolutionStartNode ) ) &&
         ( !NewNode.IsSameState( *SolutionEndNode ) ) )
      if ( theBlockers->IsBlocking( NewNode.pos ) )
        continue;

    if ( !astarsearch->AddSuccessor( NewNode ) )
      return false;
  }

  return true;
}
}  // namespace Core
}  // namespace Pol
