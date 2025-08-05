/** @file
 *
 * @par History
 */


#ifndef CLIB_FILEUTIL_H
#define CLIB_FILEUTIL_H

#include <string>

namespace Pol
{
namespace Clib
{
bool IsDirectory( const char* dir );
void MakeDirectory( const char* dir );
bool FileExists( const char* filename );
bool FileExists( const std::string& filename );
int filesize( const char* fname );
void RemoveFile( const std::string& fname );
std::string normalized_dir_form( const std::string& str );
int make_dir( const char* dir );  // recursive
int strip_one( std::string& direc );
}  // namespace Clib
}  // namespace Pol
#endif
