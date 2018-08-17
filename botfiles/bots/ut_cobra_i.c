//===========================================================================
//
// Name:			UT Bot File
// Function:             sets bot item weights
// Programmer:		Mr Elusive (MrElusive@idsoftware.com)
// Last update:		1999-09-08
// Tab Size:		4 (real tabs)
// Updated by travmon January 10 2018
//===========================================================================

#include "inv.h"

//initial health/armor states
#define FS_HEALTH			1
#define FS_ARMOR			1

//initial weapon weights
#define W_MAGNUM			        20
#define W_COLT1911	                	20
#define W_GLOCK                                 20
#define W_BENELLI			        40
#define W_P90					40
#define W_SPAS12				40
#define W_BERETTA		        	20	
#define W_G36					50
#define W_KNIFE				10
#define W_UMP45				        40
#define W_PSG1					50
#define W_MP5K			        40
#define W_SR8					50
#define W_M4				        50
#define W_HK69					50
#define W_DEAGLE			20
#define W_NEGEV			                50
#define W_LR                          	50
#define W_MAC11                                 40
#define W_AK103                                 50
#define W_TOD50					50
#define W_FRF1					50

#define W_GRENADE_HE		        25
#define W_GRENADE_SMOKE                 25

//the bot has the weapon so it changes a bit (but not for ut)
#define GWW_MAGNUM			        20
#define GWW_GLOCK                               20
#define GWW_COLT1911	                	20
#define GWW_SPAS12				40
#define GWW_BENELLI			        40
#define GWW_P90					40
#define GWW_BERETTA				20
#define GWW_G36					50
#define GWW_KNIFE			10
#define GWW_UMP45				40
#define GWW_PSG1				50
#define GWW_MP5K			40
#define GWW_SR8					50
#define GWW_M4				        50
#define GWW_HK69				50
#define GWW_DEAGLE			20
#define GWW_NEGEV		                50
#define GWW_LR                          50
#define GWW_MAC11                               40 
#define GWW_AK103                               50
#define GWW_TOD50				50
#define GWW_FRF1				50

#define GWW_GRENADE_HE			25
#define GWW_GRENADE_SMOKE               25

//initial powerup weights
#define W_TELEPORTER			40
#define W_MEDKIT				40
#define W_QUAD					80
#define W_ENVIRO				40
#define W_HASTE					40
#define W_INVISIBILITY			40
#define W_REGEN					40
#define W_FLIGHT				40

//flag weight
#define FLAG_WEIGHT				60

//  default fuzzy logic
#include "bots/lollipop_fuzzy/fw_items.c"

