include ":gumps:gumps";
include ":gumps:gumps_ex";
include ":datafile:datafile";

// Button IDs
const COLLAPSE_BTN := 0xA00;
const EXPAND_BTN := 0xA01;
const CMDLIST_BTN := 0xA02;
const REFRESH_BTN := 0xA03;
const CMDLVLS_BTN := 0xA04;
const SETTINGS_BTN := 0xA05;
const APPLY_BTN := 0xA06;
// Check boxes
const TRANSPARENT_CHK := 0xA07;
const MOVABLE_CHK := 0xA08;
const LOGIN_CHK := 0xA09;
// Button ID ranges
const PKG_START := 0xB00;
const LVL_START := 0xC00;
const CMD_START := 0xD00;

// 'Page' flipping buttons
const PKG_PAGE_START := 0xA000;
const SCRIPT_PAGE_START := 0xB000;

const TRANSPARENT := 1;
const CLOSE_BTN := 0x01A;

function ICP_ExpandedMenuBar( transparency := 0 )

  var gump := GFCreateGump();

  GFClosable( gump, 0 );
  GFResizePic( gump, 0, 0, GFGetCfgConst( "BackGrounds", "STONESLAB" ), 640,
               30 );

  GFAddButton( gump, 35, 4, 0x98D, 0x98D, GF_CLOSE_BTN, CMDLIST_BTN );
  GFAddButton( gump, 150, 4, 0x98D, 0x98D, GF_CLOSE_BTN, CMDLVLS_BTN );
  GFAddButton( gump, 500, 4, 0x98D, 0x98D, GF_CLOSE_BTN, SETTINGS_BTN );

  if ( transparency )
    GFAddAlphaRegion( gump, 0, 0, 640, 30 );
  endif

  GFAddButton( gump, 5, 5, 0x15A4, 0x15A4, GF_CLOSE_BTN, COLLAPSE_BTN );

  GFTextLine( gump, 57, 5, 2100, "Commands" );
  GFTextLine( gump, 182, 5, 2100, "Levels" );
  GFTextLine( gump, 528, 5, 2100, "Settings" );

  return gump;
endfunction
