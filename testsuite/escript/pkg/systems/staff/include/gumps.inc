use uo;
use os;

include ":gumps:gumps";

const LABEL_COLOR := 0x7FFF;
const SELECTED_COLOR := 0x421F;
const DISABLED_COLOR := 0x4210;

const LABEL_COLOR_32 := 0xFFFFFF;
const SELECTED_COLOR_32 := 0x8080FF;
const DISABLED_COLOR_32 := 0x808080;

const LABEL_HUE := 0x480;
const GREEN_HUE := 0x40;
const RED_HUE := 0x20;

function BaseBackground()

  var gump := GFCreateGump( 50, 50 );
  GFResizePic( gump, 0, 0, 9250, 426, 446 );
  AddBlackAlpha( gump, 13, 13, 170, 100 );
  AddBlackAlpha( gump, 188, 13, 225, 100 );
  AddBlackAlpha( gump, 13, 118, 400, 260 );
  AddBlackAlpha( gump, 13, 383, 400, 50 );

  return gump;
endfunction

function AddButtonLabeled( byref gump, byref x, byref y, byref button_id,
                           byref text, byref page )

  if ( page == button_id )
    GFGumpPic( gump, x, y - 1, 4006 );
    GFHTMLArea( gump, x + 35, y, 240, 20,
                "<BASEFONT COLOR=#8080FF>" + text + "</BASEFONT>", 0, 0 );
  else
    GFAddButton( gump, x, y - 1, 4005, 4007, GF_CLOSE_BTN, button_id );
    GFHTMLArea( gump, x + 35, y, 240, 20,
                "<BASEFONT COLOR=#FFFFFF>" + text + "</BASEFONT>", 0, 0 );
  endif
endfunction

function AddBlackAlpha( byref gump, byref x, byref y, byref width, byref height )

  GFPicTiled( gump, x, y, width, height, 2624 );
  GFAddAlphaRegion( gump, x, y, width, height );
endfunction
