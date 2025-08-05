#include "ListingWriter.h"

#include <fstream>

#include "StoredToken.h"
#include "bscript/compiler/file/SourceLocation.h"
#include "bscript/compiler/format/StoredTokenDecoder.h"
#include "bscript/compiler/representation/CompiledScript.h"

namespace Pol::Bscript::Compiler
{
ListingWriter::ListingWriter( CompiledScript& compiled_script ) : compiled_script( compiled_script )
{
}

void ListingWriter::write( std::ofstream& ofs )
{
  StoredTokenDecoder decoder( compiled_script.module_descriptors, compiled_script.data );
  int i = 0;
  const auto& debug_inst = compiled_script.debug.instructions;
  unsigned int last_file = 0;
  unsigned int last_line = 0;
  for ( auto& tkn : compiled_script.code )
  {
    std::string w;
    decoder.decode_to( tkn, w );
    if ( last_file != debug_inst[i].file_index || last_line != debug_inst[i].line_number )
    {
      auto file = compiled_script.debug.filenames[debug_inst[i].file_index];
      if ( !file.extension().compare( ".em" ) )
      {
        SourceLocation loc{
            compiled_script.source_file_identifiers[debug_inst[i].file_index - 1].get(),
            Range{ Position{ debug_inst[i].line_number, 0, 0 },
                   Position{ debug_inst[i].line_number, 0, 0 } } };
        //        ofs << loc.getSourceLine() << "\n";
        last_file = debug_inst[i].file_index;
        last_line = debug_inst[i].line_number;
      }
    }
    ofs << i << ": " << w << "\n";
    ++i;
  }
}

}  // namespace Pol::Bscript::Compiler
