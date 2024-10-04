if exists("b:current_syntax")
  finish
endif

syn case ignore
"syn match eIdentifier		"[a-z_][a-z0-9_]*"
syn match eDigit		"\<\d\+\>"
syn match eDigit		"\<\d\+\.\d\+\>"
syn match eDigit		"\<0x\x\+\>"
syn keyword eBool		true false
syn match eOperator	"+"
syn match eOperator	"-"
syn match eOperator	":"
syn match eOperator	"*"
syn match eOperator	"/"
syn match eOperator	"%"
syn match eOperator	"="
syn match eOperator	","
syn match eOperator	";"
syn match eOperator	"<"
syn match eOperator	">"
syn match eOperator	"!"
syn match eOperator	"?"
syn match eOperator	"\."
"syn match eOperator	"("
"syn match eOperator	")"
syn match eOperator	"{"
syn match eOperator	"}"
syn match eOperator	"\["
syn match eOperator	"]"
syn match eOperator	"|"
syn match eOperator	"&"
syn match eOperator	"\$"
syn keyword eType var const byref unused
syn keyword eType array dictionary struct
syn keyword eStatement program endprogram
syn keyword eStatement function endfunction exported
syn keyword eStatement use include
syn keyword eStatement enum endenum
syn keyword eStatement if endif else elseif
syn keyword eStatement return
syn keyword eStatement while endwhile
syn keyword eStatement case endcase
syn keyword eStatement repeat until
syn keyword eStatement for endfor to foreach endforeach in

syn region _par1 matchgroup=par1 start=/(/ end=/)/ contains=ALL  
syn region _par2 matchgroup=par2 start=/(/ end=/)/ contains=_par3 contained
syn region _par3 matchgroup=par3 start=/(/ end=/)/ contains=_par1 contained

syn region eComment	matchgroup=NONE start="//" end="$" keepend
syn region eComment	start="/\*" end="\*/" extend fold
syn region eString	start="\"" end="\"" skip="\\\\\|\\\"" contains=eStringBrackets
syn region eStringBrackets matchgroup=eStrBracket start=/{/ end=/}/ contained

hi def link eComment	Comment
"hi def link eStringBracketst	Undefined
hi def link eString		Type
"hi def link eConstant	 Constant
"hi def link eIdentifier Identifier
hi def link eStatement	Function
hi def link eType		Special
hi def link eDigit		Constant
hi def link eBool		Constant
hi def link eOperator	Statement
hi def link eStrBracket	Statement

let b:current_syntax = 'escript'
hi def link par1 Statement
hi def link par2 PreProc
hi def link par3 Constant

"syn keyword eCt	comment comment light blue
"syn keyword eCo constant number magenta
"syn keyword eI identifier blue
"syn keyword eS statement ops yellow
"syn keyword eP preproc funcs dark blue
"syn keyword eT type string green
"syn keyword eSp special var light braun
"syn keyword eU undefined
"syn keyword eE error
"hi def link eCt Comment
"hi def link eCo Constant
"hi def link eI Identifier
"hi def link eS Statement
"hi def link eP PreProc
"hi def link eT Type
"hi def link eSp Special
"hi def link eU Undefined
"hi def link eE Error

