/**
 * Filename: $(filename)
 *
 * Copyright (C) 1999-2005 Id Software, Inc.
 * Copyright (C) 2000-2018 Frozensand Games Ltd.
 *
 * This file is part of the Urban Terror source code.
 *
 */
#define ITEM_TYPE_TEXT                 0              // simple text
#define ITEM_TYPE_BUTTON               1              // button, basically text with a border
#define ITEM_TYPE_RADIOBUTTON          2              // toggle button, may be grouped
#define ITEM_TYPE_CHECKBOX             3              // check box
#define ITEM_TYPE_EDITFIELD            4              // editable text, associated with a cvar
#define ITEM_TYPE_COMBO                5              // drop down list
#define ITEM_TYPE_LISTBOX              6              // scrollable list
#define ITEM_TYPE_MODEL                7              // model
#define ITEM_TYPE_OWNERDRAW            8              // owner draw, name specs what it is
#define ITEM_TYPE_NUMERICFIELD         9              // editable text, associated with a cvar
#define ITEM_TYPE_SLIDER               10             // mouse speed, volume, etc.
#define ITEM_TYPE_YESNO                11             // yes no cvar setting
#define ITEM_TYPE_MULTI                12             // multiple list setting, enumerated
#define ITEM_TYPE_BIND                 13             // multiple list setting, enumerated

#define ITEM_ALIGN_LEFT                0              // left alignment
#define ITEM_ALIGN_CENTER              1              // center alignment
#define ITEM_ALIGN_RIGHT               2              // right alignment

#define ITEM_TEXTSTYLE_NORMAL          0              // normal text
#define ITEM_TEXTSTYLE_BLINK           1              // fast blinking
#define ITEM_TEXTSTYLE_PULSE           2              // slow pulsing
#define ITEM_TEXTSTYLE_SHADOWED        3              // drop shadow ( need a color for this )
#define ITEM_TEXTSTYLE_OUTLINED        4              // drop shadow ( need a color for this )
#define ITEM_TEXTSTYLE_OUTLINESHADOWED 5              // drop shadow ( need a color for this )
#define ITEM_TEXTSTYLE_SHADOWEDMORE    6              // drop shadow ( need a color for this )
#define ITEM_TEXTSTYLE_SHADOWEDLESS    7              // grey drop shadow

#define WINDOW_BORDER_NONE             0              // no border
#define WINDOW_BORDER_FULL             1              // full border based on border color ( single pixel )
#define WINDOW_BORDER_HORZ             2              // horizontal borders only
#define WINDOW_BORDER_VERT             3              // vertical borders only
#define WINDOW_BORDER_KCGRADIENT       4              // horizontal border using the gradient bars

#define WINDOW_STYLE_EMPTY             0              // no background
#define WINDOW_STYLE_FILLED            1              // filled with background color
#define WINDOW_STYLE_GRADIENT          2              // gradient bar based on background color
#define WINDOW_STYLE_SHADER            3              // gradient bar based on background color
#define WINDOW_STYLE_TEAMCOLOR         4              // team color
#define WINDOW_STYLE_CINEMATIC         5              // cinematic

#define MENU_TRUE                      1              // uh.. true
#define MENU_FALSE                     0              // and false

#define HUD_VERTICAL                   0x00
#define HUD_HORIZONTAL                 0x01

// list box element types
#define LISTBOX_TEXT  0x00
#define LISTBOX_IMAGE 0x01

// list feeders
#define FEEDER_HEADS                  0x00              // model heads
#define FEEDER_MAPS                   0x01              // text maps based on game type
#define FEEDER_SERVERS                0x02              // servers
#define FEEDER_CLANS                  0x03              // clan names
#define FEEDER_ALLMAPS                0x04              // all maps available, in graphic format
#define FEEDER_REDTEAM_LIST           0x05              // red team members
#define FEEDER_BLUETEAM_LIST          0x06              // blue team members
#define FEEDER_PLAYER_LIST            0x07              // players
#define FEEDER_TEAM_LIST              0x08              // team members for team voting
#define FEEDER_MODS                   0x09              // team members for team voting
#define FEEDER_DEMOS                  0x0a              // team members for team voting
#define FEEDER_SCOREBOARD             0x0b              // team members for team voting
#define FEEDER_Q3HEADS                0x0c              // model heads
#define FEEDER_Q3HEADS_RED            0x10
#define FEEDER_Q3HEADS_BLUE           0x11
#define FEEDER_SERVERSTATUS           0x0d              // server status
#define FEEDER_FINDPLAYER             0x0e              // find player
#define FEEDER_CINEMATICS             0x0f              // cinematics
#define FEEDER_STATS_PLAYER_LIST      0x12              // playerlist for the stats (woek)
#define FEEDER_STATS_WEAPONS_LIST     0x13              // weaponlist for the stats (woek)
#define FEEDER_STATS_TEXT_LIST        0x14              // weaponlist for the stats (woek)


