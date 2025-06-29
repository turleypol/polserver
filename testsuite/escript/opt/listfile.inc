use file;

function print_listfile( test )
  var lines := ReadFile( $"./opt/{test}.lst" );
  if ( !lines )
    return print( lines );
  endif
  var self := lines.findIndex( @( e ) { return e.find( "jsr userfunc" ); } );
  if ( self )
    lines.shrink( self - 3 );
  endif
  print( lines.reduce( @( acc, curr ) { return acc + curr + "\n"; }, "" ) );
endfunction
