//===========================================================================
//
// Name:			ut_cougar_w.c
// Function:               Sets bot weapon weights
// Programmer:		Mr Elusive (MrElusive@idsoftware.com)
// Previous update:		1999-09-08
// Tab Size:		4 (real tabs)
// Updated by travmon January 10 2018
//===========================================================================

#include "inv.h"

//initial weapon weights
#define W_MAGNUM			        20
#define W_COLT1911	                	20
#define W_GLOCK                                 20
#define W_BENELLI			        40
#define W_P90				40
#define W_SPAS12				40
#define W_BERETTA		        20	
#define W_G36				40
#define W_KNIFE				10
#define W_UMP45			        	40
#define W_PSG1					50
#define W_MP5K			        	40
#define W_SR8					50
#define W_M4			        	50
#define W_HK69					50
#define W_DEAGLE				20
#define W_NEGEV			                50
#define W_LR                     	     	50
#define W_MAC11                                 40
#define W_AK103                                 50
#define W_TOD50					50
#define W_FRF1					50

#define W_GRENADE_HE		        25
#define W_GRENADE_SMOKE                 25

// fuzzy logic
#include "bots/lollipop_fuzzy/fw_weap.c"
