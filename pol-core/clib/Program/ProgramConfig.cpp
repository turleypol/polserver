#include "ProgramConfig.h"
#include "pol_global_config.h"
#include "pol_revision.h"
#include <string>

namespace Pol::Clib
{
namespace fs = std::filesystem;

///////////////////////////////////////////////////////////////////////////////

std::string ProgramConfig::m_programName = "";
fs::path ProgramConfig::m_programDir = "";

///////////////////////////////////////////////////////////////////////////////

void ProgramConfig::configureProgramEnvironment( const std::string& programName )
{
  m_programName = programName;

  fs::path exeDir = programName;
  exeDir.remove_filename();
  m_programDir = exeDir.remove_filename().lexically_normal();
}

std::string ProgramConfig::programName()
{
  return m_programName;
}

fs::path ProgramConfig::programDir()
{
  return m_programDir;
}

std::string ProgramConfig::build_target()
{
  return POL_BUILD_TARGET;
}

std::string ProgramConfig::build_datetime()
{
  return POL_BUILD_DATETIME;
}

///////////////////////////////////////////////////////////////////////////////
}  // namespace Pol::Clib
