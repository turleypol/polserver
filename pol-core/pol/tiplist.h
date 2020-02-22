/** @file
 *
 * @par History
 */


#ifndef TIPLIST_H
#define TIPLIST_H

#include <string>
#include <vector>

namespace Pol
{
namespace Network
{
class Client;
}
namespace Core
{
void load_tips();

bool send_tip( Network::Client* client, std::string& tipname, unsigned short tipnum );
void send_tip( Network::Client* client, const std::string& tiptext );
}  // namespace Core
}  // namespace Pol
#endif
