
// autogenerated
// clang-format off
#include "baredistro.h"

#include <utility>

namespace Pol
{
namespace PolTool
{
void BareDistro::distro_files( std::map<fs::path, std::vector<std::string>>& distro )
{
  distro.emplace( "config/cmds.cfg",
                  std::initializer_list<std::string>( {
"CmdLevel Player",
"{",
"}",
"",
"CmdLevel Test",
"{",
"}",
                  } ) );

  distro.emplace( "config/itemdesc.cfg",
                  std::initializer_list<std::string>( {
"Container 0xE75",
"{",
"	//MainStuff",
"	Name		BackPackCore",
"	Name		BackPack",
"	Desc		back pack",
"",
"	//ContainerInfo",
"	Gump		0x3C",
"	MinX		44",
"	MaxX		143",
"	MinY		65",
"	MaxY		140",
"	MaxItems	5000",
"	MaxWeight	0",
"}",
"",
"Container 0x2006",
"{",
"	//MainStuff",
"	Name		Corpse",
"",
"	//ContainerInfo",
"	Gump		0x9",
"	MinX		20",
"	MaxX		80",
"	MinY		85",
"	MaxY		165",
"	MaxItems	0",
"	MaxWeight	0",
"}",
"",
"Weapon 0x1F020",
"{",
"	//MainStuff",
"	Name		Intrinsic Weapon",
"	Desc		Intrinsic Weapon",
"	Graphic		1",
"",
"	//WeaponInfo",
"	Speed		40",
"	Attribute	Tactics",
"	Anim		0x9",
"	Damage		1d8",
"	HitSound	0x13E",
"	MissSound	0x234",
"	MaxHP		1",
"",
"	//Booleans",
"	SaveOnExit	0",
"}",
"",
"Armor 0x1F022",
"{",
"    Name            intrinsicshield",
"    Graphic         1",
"    MaxHP           1",
"    SaveOnExit      0",
"}",
"",
"Container 0x1FF01",
"{",
"	//MainStuff",
"	Name		SecureTradeContainer",
"	Desc		secure trade container",
"	Graphic		0x1E5E",
"	Weight		0",
"",
"	//ContainerInfo",
"	Gump		0x3C",
"	MinX		0",
"	MaxX		66",
"	MinY		0",
"	MaxY		33",
"	MaxItems	500",
"	MaxWeight	0",
"}",
"",
"Container 0x1FF02",
"{",
"	//MainStuff",
"	Name		WornItemsContainer",
"	Desc		WornItemsContainer",
"	Graphic		0x2",
"	Weight		0",
"",
"	//ContainerInfo",
"	Gump		0x3C",
"	MinX		0",
"	MaxX		66",
"	MinY		0",
"	MaxY		33",
"	MaxItems	65535",
"	MaxWeight	65535",
"}",
                  } ) );

  distro.emplace( "config/repsys.cfg",
                  std::initializer_list<std::string>( {
"General",
"{",
"	CriminalFlagInterval	120		# Time, in seconds, for which you will be marked criminal",
"	AggressorFlagTimeout	120		# Time, in seconds, for which you will be marked an aggressor",
"}",
"",
"NameColoring NameColoring",
"{",
"	Murderer		38",
"	Criminal		905",
"	Attackable		905",
"	Innocent		90",
"",
"	GuildAlly		68",
"	GuildEnemy		44",
"",
"	Invulnerable	53",
"}",
                  } ) );

  distro.emplace( "config/servers.cfg",
                  std::initializer_list<std::string>( {
"GameServer POL-LOCAL",
"{",
"	Name	POL-LocalHost",
"	IP	127.0.0.1",
"	Port	5003",
"	IPMatch	127.0.0.1",
"}",
"",
"GameServer POL-LAN",
"{",
"	Name	POL-LAN",
"	IP	--lan--",
"	Port	5003",
"	IPMatch	192.168.0.0/255.255.0.0",
"}",
"",
"GameServer POL-WAN",
"{",
"	Name	POL-WAN",
"	// Below, you should set it to your actual WAN IP instead of --ip--",
"	// example: 45.32.1.23",
"	IP	--ip--",
"	Port	5003",
"}",
                  } ) );

  distro.emplace( "config/servspecopt.cfg",
                  std::initializer_list<std::string>( {
"## This file is needed because new clients have different total skills & stats,",
"## which is not supported by default in the core.",
"",
"##",
"## servspecopt.cfg - Server Specific Options",
"##",
"##                   Options relating to gameplay",
"##",
"##  NOTE: It is recommended that you copy this file to 'servspecopt.local.cfg'",
"##        and set your settings there; new distributions will not overwrite",
"##        your changes to servspecopt.local.cfg",
"##",
"",
"#",
"# StartingGold - Amount of gold the core gives a character on creation.",
"#                In the distro it is created in the newCharacter package.",
"#",
"StartingGold=100",
"",
"#",
"# NewbieStartingEquipment 1/0 (default 1) to determine if equipped items",
"# created during the character creation should be newbied or not.",
"NewbieStartingEquipment=1",
"",
"#",
"# SupportFaces 0/1/2 (default 0)",
"# set it to 1 to support basic faces",
"# set it to 2 to support roleplay faces (sets 0x2000 flag in 0xB9 packet)",
"# Note: Faces are normal items (like hair/beard) with layer 15, objtype 0x3B44-0x3B57",
"# roleplay faces 0x3B4E-0x3B57#",
"SupportFaces=0",
"",
"#",
"# CoreSendsSeason 1/0 (default 1)",
"# Determines if the core should send season packet on char creation/logon/reconnect and realm",
"# change based on the season entry in realm.cfg.",
"CoreSendsSeason=1",
"",
"#",
"# CoreGuildMessages=0/1,  Default = 1",
"# Determine if core handles guild and alliance messages.",
"CoreGuildMessages=1",
"",
"#",
"# CoreHandledTags (default 0xFFFF)",
"# bitfield to determine which tags are displayed on singleclick, current used bits are:",
"# 0x1  [title_guild]",
"# 0x2  [frozen]",
"# 0x4  [paralyzed]",
"# 0x8  [squelched]",
"# 0x10 [deafened]",
"CoreHandledTags=0xFFFF",
"",
"",
"#",
"# CoreIgnoresDefenceCaps = 0/1, Default = 0",
"# If set to 1 core will not calculate resistances and defence increase limits set on the mobile.",
"CoreIgnoresDefenceCaps=0",
"",
"#",
"# SpeedhackPrevention - 1/0 (default 0)",
"# chr priv \"speedhack\" disables Speedhack Prevention for chr",
"SpeedhackPrevention=0",
"",
"#",
"# SpeedHack_MountRunDelay	default 80 ms",
"# SpeedHack_MountWalkDelay	default 180 ms",
"# SpeedHack_FootRunDelay		default 180 ms",
"# SpeedHack_FootWalkDelay	default 380 ms",
"#",
"# Change them on your own risk",
"SpeedHack_MountRunDelay=80",
"SpeedHack_MountWalkDelay=180",
"SpeedHack_FootRunDelay=180",
"SpeedHack_FootWalkDelay=380",
"",
"",
"",
"",
"# ScriptedMerchantHandlers - 1/0 (default 0 )",
"# If enabled, the below change will come into effect:",
"# When a player buys something from a merchant the core will not longer handle taking gold from the player, and moving items to the players pack.",
"# When the event for EVID_MERCHANT_SOLD and EVID_MERCHANT_BOUGHT is sent it will be a struct containing the following struct:",
"# struct.type = EVID_MERCHANT_SOLD or EVID_MERCHANT_BOUGHT",
"# struct.source = player buying",
"# struct.shoppinglist = array( struct.item, struct.amount )",
"#",
"# The shopping list items will still be items in the merchant's container.",
"# It is up to the script to split the items from the stacks there and move them to the player's pack.",
"# It is also up to the script to handle gold checks and consumption.",
"ScriptedMerchantHandlers=0",
"",
"#",
"# UseTileFlagPrefix - Determines if core adds A/AN as a prefix to item names",
"#                     based on their tiles.cfg settings.",
"#",
"UseTileFlagPrefix=1",
"",
"#",
"# DefaultDoubleclickRange - doubleclick range if DoubleClickRange isn't",
"#                           specified for an objtype in itemdesc.cfg",
"# Default is 2",
"#",
"DefaultDoubleclickRange=2",
"",
"#",
"# DoubleClickWait - Number of seconds that must pass before a player can",
"#                   double click an object again.",
"# Default is 1",
"#",
"DoubleClickWait=1",
"",
"#",
"# DefaultLightLevel - Default light level for regions with no level defined.",
"# Default is 10",
"#",
"DefaultLightLevel=10",
"",
"#",
"# CoreSendsCaps - 1/0 (default 0), makes POL send",
"#                 attribute cap information in the Send Skills (0x3A) packet.",
"CoreSendsCaps=0",
"",
"#",
"# DefaultAttributeCap - defines which value POL should use as cap for attributes.",
"# Value is in tenths so a value of 1000 equals 100.0 attribute cap.",
"# Default is 1000",
"#",
"DefaultAttributeCap=1000",
"",
"#",
"# CoreHandledLocks 1/0 Statlock change (Extended Stats, 0xBF sub 0x1A) will be handled if",
"#                    enabled. It will now send statlock (Extended Stats, 0xBF sub 0x19)",
"#                    on every status update.",
"# Default is 0",
"#",
"CoreHandledLocks=0",
"",
"#",
"# AllowMovingTrade - (default 0). 0 = Disable moving more than 4 tiles with an open trade window.",
"#                    If you move more than 4 tiles from who trading with, cancels trade.",
"AllowMovingTrade=0",
"",
"#",
"# From core-changes.txt Re this option:",
"# Added: support for new ObjectCacheInfos introduced in 5.0.0",
"# old behavior: Server sends 0xBF Sub 0x10 per object ->Client response also with 0xBF Sub 0x10 per item",
"# new behavior: Server sends 0xDC per object -> Client response with 0xD6 (there can be more then one serial up to ~16)",
"# intern check is",
"# if ((ssopt.ForceNewObjCachePackets) || (isUOKR) || (clientversion.major>=5))",
"# since the client sends his clientversion not instantly the first few ObjCacheInfos are sent",
"# the old way (thats why the new ssopt is added)",
"# Note: since client 6.0.5.0 the clientversion is instantly known (new seed packet)",
"# Default is 0",
"#",
"ForceNewObjCachePackets=0",
"",
"# PrivacyPaperdoll",
"# If enabled, Paperdoll gives only char name for others",
"# Default is 0",
"#",
"PrivacyPaperdoll=0",
"",
"#",
"# SeperateSpeechTokens=0/1",
"# When set RegisterForSpeechEvents() and EnableEvents/DisableEvents behave differently.",
"# Added: uo:RegisterForSpeechEvents Flags LISTENPT_HEAR_TOKENS,LISTENPT_NO_SPEECH",
"# Added: SYSEVENT_TOKEN_SPEECH:=0x4000 and SYSEVENT_TOKEN_GHOST_SPEECH:=0x8000 for uo:EnableEvents/DisableEvents",
"# Note: if SeperateSpeechTokens is set you can control which events you get,",
"# for NPCs you only get speech with tokens if you set SYSEVENT_TOKEN_SPEECH/SYSEVENT_TOKEN_GHOST_SPEECH",
"# and non Token speech with SYSEVENT_SPEECH,SYSEVENT_GHOST_SPEECH",
"# for RegisterForSpeechEvents() you get speech with and without Tokens when setting LISTENPT_HEAR_TOKENS and no speech without Tokens",
"# setting LISTENPT_NO_SPEECH",
"# Note: Token and nonToken Eventtype is still the same (SYSEVENT_SPEECH)",
"# Default is 0",
"#",
"SeperateSpeechTokens=0",
"",
"#",
"# SpeechRange",
"# Default is 12",
"#",
"SpeechRange=12",
"",
"#",
"# WhisperRange",
"# Default is 2",
"#",
"WhisperRange=2",
"",
"#",
"# YellRange",
"# Default is 25",
"#",
"YellRange=25",
"",
"# CarryingCapacityMod - (value type is a double) as * modifier for mobile max_weight",
"#                       Note: Formula is (40 + strength * 7 / 2) * ssopt.CarryingCapacityMod",
"#                       Note: Since ML max weight is send for statusgump",
"# Default is 1.0",
"#",
"CarryingCapacityMod=1.0",
"",
"#",
"# DefaultCharacterHeight",
"# This will be the default (and never changed so far) height of Characters",
"# and NPCs. Default value is 15. Back in the POL095 days is was 9, so consider",
"# 9-15 as your \"safe\" play range. Anything outside that range could cause weird",
"# movement behavior. Even small changes will have a great impact on LOS",
"# calculations and, more in general, on the combat system.",
"# It is also used to calculate wether a Character can fit under a low",
"# passage (e.g. dungeon stairs).",
"# Keep in mind a Titan and a Slime will have the same height.",
"# Default is 15",
"#",
"DefaultCharacterHeight=15",
"",
"#",
"# SendStatLocks to send the stat locks message.",
"# Beware that this message will only be sent to clients which have major version > 3",
"# (to avoid breaking older ones).",
"# Default is 0",
"#",
"SendStatLocks=0",
"",
"#",
"# UseContainerSlots - true/false",
"# Default is 0",
"#",
"UseContainerSlots=0",
"",
"# MaxContainerSlots - This will allow setting the internal overall allowed item count for containers.",
"#                     This is introduced for future KR support. KR client is only 125, but we are",
"#                     making this here so custom clients later can support more slots.",
"#                     If you have containers with max item count over 125 and use ONLY 2D,",
"#                     and not KR, set this to your highest amount used!",
"# Default is 125",
"#",
"MaxContainerSlots=125",
"",
"#",
"# EventVisibilityCoreChecks - If enabled, the core will not send system events",
"# to NPCs unless they are visible to the source.",
"# Visibility is based on:",
"# Source is logged in",
"# Source is not hidden / concealed",
"#",
"# If disabled, you will do the checks yourself in the scripts.",
"# Default is 0",
"#",
"EventVisibilityCoreChecks=0",
"",
"#",
"# MovementUsesStamina - stamina cost per movement will be enforced, using",
"#                       weight and carrying capacity.",
"# Default is 1",
"#",
"MovementUsesStamina=1",
"",
"#",
"# AllowSecureTradingInWarMode - 1/0",
"# Default is 1",
"#",
"AllowSecureTradingInWarMode=1",
"",
"#",
"# TotalStatsAtCreation - 65 for older clients, 80 for newer.",
"#                        Accepts any value you like, but those are the",
"#                        important ones. Accepts lists and ranges, for",
"#                        instance: 65,80,90-95,100",
"# Default is 65,80",
"#",
"TotalStatsAtCreation=65,80, 90",
"",
"#",
"# DecayItems - Determines if the decay system is enabled or not.",
"# Default is 1",
"#",
"DecayItems=1",
"",
"#",
"# DefaultDecayTime - minimum number of minutes before movable items decay (are destroyed)",
"# Default is 10",
"#",
"DefaultDecayTime=10",
"",
"#",
"# DefaultContainerMaxItems and",
"# DefaultContainerMaxWeight",
"# These values will be used for containers that do not define \"MaxItems\" and \"MaxWeight\"",
"# in their itemdesc.cfg entries.",
"# Default DefaultContainerMaxItems is 125",
"# Default DefaultContainerMaxWeight is 250",
"#",
"DefaultContainerMaxItems=125",
"DefaultContainerMaxWeight=250",
"",
"# UO Feature Enable: Packet 0xA9 Dword, used by newer clients to enable",
"# specific features or configurations.",
"# NOTE this value will not be used in packet 0xB9 (specific UO expansion enable),",
"# best to send that in login/reconnect.src.",
"# BE VERY CAREFUL WITH THIS SETTING, VERY POSSIBLE IT IS HARMFUL.",
"#",
"# I would also not expect any of these to work, but they're here for completeness.",
"# Set to 0x00 if you don't know what you're doing.",
"#",
"# Values courtesy of LordBinary, and DarkStorm",
"#",
"# 0x02 = send config/req logout (IGR?)",
"# 0x04 = single character (siege)",
"# 0x08 = enable npcpopup menus",
"# 0x10 = unknown",
"# 0x20 = enable common AOS features (tooltip thing/fight system book, but",
"#        not AOS monsters/map/skills (0xB9 controls))",
"#",
"# Be sure to set InvulTag to 2 if using AOSTooltip setting. This is so the Invul",
"# color will show correctly in the tooltips.",
"# Default i 0x1A8",
"#",
"UOFeatureEnable=0x01A8",
"",
"#",
"# HiddenTurnsCount",
"# This will define whether or not turns made while hidden will count as a \"move\".",
"# It defaults to 1, which is the way POL has always previously operated.  If set",
"# to zero, then if you are hidden and make a turn, it will not count against your",
"# stealth steps, nor will it unhide you if you are not stealthing.  If set to one,",
"# turns while hidden do count against stealthsteps, and will unhide you if you",
"# are not stealthing.",
"# Default is 1",
"#",
"HiddenTurnsCount=1",
"",
"#",
"# InvulTag",
"# This will define whether or not to display the Invul tag for mobs, and if so, HOW",
"# to display them. It defaults to 1, which is the way POL has always previously operated.",
"# If set to zero, then there will be no way to tell invuls from not by single click, etc.",
"# If set to 2 (only use this if your shard is for 3.x+ Clients!) it will remove the",
"# invul tag on their name, and make them highlightable as Yellow/Gold instead!",
"# Default is 1",
"#",
"InvulTag=1",
"",
"#",
"# MaxPathFindRange",
"# This will define the maximum distance between the start and destination points",
"# which pathfinding will be performed on.  If PathFind is called on points greater",
"# than this value, an error result will be returned with \"Beyond Max Range.\" as",
"# the errortext. Default value for this is 50.",
"#",
"MaxPathFindRange=50",
"",
"#UseWinLFH=0|1",
"# Use Windows XP/2003 low-fragmentation Heap?",
"# Default is 0",
"#",
"UseWinLFH=0",
"",
"#",
"# ItemColorMask",
"# It is a bitmask of what colors should be considered valid.  For example, with an",
"# ItemColorMask of 0xFFF, any color from 0 to 4095 is considered a valid color.With",
"# an ItemColorMask of 0xFF, this would be reduced to a range from 0 to 255.  It was",
"# left a mask instead of given as a range in order to allow specifying certain bits",
"# to be on.  So, for instance, with the newer clients, a mask of 0x4FFF will allow",
"# the third bit (value 4) of the most significant nibble to be turned on, but no",
"# others in that nibble.  This allows for newer clients to use the \"transparent",
"# animation\" feature, which allows equipped mounts to be transparent(ie, ethereals).",
"# Bear in mind, older clients may well crash if you set colors to be outside of the",
"# non-default mask of 0xFFF, so this is strictly at your own risk to use it.  But",
"# for those of you wishing ethereal beetles and other mount animations to be",
"# ethereal, you will have to set the mount piece to be color 0x4001 and then equip",
"# it. And in order to do that, you will need an ItemColorMask of 0x4FFF.",
"# Default is 0x4FFF",
"#",
"ItemColorMask=0x4FFF",
"",
"#",
"# HonorUnequipScriptOnDeath",
"# If enabled, the core will call unequip and unequiptest scripts on death and obey their return value.",
"# Default is 0",
"#",
"HonorUnequipScriptOnDeath=0",
"",
"#",
"# MobilesBlockNpcMovement",
"# If enabled mobiles will block the movement of npcs.",
"# Default is 1",
"#",
"MobilesBlockNpcMovement=1",
"",
"#",
"# DefaultAccessibleRange",
"#",
"# This is the default range test for the Accessible()",
"# function in uo.em. You can specify a range in",
"# the function call. See the POL documentation for",
"# details. The default value is 18 squares.",
"# The previous documentation that listed it as 2",
"# squares was in error. Internally POL had a set",
"# range of 18 squares for this function.",
"# The default value was chosen to prevent breaking",
"# legacy (old) scripts that might rely on the previos",
"# way Accessible worked.",
"#",
"DefaultAccessibleRange=2",
"",
"# EnableWorldMapPackets - 1/0 (default 0)",
"#",
"# Custom clients have implemented a packet that tracks the position of party and",
"# guild members. This enables the client to overlay member positions on a world",
"# map directly inside the client. Set to 1 to enable core handling of this packet.",
"#",
"EnableWorldMapPackets=0",
"",
"#",
"# UndoGetItemEnableRangeCheck - 1/0 (default 0)",
"#",
"# If enabled - on fail to equip item back on character (if it has been taken from character layer)",
"# and on fail to put item back to backpack will check if item has been taken from position/container",
"# that is in default_accessible_range.",
"# If origin position/container is not in default_accessible_range will skip try to put item ",
"# to origin position/container (unless item is no_drop) and as last resort will drop item at character",
"# position (feet). UndoGetItemDropHere executed before UndoGetItemEnableRangeCheck if both are set.",
"#",
"UndoGetItemEnableRangeCheck=0",
"",
"#",
"# UndoGetItemDropHere - 1/0 (default 0)",
"#",
"# If enabled - on fail to equip item back on character (if it has been taken from character layer)",
"# and on fail to put item back to backpack drops item at character position (feet), except no_drop items.",
"# Attempt to return item in origin container will be skipped.",
"#",
"UndoGetItemDropHere=0",
                  } ) );

  distro.emplace( "config/startloc.cfg",
                  std::initializer_list<std::string>( {
"//",
"// Recent change for Client 1.26: Starting Locations must be in the following",
"// order: Yew, Minoc, Britain, Moonglow, Trinsic, Magincia, Jhelom, Skara Brae, Vesper",
"//",
"//",
"// StartingLocation",
"// {",
"//     City        (string CityName)",
"//     Description (string Description)",
"//     MapID       (int mapid {default 0})",
"//     Cliloc      (int clilocid {default 1075072})",
"//     Coordinate  (int x),(int y),(int z)",
"//     Realm       (string realm)",
"// }",
"//",
"// Documentation can be found: https://docs.polserver.com/pol100/configfiles.php#startloc.cfg",
"",
"StartingLocation",
"{",
"	City		Yew",
"	Description	Town Center",
"	Coordinate	535,992,0",
"}",
"",
"StartingLocation",
"{",
"	City		Minoc",
"	Description	Minoc Inn",
"	Coordinate	2476,411,15",
"}",
"",
"StartingLocation",
"{",
"	City		Britain",
"	Description	Britain Inn",
"	Coordinate	1492,1628,12",
"}",
"",
"",
"StartingLocation",
"{",
"	City		Moonglow",
"	Description	Moonglow Inn",
"	Coordinate	4403,1170,0",
"}",
"",
"StartingLocation",
"{",
"	City		Trinsic",
"	Description	Trinsic Inn",
"	Coordinate	1942,2793,0",
"}",
"",
"StartingLocation",
"{",
"	City		Magincia",
"	Description	Magincia Inn",
"	Coordinate	3739,2223,0",
"}",
"",
"StartingLocation",
"{",
"	City		Jhelom",
"	Description	Jhelom Inn",
"	Coordinate	1378,3817,0",
"}",
"",
"StartingLocation",
"{",
"	City		Skara Brae",
"	Description	Skara Brae Inn",
"	Coordinate	619,2234,0",
"}",
"",
"StartingLocation",
"{",
"	City		Vesper",
"	Description	Vesper Inn",
"	Coordinate	2978,878,0",
"}",
"",
"",
"//StartingLocation",
"//{",
"//	City		Britain",
"//	Description	Castle Blackthorne",
"//	Coordinate	1523,1458,30",
"//}",
"",
"//StartingLocation",
"//{",
"//	City		Wind",
"//	Description	Main Entrance",
"//	Coordinate	5223,189,5",
"//}",
"",
"//StartingLocation",
"//{",
"//	City		Trinsic",
"//	Description	Docks",
"//	Coordinate	2053,2857,0",
"//}",
"",
"",
"//StartingLocation",
"//{",
"//	City		Buccaneer's Den",
"//	Description	Docks",
"//	Coordinate	2736,2166,0",
"//}",
"",
"",
"//StartingLocation",
"//{",
"//	City		Occlo",
"//	Description	Docks",
"//	Coordinate	3650,2653,0",
"//}",
"",
"//StartingLocation",
"//{",
"//	City		Nujhelm",
"//	Description	Docks",
"//	Coordinate	3803,1279,10",
"//}",
"",
"//StartingLocation",
"//{",
"//	City		Cove",
"//	Description	East Gate",
"//	Coordinate	2285,1209,0",
"//}",
"",
"//StartingLocation",
"//{",
"//	City		Vesper",
"//	Description	Ironwood Inn",
"//	Coordinate	2771,977,0",
"//}",
"",
"//StartingLocation",
"//{",
"//	City		Vesper",
"//	Description	The Magician's Friend",
"//	Coordinate	3000,835,0",
"//}",
                  } ) );

  distro.emplace( "pkg/systems/accounts/pkg.cfg",
                  std::initializer_list<std::string>( {
"Enabled		1",
"Name		accounts",
"Version		1.0",
"",
"CoreRequired	100",
"",
"Maintainer	POL Distro Team",
"Email		distro@polserver.com",
                  } ) );

  distro.emplace( "pkg/systems/accounts/config/uoclient.cfg",
                  std::initializer_list<std::string>( {
"General",
"{",
"	Strength		Strength",
"	Intelligence	Intelligence",
"	Dexterity		Dexterity",
"	Hits			Life",
"	Mana			Mana",
"	Stamina			Stamina",
"	MaxSkillID	57",
"}",
"",
"Listener	none-5003",
"{",
"	Port	5003",
"	Encryption		none",
"	AOSResistances	0",
"	KeepClients	1",
"}",
                  } ) );

  distro.emplace( "pkg/systems/attributes/pkg.cfg",
                  std::initializer_list<std::string>( {
"Enabled		1",
"Name		attributes",
"Version		1.0",
"",
"CoreRequired	100",
"",
"Maintainer	POL Distro Team",
"Email		distro@polserver.com",
                  } ) );

  distro.emplace( "pkg/systems/attributes/config/attributes.cfg",
                  std::initializer_list<std::string>( {
"Attribute Strength",
"{",
"	AttributeType	Stat",
"	Alias		STR",
"}",
"",
"Attribute Intelligence",
"{",
"	AttributeType	Stat",
"	Alias		INT",
"}",
"",
"Attribute Dexterity",
"{",
"	AttributeType	Stat",
"	Alias		DEX",
"}",
"",
"",
"Attribute Alchemy",
"{",
"	AttributeType	Skill",
"	SkillId			0",
"}",
"",
"Attribute Anatomy",
"{",
"	AttributeType	Skill",
"	SkillId			1",
"}",
"",
"Attribute AnimalLore",
"{",
"	AttributeType	Skill",
"	SkillId			2",
"}",
"",
"Attribute ItemIdentification",
"{",
"	AttributeType	Skill",
"	SkillId			3",
"}",
"",
"Attribute ArmsLore",
"{",
"	AttributeType	Skill",
"	SkillId			4",
"}",
"",
"Attribute Parry",
"{",
"	AttributeType	Skill",
"	SkillId			5",
"}",
"",
"Attribute Begging",
"{",
"	AttributeType	Skill",
"	SkillId			6",
"}",
"",
"Attribute Blacksmithy",
"{",
"	AttributeType	Skill",
"	SkillId			7",
"}",
"",
"Attribute BowcraftFletching",
"{",
"	AttributeType	Skill",
"	SkillId			8",
"}",
"",
"Attribute Peacemaking",
"{",
"	AttributeType	Skill",
"	SkillId			9",
"}",
"",
"Attribute Camping",
"{",
"	AttributeType	Skill",
"	SkillId			10",
"}",
"",
"Attribute Carpentry",
"{",
"	AttributeType	Skill",
"	SkillId			11",
"}",
"",
"Attribute Cartography",
"{",
"	AttributeType	Skill",
"	SkillId			12",
"}",
"",
"Attribute Cooking",
"{",
"	AttributeType	Skill",
"	SkillId			13",
"}",
"",
"Attribute DetectingHidden",
"{",
"	AttributeType	Skill",
"	SkillId			14",
"}",
"",
"Attribute Discordance",
"{",
"	AttributeType	Skill",
"	SkillId			15",
"}",
"",
"Attribute EvaluatingIntelligence",
"{",
"	AttributeType	Skill",
"	SkillId			16",
"}",
"",
"Attribute Healing",
"{",
"	AttributeType	Skill",
"	SkillId			17",
"}",
"",
"Attribute Fishing",
"{",
"	AttributeType	Skill",
"	SkillId			18",
"}",
"",
"Attribute ForensicEvaluation",
"{",
"	AttributeType	Skill",
"	SkillId			19",
"}",
"",
"Attribute Herding",
"{",
"	AttributeType	Skill",
"	SkillId			20",
"}",
"",
"Attribute Hiding",
"{",
"	AttributeType	Skill",
"	SkillId			21",
"}",
"",
"Attribute Provocation",
"{",
"	AttributeType	Skill",
"	SkillId			22",
"}",
"",
"Attribute Inscription",
"{",
"	AttributeType	Skill",
"	SkillId			23",
"}",
"",
"Attribute Lockpicking",
"{",
"	AttributeType	Skill",
"	SkillId			24",
"}",
"",
"Attribute Magery",
"{",
"	AttributeType	Skill",
"	SkillId			25",
"}",
"",
"Attribute ResistingSpells",
"{",
"	AttributeType	Skill",
"	SkillId			26",
"}",
"",
"Attribute Tactics",
"{",
"	AttributeType	Skill",
"	SkillId			27",
"}",
"",
"Attribute Snooping",
"{",
"	AttributeType	Skill",
"	SkillId			28",
"}",
"",
"Attribute Musicianship",
"{",
"	AttributeType	Skill",
"	SkillId			29",
"}",
"",
"Attribute Poisoning",
"{",
"	AttributeType	Skill",
"	SkillId			30",
"}",
"",
"Attribute Archery",
"{",
"	AttributeType	Skill",
"	SkillId			31",
"}",
"",
"Attribute SpiritSpeak",
"{",
"	AttributeType	Skill",
"	SkillId			32",
"}",
"",
"Attribute Stealing",
"{",
"	AttributeType	Skill",
"	SkillId			33",
"}",
"",
"Attribute Tailoring",
"{",
"	AttributeType	Skill",
"	SkillId			34",
"}",
"",
"Attribute AnimalTaming",
"{",
"	AttributeType	Skill",
"	SkillId			35",
"}",
"",
"Attribute TasteIdentification",
"{",
"	AttributeType	Skill",
"	SkillId			36",
"}",
"",
"Attribute Tinkering",
"{",
"	AttributeType	Skill",
"	SkillId			37",
"}",
"",
"Attribute Tracking",
"{",
"	AttributeType	Skill",
"	SkillId			38",
"}",
"",
"Attribute Veterinary",
"{",
"	AttributeType	Skill",
"	SkillId			39",
"}",
"",
"Attribute Swordsmanship",
"{",
"	AttributeType	Skill",
"	SkillId			40",
"}",
"",
"Attribute MaceFighting",
"{",
"	AttributeType	Skill",
"	SkillId			41",
"}",
"",
"Attribute Fencing",
"{",
"	AttributeType	Skill",
"	SkillId			42",
"}",
"",
"Attribute Wrestling",
"{",
"	AttributeType	Skill",
"	SkillId			43",
"}",
"",
"Attribute Lumberjacking",
"{",
"	AttributeType	Skill",
"	SkillId			44",
"}",
"",
"Attribute Mining",
"{",
"	AttributeType	Skill",
"	SkillId			45",
"}",
"",
"Attribute Meditation",
"{",
"	AttributeType	Skill",
"	SkillId			46",
"}",
"",
"Attribute Stealth",
"{",
"	AttributeType	Skill",
"	SkillId			47",
"}",
"",
"Attribute RemoveTrap",
"{",
"	AttributeType	Skill",
"	SkillId			48",
"}",
                  } ) );

  distro.emplace( "pkg/systems/attributes/config/uoskills.cfg",
                  std::initializer_list<std::string>( {
"Skill 0",
"{",
"	Attribute Alchemy",
"}",
"",
"Skill 1",
"{",
"	Attribute Anatomy",
"}",
"",
"Skill 2",
"{",
"	Attribute AnimalLore",
"}",
"",
"Skill 3",
"{",
"	Attribute ItemIdentification",
"}",
"",
"Skill 4",
"{",
"	Attribute ArmsLore",
"}",
"",
"Skill 5",
"{",
"	Attribute Parry",
"}",
"",
"Skill 6",
"{",
"	Attribute Begging",
"}",
"",
"Skill 7",
"{",
"	Attribute Blacksmithy",
"}",
"",
"Skill 8",
"{",
"	Attribute BowcraftFletching",
"}",
"",
"Skill 9",
"{",
"	Attribute Peacemaking",
"}",
"",
"Skill 10",
"{",
"	Attribute Camping",
"}",
"",
"Skill 11",
"{",
"	Attribute Carpentry",
"}",
"",
"Skill 12",
"{",
"	Attribute Cartography",
"}",
"",
"Skill 13",
"{",
"	Attribute Cooking",
"}",
"",
"Skill 14",
"{",
"	Attribute DetectingHidden",
"}",
"",
"Skill 15",
"{",
"	Attribute Discordance",
"}",
"",
"Skill 16",
"{",
"	Attribute EvaluatingIntelligence",
"}",
"",
"Skill 17",
"{",
"	Attribute Healing",
"}",
"",
"Skill 18",
"{",
"	Attribute Fishing",
"}",
"",
"Skill 19",
"{",
"	Attribute ForensicEvaluation",
"}",
"",
"Skill 20",
"{",
"	Attribute Herding",
"}",
"",
"Skill 21",
"{",
"	Attribute Hiding",
"}",
"",
"Skill 22",
"{",
"	Attribute Provocation",
"}",
"",
"Skill 23",
"{",
"	Attribute Inscription",
"}",
"",
"Skill 24",
"{",
"	Attribute Lockpicking",
"}",
"",
"Skill 25",
"{",
"	Attribute Magery",
"}",
"",
"Skill 26",
"{",
"	Attribute ResistingSpells",
"}",
"",
"Skill 27",
"{",
"	Attribute Tactics",
"}",
"",
"#Skill 28",
"#{",
"#	Attribute Snooping",
"#}",
"",
"Skill 29",
"{",
"	Attribute Musicianship",
"}",
"",
"Skill 30",
"{",
"	Attribute Poisoning",
"}",
"",
"Skill 31",
"{",
"	Attribute Archery",
"}",
"",
"Skill 32",
"{",
"	Attribute SpiritSpeak",
"}",
"",
"#Skill 33",
"#{",
"#	Attribute Stealing",
"#}",
"",
"Skill 34",
"{",
"	Attribute Tailoring",
"}",
"",
"Skill 35",
"{",
"	Attribute AnimalTaming",
"}",
"",
"Skill 36",
"{",
"	Attribute TasteIdentification",
"}",
"",
"Skill 37",
"{",
"	Attribute Tinkering",
"}",
"",
"Skill 38",
"{",
"	Attribute Tracking",
"}",
"",
"Skill 39",
"{",
"	Attribute Veterinary",
"}",
"",
"Skill 40",
"{",
"	Attribute Swordsmanship",
"}",
"",
"Skill 41",
"{",
"	Attribute Macefighting",
"}",
"",
"Skill 42",
"{",
"	Attribute Fencing",
"}",
"",
"Skill 43",
"{",
"	Attribute Wrestling",
"}",
"",
"Skill 44",
"{",
"	Attribute Lumberjacking",
"}",
"",
"Skill 45",
"{",
"	Attribute Mining",
"}",
"",
"Skill 46",
"{",
"	Attribute Meditation",
"}",
"",
"Skill 47",
"{",
"	Attribute Stealth",
"}",
"",
"Skill 48",
"{",
"	Attribute RemoveTrap",
"}",
                  } ) );

  distro.emplace( "pkg/systems/attributes/config/vitals.cfg",
                  std::initializer_list<std::string>( {
"Vital Life",
"{",
"	Alias                Hits",
"	RegenRateFunction	:attributes:hooks/vitalInit:GetHitsRegenRate",
"	MaximumFunction		:attributes:hooks/vitalInit:GetHitsMaximumValue",
"}",
"",
"Vital Mana",
"{",
"	RegenRateFunction	:attributes:hooks/vitalInit:GetManaRegenRate",
"	MaximumFunction		:attributes:hooks/vitalInit:GetManaMaximumValue",
"}",
"",
"Vital Stamina",
"{",
"	RegenRateFunction	:attributes:hooks/vitalInit:GetStaminaRegenRate",
"	MaximumFunction		:attributes:hooks/vitalInit:GetStaminaMaximumValue",
"}",
                  } ) );

  distro.emplace( "pkg/systems/attributes/hooks/vitalInit.src",
                  std::initializer_list<std::string>( {
"use attributes;",
"",
"program Install()",
"	return 1;",
"endprogram",
"",
"// Regen rates are in 'hundredths of points per minute.' A current regen",
"// rate of 100 (1 point per 5 seconds) would therefore be 1200 (12 points",
"// per minute)",
"exported function GetHitsRegenRate(unused mobile)",
"	return 1200;",
"endfunction",
"",
"exported function GetHitsMaximumValue(mobile)",
"	return GetAttribute(mobile, \"Strength\") * 100;",
"endfunction",
"",
"exported function GetManaRegenRate(unused mobile)",
"	return 1200;",
"endfunction",
"",
"exported function GetManaMaximumValue(mobile)",
"	return GetAttribute(mobile, \"Intelligence\") * 100;",
"endfunction",
"",
"exported function GetStaminaRegenRate(unused mobile)",
"	return 1200;",
"endfunction",
"",
"exported function GetStaminaMaximumValue(mobile)",
"	return GetAttribute(mobile, \"Dexterity\") * 100;",
"endfunction",
                  } ) );

  distro.emplace( "scripts/start.src",
                  std::initializer_list<std::string>( {
"program start(noncrit)",
"    print(\"POL initialization complete.\");",
"endprogram",
                  } ) );


}
}  // namespace PolTool
}  // namespace Pol
// clang-format on
