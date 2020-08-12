#ifndef POLSERVER_CODEGENERATOR_H
#define POLSERVER_CODEGENERATOR_H

#include <memory>

namespace Pol::Bscript::Compiler
{
class CompiledScript;
class CompilerWorkspace;
class InstructionEmitter;
struct LegacyFunctionOrder;
class ModuleDeclarationRegistrar;

class CodeGenerator
{
public:
  static std::unique_ptr<CompiledScript> generate( std::unique_ptr<CompilerWorkspace>,
                                                   const LegacyFunctionOrder* );

private:
  CodeGenerator( InstructionEmitter& , ModuleDeclarationRegistrar& );

  void generate_instructions( CompilerWorkspace& );

private:
  ModuleDeclarationRegistrar& module_declaration_registrar;

  InstructionEmitter& emitter;
  InstructionEmitter& emit;
};

}  // namespace Pol::Bscript::Compiler

#endif  // POLSERVER_CODEGENERATOR_H