// display flags
#define CG_SHOW_BLUE_TEAM_HAS_REDFLAG 0x00000001
#define CG_SHOW_RED_TEAM_HAS_BLUEFLAG 0x00000002
#define CG_SHOW_ANYTEAMGAME           0x00000004
#define CG_SHOW_HARVESTER             0x00000008
#define CG_SHOW_ONEFLAG               0x00000010
#define CG_SHOW_CTF                   0x00000020
#define CG_SHOW_OBELISK               0x00000040
#define CG_SHOW_HEALTHCRITICAL        0x00000080
#define CG_SHOW_SINGLEPLAYER          0x00000100
#define CG_SHOW_TOURNAMENT            0x00000200
#define CG_SHOW_DURINGINCOMINGVOICE   0x00000400
#define CG_SHOW_IF_PLAYER_HAS_FLAG    0x00000800
#define CG_SHOW_LANPLAYONLY           0x00001000
#define CG_SHOW_MINED                 0x00002000
#define CG_SHOW_HEALTHOK              0x00004000
#define CG_SHOW_TEAMINFO              0x00008000
#define CG_SHOW_NOTEAMINFO            0x00010000
#define CG_SHOW_OTHERTEAMHASFLAG      0x00020000
#define CG_SHOW_YOURTEAMHASENEMYFLAG  0x00040000
#define CG_SHOW_ANYNONTEAMGAME        0x00080000
#define CG_SHOW_2DONLY                0x10000000
#define CG_SHOW_SPECTATORS            0x20000000

#define UI_SHOW_LEADER                0x00000001
#define UI_SHOW_NOTLEADER             0x00000002
#define UI_SHOW_FAVORITESERVERS       0x00000004
#define UI_SHOW_ANYNONTEAMGAME        0x00000008
#define UI_SHOW_ANYTEAMGAME           0x00000010
#define UI_SHOW_NEWHIGHSCORE          0x00000020
#define UI_SHOW_DEMOAVAILABLE         0x00000040
#define UI_SHOW_NEWBESTTIME           0x00000080
#define UI_SHOW_FFA                   0x00000100
#define UI_SHOW_NOTFFA                0x00000200
#define UI_SHOW_NETANYNONTEAMGAME     0x00000400
#define UI_SHOW_NETANYTEAMGAME        0x00000800
#define UI_SHOW_NOTFAVORITESERVERS    0x00001000

// owner draw types
// ideally these should be done outside of this file but
// this makes it much easier for the macro expansion to
// convert them for the designers ( from the .menu files )
#define CG_OWNERDRAW_BASE             1
#define CG_PLAYER_ARMOR_ICON          1
#define CG_PLAYER_ARMOR_VALUE         2
#define CG_PLAYER_HEAD                3
#define CG_PLAYER_HEALTH              4
#define CG_PLAYER_AMMO_VALUE          6

#define CG_FLAGCARRIER_HEAD           13
#define CG_FLAGCARRIER_NAME           14
#define CG_FLAGCARRIER_LOCATION       15
#define CG_FLAGCARRIER_STATUS         16
#define CG_FLAGCARRIER_WEAPON         17
#define CG_FLAGCARRIER_POWERUP        18

#define CG_PLAYER_SCORE               20

#define CG_BLUE_FLAGHEAD              21
#define CG_BLUE_FLAGSTATUS            22
#define CG_BLUE_FLAGNAME              23
#define CG_RED_FLAGHEAD               24
#define CG_RED_FLAGSTATUS             25
#define CG_RED_FLAGNAME               26

#define CG_BLUE_SCORE                 27
#define CG_RED_SCORE                  28
#define CG_RED_NAME                   29
#define CG_BLUE_NAME                  30
#define CG_RED_PLAYER_COUNT           31
#define CG_BLUE_PLAYER_COUNT          32
#define CG_FREE_PLAYER_COUNT          33
#define CG_HARVESTER_SKULLS           34              // only shows in harvester
#define CG_ONEFLAG_STATUS             35              // only shows in one flag
#define CG_PLAYER_LOCATION            36
#define CG_TEAM_COLOR                 37
#define CG_CTF_POWERUP                38

#define CG_AREA_POWERUP               39
#define CG_AREA_LAGOMETER             40              // painted with old system
#define CG_PLAYER_HASFLAG             41
#define CG_GAME_TYPE                  42              // not done

