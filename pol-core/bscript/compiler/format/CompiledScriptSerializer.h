#ifndef POLSERVER_COMPILEDSCRIPTSERIALIZER_H
#define POLSERVER_COMPILEDSCRIPTSERIALIZER_H

#include <filesystem>

namespace Pol::Bscript::Compiler
{
class CompiledScript;

class CompiledScriptSerializer
{
public:
  explicit CompiledScriptSerializer( const CompiledScript& );

  void write( const std::filesystem::path& path ) const;

private:
  const CompiledScript& compiled_script;
};

}  // namespace Pol::Bscript::Compiler

#endif  // POLSERVER_COMPILEDSCRIPTSERIALIZER_H
