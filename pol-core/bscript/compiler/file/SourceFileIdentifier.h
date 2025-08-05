#ifndef POLSERVER_SOURCEFILEIDENTIFIER_H
#define POLSERVER_SOURCEFILEIDENTIFIER_H

#include <filesystem>
#include <string>
#include <vector>

namespace Pol::Bscript::Compiler
{
class SourceFileIdentifier
{
public:
  SourceFileIdentifier( unsigned index, std::filesystem::path path );

  const unsigned index;
  const std::filesystem::path path;

  SourceFileIdentifier( const SourceFileIdentifier& ) = delete;
  SourceFileIdentifier& operator=( const SourceFileIdentifier& ) = delete;
  const std::vector<std::string>& getLines() const;

private:
  mutable std::vector<std::string> _lines;
};

}  // namespace Pol::Bscript::Compiler

#endif  // POLSERVER_SOURCEFILEIDENTIFIER_H
