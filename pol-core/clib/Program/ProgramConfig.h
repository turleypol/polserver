#pragma once

#include <filesystem>
#include <string>

namespace Pol::Clib
{
class ProgramConfig
{
public:
  ProgramConfig() = default;
  virtual ~ProgramConfig() = default;

  /**
   * @brief Returns the name of the currently running program
   */
  static std::string programName();

  /**
   * @brief Returns the directory of the currently running program
   */
  static std::filesystem::path programDir();

  static std::string build_target();
  static std::string build_datetime();
  /**
   * @brief Configures the bug reporting system
   */
  static void configureProgramEnvironment( const std::string& programName );

private:
  static std::string m_programName;
  static std::filesystem::path m_programDir;
};
}  // namespace Pol::Clib

#define PROG_CONFIG Pol::Clib::ProgramConfig