#define CG_SELECTEDPLAYER_ARMOR       43
#define CG_SELECTEDPLAYER_HEALTH      44
#define CG_PLAYER_STATUS              45
#define CG_FRAGGED_MSG                46              // painted with old system
#define CG_PROXMINED_MSG              47              // painted with old system
#define CG_AREA_FPSINFO               48              // painted with old system
#define CG_AREA_SYSTEMCHAT            49              // painted with old system
#define CG_AREA_TEAMCHAT              50              // painted with old system
#define CG_AREA_CHAT                  51              // painted with old system
#define CG_GAME_STATUS                52
#define CG_KILLER                     53
#define CG_SPECTATORS                 54
#define CG_TEAMINFO                   55
#define CG_VOICE_HEAD                 56
#define CG_VOICE_NAME                 57
#define CG_PLAYER_HASFLAG2D           58
#define CG_HARVESTER_SKULLS2D         59              // only shows in harvester
#define CG_CAPFRAGLIMIT               60
#define CG_1STPLACE                   61
#define CG_2NDPLACE                   62
#define CG_CAPTURES                   63

// Urban terror
#define CG_PLAYER_WEAPONMODE          70
#define CG_PLAYER_DAMAGE              71
#define CG_SURVIVOR_ROUND_WINNER      72

#define CG_SCOREBOARD_NAME_LIST       73
#define CG_SCOREBOARD_STATUS_LIST     74
#define CG_SCOREBOARD_PING_LIST       75
#define CG_SCOREBOARD_KILL_LIST       76
#define CG_SCOREBOARD_DEATH_LIST      77
#define CG_SCOREBOARD_TIME_LIST       78
#define CG_SCOREBOARD_TEAM_SCORE      79
#define CG_SCOREBOARD_ACCOUNTS_LIST   80
#define CG_SCOREBOARD_BESTTIME_LIST   81
#define CG_SCOREBOARD_ASSISTS_LIST    82
#define CG_SCOREBOARD_LEVEL_LIST      83

#define CG_GAME_TIME                  85

#define CG_TEAM_NAME_RED              87
#define CG_TEAM_NAME_BLUE             88
#define CG_GAME_STATUS_OLD            89

#define CG_TEAM_BAR_RED               90
#define CG_TEAM_BAR_BLUE              91
#define CG_SOLO_BAR                   92

#define CG_SPECTATOR_PLAYER_COUNT     93

#define RECT_OFFSET_TEAM_BLUE         1
#define RECT_OFFSET_TEAM_SPEC         2

#define UI_OWNERDRAW_BASE             200
#define UI_EFFECTS                    201
#define UI_PLAYER_MODEL               202
#define UI_GAMETYPE                   205
#define UI_MAPPREVIEW                 206
#define UI_SKILL                      207
#define UI_BLUETEAMNAME               208
#define UI_REDTEAMNAME                209
#define UI_NETSOURCE                  220
#define UI_NETMAPPREVIEW              221
#define UI_NETFILTER                  222
#define UI_ALLMAPS_SELECTION          236
#define UI_VOTE_KICK                  238
#define UI_BOTNAME                    239
#define UI_BOTSKILL                   240
#define UI_REDBLUE                    241
#define UI_CROSSHAIR                  242
#define UI_SELECTEDPLAYER             243
#define UI_MAPCINEMATIC               244
#define UI_NETGAMETYPE                245
#define UI_NETMAPCINEMATIC            246
#define UI_SERVERREFRESHDATE          247
#define UI_SERVERMOTD                 248
#define UI_GLINFO                     249
#define UI_KEYBINDSTATUS              250
#define UI_MAP_TIMETOBEAT             252
#define UI_JOINGAMETYPE               253
#define UI_PREVIEWCINEMATIC           254
#define UI_STARTMAPCINEMATIC          255
#define UI_MAPS_SELECTION             256

#define UI_GEAR_IMAGE                 257
#define UI_GEAR_NAME                  258

#define UI_ITEM_IMAGE                 259
#define UI_ITEM_NAME                  260

#define UI_KI_OPTION                  261
#define UI_KI_INDEX                   262

#define UI_GEAR_INFO                  263

#define KI_OPTION1                    0
#define KI_OPTION2                    1
#define KI_OPTION3                    2
#define KI_OPTION4                    3
#define KI_OPTION5                    4

#define GEAR_PRIMARY                  0
#define GEAR_SECONDARY                1
#define GEAR_SIDEARM                  2
#define GEAR_GRENADE                  3
#define GEAR_ITEM_1                   4
#define GEAR_ITEM_2                   5
#define GEAR_ITEM_3                   6
#define GEAR_MAX                      7

#define UI_SKIN_ALLY                  0
#define UI_SKIN_ENEMY                 1

