/** @file
 *
 * @par History
 * - 2009/07/23 MuadDib:   updates for new Enum::Packet Out ID
 */


#include <string>

#include "../clib/clib_endian.h"
#include "../clib/rawtypes.h"
#include "globals/uvars.h"
#include "network/packethelper.h"
#include "network/packets.h"
#include "network/pktdef.h"
#include "network/pktin.h"

namespace Pol
{
namespace Core
{
bool send_tip( Network::Client* client, std::string& tipname, unsigned short tipnum )
{
  if ( tipname.empty() || tipname.size() > 9999 )
    return false;
  Network::PktHelper::PacketOut<Network::PktOut_A6> msg;
  msg->offset += 2;
  msg->Write<u8>( PKTOUT_A6_TYPE_TIP );
  msg->offset += 2;  // unk4,5
  msg->WriteFlipped<u16>( tipnum );
  msg->WriteWithLen<u16>( tipname );
  u16 len = msg->offset;
  msg->offset = 1;
  msg->WriteFlipped<u16>( len );
  msg.Send( client, len );
  return true;
}

void send_tip( Network::Client* client, const std::string& tiptext )
{
  Network::PktHelper::PacketOut<Network::PktOut_A6> msg;
  msg->offset += 2;
  msg->Write<u8>( PKTOUT_A6_TYPE_TIP );
  msg->offset += 2;  // unk4,5
  msg->offset += 2;  // tipnum
  msg->WriteFlipped<u16>( textlen + 1 );
  msg->WriteWithLen<u16>( tiptext, true, 9999 );
  u16 len = msg->offset;
  msg->offset = 1;
  msg->WriteFlipped<u16>( len );
  msg.Send( client, len );
}

void handle_get_tip( Network::Client* client, PKTIN_A7* msg )
{
  u16 tipnum = cfBEu16( msg->lasttip );
  if ( !gamestate.tipfilenames.empty() )
  {
    if ( msg->prevnext )
    {
      ++tipnum;
      if ( tipnum >= gamestate.tipfilenames.size() )
        tipnum = 0;
    }
    else
    {
      --tipnum;
      if ( tipnum >= gamestate.tipfilenames.size() )
        tipnum = static_cast<u16>( gamestate.tipfilenames.size() ) - 1;
    }

    send_tip( client, gamestate.tipfilenames[tipnum], tipnum );
  }
}
}  // namespace Core
}  // namespace Pol
