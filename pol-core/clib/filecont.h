#ifndef CLIB_FILECONT_H
#define CLIB_FILECONT_H

#include <filesystem>
#include <string>
namespace Pol
{
namespace Clib
{
/**
 * Simple class to read a whole file as a char array
 */
class FileContents
{
public:
  FileContents( const std::filesystem::path& file, bool suppress_error_print = false );

  const std::string& str_contents() const;
  void set_contents( const std::string& str );

  std::string&& take() &&;

private:
  std::string contents_;
};
}  // namespace Clib
}  // namespace Pol
#endif