#define ITEM_NONE                     0
#define ITEM_KNIFE                    1
#define ITEM_BERETTA                  2
#define ITEM_DEAGLE                   3
#define ITEM_SPAS12                   4
#define ITEM_MP5K                     5
#define ITEM_UMP45                    6
#define ITEM_HK69                     7
#define ITEM_LR                       8
#define ITEM_G36                      9
#define ITEM_AK103                    10
#define ITEM_PSG1                     11
#define ITEM_GRENADE_HE               12
#define ITEM_GRENADE_FLASH            13
#define ITEM_GRENADE_SMOKE            14
#define ITEM_VEST                     15
#define ITEM_NVG                      16
#define ITEM_MEDKIT                   17
#define ITEM_SILENCER                 18
#define ITEM_LASER                    19
#define ITEM_HELMET                   20
#define ITEM_AMMO                     21
#define ITEM_APR                      22
#define ITEM_SR8                      23
#define ITEM_NEGEV                    24
#define ITEM_GRENADE_FRAG             25
#define ITEM_M4                       26
#define ITEM_GLOCK                    27
#define ITEM_COLT1911                 28
#define ITEM_MAC11                    29
#define ITEM_FRF1                     30
#define ITEM_P90                      31
#define ITEM_BENELLI                  32
#define ITEM_MAGNUM                   33
#define ITEM_MAX                      34

#define UI_TEAM_FREE                  0
#define UI_TEAM_RED                   1
#define UI_TEAM_BLUE                  2
#define UI_TEAM_SPEC                  3

#define VOICECHAT_GETFLAG             "getflag"                                           // command someone to get the flag
#define VOICECHAT_OFFENSE             "offense"                                           // command someone to go on offense
#define VOICECHAT_DEFEND              "defend"                                            // command someone to go on defense
#define VOICECHAT_DEFENDFLAG          "defendflag"                                        // command someone to defend the flag
#define VOICECHAT_PATROL              "patrol"                                            // command someone to go on patrol (roam)
#define VOICECHAT_CAMP                "camp"                                              // command someone to camp (we don't have sounds for this one)
#define VOICECHAT_FOLLOWME            "followme"                                          // command someone to follow you
#define VOICECHAT_RETURNFLAG          "returnflag"                                        // command someone to return our flag
#define VOICECHAT_FOLLOWFLAGCARRIER   "followflagcarrier"                                 // command someone to follow the flag carrier
#define VOICECHAT_YES                 "yes"                                               // yes, affirmative, etc.
#define VOICECHAT_NO                  "no"                                                // no, negative, etc.
#define VOICECHAT_ONGETFLAG           "ongetflag"                                         // I'm getting the flag
#define VOICECHAT_ONOFFENSE           "onoffense"                                         // I'm on offense
#define VOICECHAT_ONDEFENSE           "ondefense"                                         // I'm on defense
#define VOICECHAT_ONPATROL            "onpatrol"                                          // I'm on patrol (roaming)
#define VOICECHAT_ONCAMPING           "oncamp"                                            // I'm camping somewhere
#define VOICECHAT_ONFOLLOW            "onfollow"                                          // I'm following
#define VOICECHAT_ONFOLLOWCARRIER     "onfollowcarrier"                                   // I'm following the flag carrier
#define VOICECHAT_ONRETURNFLAG        "onreturnflag"                                      // I'm returning our flag
#define VOICECHAT_INPOSITION          "inposition"                                        // I'm in position
#define VOICECHAT_IHAVEFLAG           "ihaveflag"                                         // I have the flag
#define VOICECHAT_BASEATTACK          "baseattack"                                        // the base is under attack
#define VOICECHAT_ENEMYHASFLAG        "enemyhasflag"                                      // the enemy has our flag (CTF)
#define VOICECHAT_STARTLEADER         "startleader"                                       // I'm the leader
#define VOICECHAT_STOPLEADER          "stopleader"                                        // I resign leadership
#define VOICECHAT_TRASH               "trash"                                             // lots of trash talk
#define VOICECHAT_WHOISLEADER         "whoisleader"                                       // who is the team leader
#define VOICECHAT_WANTONDEFENSE       "wantondefense"                                     // I want to be on defense
#define VOICECHAT_WANTONOFFENSE       "wantonoffense"                                     // I want to be on offense
#define VOICECHAT_KILLINSULT          "kill_insult"                                       // I just killed you
#define VOICECHAT_TAUNT               "taunt"                                             // I want to taunt you
#define VOICECHAT_DEATHINSULT         "death_insult"                                      // you just killed me
#define VOICECHAT_KILLGAUNTLET        "kill_gauntlet"                                     // I just killed you with the gauntlet
#define VOICECHAT_PRAISE              "praise"                                            // you did something good
