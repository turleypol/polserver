/** @file
 *
 * @par History
 */


#include "maptileserver.h"
#include "systemstate.h"

namespace Pol
{
namespace Plib
{
MapTileServer::MapTileServer( const RealmDescriptor& descriptor )
    : _descriptor( descriptor ),
      _file( _descriptor.path( "maptile.dat" ), std::ios::in ),
      _cur_block_index( -1L )
{
  if ( systemstate.pol_script_test )
    return;
  _file.Read( _cur_block );
  _cur_block_index = 0;
}

MAPTILE_CELL MapTileServer::GetMapTile( unsigned short x, unsigned short y )
{
  if ( systemstate.pol_script_test )
  {
    MAPTILE_CELL cell;
    cell.landtile = 0;
    cell.z = 0;
    return cell;
  }
  unsigned short xblock = x >> MAPTILE_SHIFT;
  unsigned short xcell = x & MAPTILE_CELLMASK;
  unsigned short yblock = y >> MAPTILE_SHIFT;
  unsigned short ycell = y & MAPTILE_CELLMASK;

  int block_index = yblock * ( _descriptor.width >> MAPTILE_SHIFT ) + xblock;
  if ( block_index != _cur_block_index )
  {
    size_t offset = block_index * sizeof _cur_block;

    _file.Seek( offset );
    _file.Read( _cur_block );

    _cur_block_index = block_index;
  }

  return _cur_block.cell[xcell][ycell];
}

size_t MapTileServer::sizeEstimate() const
{
  return sizeof( *this ) + _descriptor.sizeEstimate() + _file.sizeEstimate();
}
}  // namespace Plib
}  // namespace Pol
