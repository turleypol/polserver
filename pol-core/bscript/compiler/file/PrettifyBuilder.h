#pragma once

#include <filesystem>

namespace Pol::Bscript::Compiler
{
class Profile;
class Report;

class PrettifyBuilder
{
public:
  PrettifyBuilder( Profile&, Report& );

  std::string build( const std::filesystem::path& path, bool is_module );

  Profile& profile;
  Report& report;
};

}  // namespace Pol::Bscript::Compiler
