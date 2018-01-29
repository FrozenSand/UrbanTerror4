//===========================================================================
//
// Name:			fw_items.c
// Function:		file to start with for fuzzy logic interbreeding sessions
// Programmer:		Mr Elusive (MrElusive@idsoftware.com)
// Last update:		1999-09-08
// Tab Size:		4 (real tabs)
// Notes:			-
//===========================================================================


//#define WEAPONS_STAY

//balance range
#define BR_ARMOR				30
#define BR_HEALTH				30
#define BR_WEAPON				30
#define BR_AMMO					30
#define BR_POWERUP				30

//balance macros
#define MZ(value)				(value) < 0 ? 0 : (value)
#define ARMOR_SCALE(v)			balance($evalfloat(MZ(FS_ARMOR*v)), $evalfloat(MZ(FS_ARMOR*v-BR_ARMOR)), $evalfloat(MZ(FS_ARMOR*v+BR_ARMOR)))
#define HEALTH_SCALE(v)			balance($evalfloat(MZ(FS_HEALTH*v)), $evalfloat(MZ(FS_HEALTH*v-BR_HEALTH)), $evalfloat(MZ(FS_HEALTH*v+BR_HEALTH)))
#define WEAPON_SCALE(v)			balance($evalfloat(MZ(v)), $evalfloat(MZ(v-BR_WEAPON)), $evalfloat(MZ(v+BR_WEAPON)))
#define AMMO_SCALE(v)			balance($evalfloat(MZ(v)), $evalfloat(MZ(v-BR_AMMO)), $evalfloat(MZ(v+BR_AMMO)))
#define POWERUP_SCALE(v)		balance($evalfloat(MZ(v)), $evalfloat(MZ(v-BR_POWERUP)), $evalfloat(MZ(v+BR_POWERUP)))


//=============================================
//
// WEAPONS
//
//=============================================


weight "ut_weapon_knife"
{
	switch(INVENTORY_KNIFE)
	{
                case 1: return WEAPON_SCALE(W_KNIFE);
		default:
		{
#ifdef WEAPONS_STAY
			switch(INVENTORY_KNIFE_AMMO)
			{
				case 16: return WEAPON_SCALE(GWW_KNIFE);
				case 200: return WEAPON_SCALE(GWW_KNIFE - 10);
				default: return balance(5, 3, 7);
			} //end switch
#else
			return 1;
#endif
		} //end default
	} //end switch
} //end weight

//weight "ut_weapon_knife"
//{
//	switch(INVENTORY_KNIFE_AMMO)
//	{
//		case KNIFE_MAXAMMO: return W_KNIFE;
//		default: return 0;
//	} //end switch
//} //end weight
 
weight "ut_weapon_colt1911"
{
	switch(INVENTORY_COLT1911)
	{
		case 1: return WEAPON_SCALE(W_COLT1911);
		default:
		{
#ifdef WEAPONS_STAY
			switch(INVENTORY_COLT1911_AMMO)
			{
				case 16: return WEAPON_SCALE(GWW_COLT1911);
				case 50: return WEAPON_SCALE(GWW_COLT1911 - 10);
				default: return balance(5, 3, 7);
			} //end switch
#else
			return 1;
#endif
		} //end default
	} //end switch
} //end weight

weight "ut_weapon_glock"
{
	switch(INVENTORY_GLOCK)
	{
		case 1: return WEAPON_SCALE(W_GLOCK);
		default:
		{
#ifdef WEAPONS_STAY
			switch(INVENTORY_GLOCK_AMMO)
			{
				case 16: return WEAPON_SCALE(GWW_GLOCK);
				case 50: return WEAPON_SCALE(GWW_GLOCK - 10);
				default: return balance(5, 3, 7);
			} //end switch
#else
			return 1;
#endif
		} //end default
	} //end switch
} //end weight

weight "ut_weapon_beretta"
{
	switch(INVENTORY_BERETTA)
	{
		case 1: return WEAPON_SCALE(W_BERETTA);
		default:
		{
#ifdef WEAPONS_STAY
			switch(INVENTORY_BERETTA_AMMO)
			{
				case 16: return WEAPON_SCALE(GWW_BERETTA);
				case 50: return WEAPON_SCALE(GWW_BERETTA - 10);
				default: return balance(5, 3, 7);
			} //end switch
#else
			return 1;
#endif
		} //end default
	} //end switch
} //end weight

weight "ut_weapon_deagle"
{
	switch(INVENTORY_DEAGLE)
	{
		case 1: return WEAPON_SCALE(W_DEAGLE);
		default:
		{
#ifdef WEAPONS_STAY
			switch(INVENTORY_DEAGLE_AMMO)
			{
				case 16: return WEAPON_SCALE(GWW_DEAGLE);
				case 50: return WEAPON_SCALE(GWW_DEAGLE - 10);
				default: return balance(5, 3, 7);
			} //end switch
#else
			return 1;
#endif
		} //end default
	} //end switch
} //end weight

weight "ut_weapon_spas12"
{
	switch(INVENTORY_SPAS12)
	{
		case 1:
		{
			switch(INVENTORY_SPAS12_AMMO)
			{
				case 3: return WEAPON_SCALE(W_SPAS12);
				case 10: return WEAPON_SCALE(W_SPAS12);
				default: return WEAPON_SCALE(W_SPAS12);
			} //end switch
		} //end case
		default:
		{
#ifdef WEAPONS_STAY
			switch(INVENTORY_SPAS12_AMMO)
			{
				case 3: return WEAPON_SCALE(GWW_SPAS12);
				case 10: return WEAPON_SCALE(GWW_SPAS12);
				case 100: return WEAPON_SCALE(GWW_SPAS12);
				default: return balance(5, 3, 7);
			} //end switch
#else
			return 1;
#endif
		} //end default
	} //end switch
} //end weight

weight "ut_weapon_mp5k"
{
	switch(INVENTORY_MP5K)
	{
		case 1: return WEAPON_SCALE(W_MP5K);
		default:
		{
#ifdef WEAPONS_STAY
			switch(INVENTORY_MP5K_AMMO)
			{
				case 16: return WEAPON_SCALE(GWW_MP5K);
				case 50: return WEAPON_SCALE(GWW_MP5K - 10);
				default: return balance(5, 3, 7);
			} //end switch
#else
			return 1;
#endif
		} //end default
	} //end switch
} //end weight

weight "ut_weapon_ump45"
{
	switch(INVENTORY_UMP45)
	{
		case 1: return WEAPON_SCALE(W_UMP45);
		default:
		{
#ifdef WEAPONS_STAY
			switch(INVENTORY_UMP45_AMMO)
			{
				case 16: return WEAPON_SCALE(GWW_UMP45);
				case 50: return WEAPON_SCALE(GWW_UMP45 - 10);
				default: return balance(5, 3, 7);
			} //end switch
#else
			return 1;
#endif
		} //end default
	} //end switch
} //end weight

weight "ut_weapon_mac11"
{
	switch(INVENTORY_MAC11)
	{
		case 1: return WEAPON_SCALE(W_MAC11);
		default:
		{
#ifdef WEAPONS_STAY
			switch(INVENTORY_MAC11_AMMO)
			{
				case 16: return WEAPON_SCALE(GWW_MAC11);
				case 50: return WEAPON_SCALE(GWW_MAC11 - 10);
				default: return balance(5, 3, 7);
			} //end switch
#else
			return 1;
#endif
		} //end default
	} //end switch
} //end weight

weight "ut_weapon_hk69"
{
	switch(INVENTORY_HK69)
	{
		case 1: return WEAPON_SCALE(W_HK69);
		default:
		{
#ifdef WEAPONS_STAY
			switch(INVENTORY_HK69_AMMO)
			{
				case 16: return WEAPON_SCALE(GWW_PSG1);
				case 50: return WEAPON_SCALE(GWW_PSG1 - 10);
				default: return balance(5, 3, 7);
			} //end switch
#else
			return 1;
#endif
		} //end default
	} //end switch
} //end weight

weight "ut_weapon_m4"
{
	switch(INVENTORY_M4)
	{
		case 1: return WEAPON_SCALE(W_M4);
		default:
		{
#ifdef WEAPONS_STAY
			switch(INVENTORY_M4_AMMO)
			{
				case 16: return WEAPON_SCALE(GWW_M4);
				case 50: return WEAPON_SCALE(GWW_M4 - 10);
				default: return balance(5, 3, 7);
			} //end switch
#else
			return 1;
#endif
		} //end default
	} //end switch
} //end weight

weight "ut_weapon_lr"
{
	switch(INVENTORY_LR)
	{
		case 1: return WEAPON_SCALE(W_LR);
		default:
		{
#ifdef WEAPONS_STAY
			switch(INVENTORY_LR_AMMO)
			{
				case 16: return WEAPON_SCALE(GWW_LR);
				case 50: return WEAPON_SCALE(GWW_LR - 10);
				default: return balance(5, 3, 7);
			} //end switch
#else
			return 1;
#endif
		} //end default
	} //end switch
} //end weight


weight "ut_weapon_g36"
{
	switch(INVENTORY_G36)
	{
		case 1: return WEAPON_SCALE(W_G36);
		default:
		{
#ifdef WEAPONS_STAY
			switch(INVENTORY_G36_AMMO)
			{
				case 16: return WEAPON_SCALE(GWW_G36);
				case 50: return WEAPON_SCALE(GWW_G36 - 10);
				default: return balance(5, 3, 7);
			} //end switch
#else
			return 1;
#endif
		} //end default
	} //end switch
} //end weight

weight "ut_weapon_psg1"
{
	switch(INVENTORY_PSG1)
	{
		case 1: return WEAPON_SCALE(W_PSG1);
		default:
		{
#ifdef WEAPONS_STAY
			switch(INVENTORY_PSG1_AMMO)
			{
				case 16: return WEAPON_SCALE(GWW_PSG1);
				case 50: return WEAPON_SCALE(GWW_PSG1 - 10);
				default: return balance(5, 3, 7);
			} //end switch
#else
			return 1;
#endif
		} //end default
	} //end switch
} //end weight
weight "ut_weapon_sr8"
{
	switch(INVENTORY_SR8)
	{
		case 1: return WEAPON_SCALE(W_SR8);
		default:
		{
#ifdef WEAPONS_STAY
			switch(INVENTORY_SR8_AMMO)
			{
				case 16: return WEAPON_SCALE(GWW_SR8);
				case 50: return WEAPON_SCALE(GWW_SR8 - 10);
				default: return balance(5, 3, 7);
			} //end switch
#else
			return 1;
#endif
		} //end default
	} //end switch
} //end weight

weight "ut_weapon_tod50"
{
	switch(INVENTORY_TOD50)
	{
		case 1: return WEAPON_SCALE(W_TOD50);
		default:
		{
#ifdef WEAPONS_STAY
			switch(INVENTORY_TOD50_AMMO)
			{
				case 16: return WEAPON_SCALE(GWW_TOD50);
				case 50: return WEAPON_SCALE(GWW_TOD50 - 10);
				default: return balance(5, 3, 7);
			} //end switch
#else
			return 1;
#endif
		} //end default
	} //end switch
} //end weight

weight "ut_weapon_grenade_he"
{
	switch(INVENTORY_GRENADE_HE)
	{
		case 1: return WEAPON_SCALE(W_GRENADE_HE);
		default:
		{
#ifdef WEAPONS_STAY
			switch(INVENTORY_GRENADE_HE_AMMO)
			{
				case 16: return WEAPON_SCALE(GWW_GRENADE_HE);
				case 50: return WEAPON_SCALE(GWW_GRENADE_HE - 10);
				default: return balance(5, 3, 7);
			} //end switch
#else
			return 1;
#endif
		} //end default
	} //end switch
} //end weight

weight "ut_weapon_negev"
{
	switch(INVENTORY_NEGEV)
	{
		case 1: return WEAPON_SCALE(W_NEGEV);
		default:
		{
#ifdef WEAPONS_STAY
			switch(INVENTORY_NEGEV_AMMO)
			{
				case 16: return WEAPON_SCALE(GWW_NEGEV);
				case 50: return WEAPON_SCALE(GWW_NEGEV - 10);
				default: return balance(5, 3, 7);
			} //end switch
#else
			return 1;
#endif
		} //end default
	} //end switch
} //end weight

weight "ut_weapon_grenade_smoke"
{
    switch(INVENTORY_GRENADE_SMOKE)
       {
        case 1: return WEAPON_SCALE(W_GRENADE_SMOKE);				
             default:
                {
#ifdef WEAPONS_STAY
                    switch(INVENTORY_GRENADE_SMOKE_AMMO)
                       {
                        case 16: return WEAPON_SCALE(GWW_GRENADE_SMOKE);
                        case 50: return WEAPON_SCALE(GWW_GRENADE_SMOKE - 10);
                        default: return balance(5, 3, 7);
                       } //end switch
#else
                 return 1;							
#endif
                } //end default
        } //end switch
} //end weight

weight "ut_weapon_ak103"
{
    switch(INVENTORY_AK103)
      {
           case 1: return WEAPON_SCALE(W_AK103);
           default:
           {
#ifdef WEAPONS_STAY
             switch(INVENTORY_AK103_AMMO)
                   {
                   case 16: return WEAPON_SCALE(GWW_AK103);
                   case 50: return WEAPON_SCALE(GWW_AK103 - 10);
                   default: return balance(5, 3, 7);
                   } //end switch
#else
             return 1;
#endif
           } //end default
      } //end switch
} //end weight

weight "ut_weapon_frf1"
{
	switch(INVENTORY_FRF1)
	{
		case 1: return WEAPON_SCALE(W_FRF1);
		default:
		{
#ifdef WEAPONS_STAY
			switch(INVENTORY_FRF1_AMMO)
			{
				case 16: return WEAPON_SCALE(GWW_FRF1);
				case 50: return WEAPON_SCALE(GWW_FRF1 - 10);
				default: return balance(5, 3, 7);
			} //end switch
#else
			return 1;
#endif
		} //end default
	} //end switch
} //end weight

weight "ut_weapon_benelli"
{
	switch(INVENTORY_BENELLI)
	{
		case 1:
		{
			switch(INVENTORY_BENELLI_AMMO)
			{
				case 3: return WEAPON_SCALE(W_BENELLI);
				case 10: return WEAPON_SCALE(W_BENELLI);
				default: return WEAPON_SCALE(W_BENELLI);
			} //end switch
		} //end case
		default:
		{
#ifdef WEAPONS_STAY
			switch(INVENTORY_BENELLI_AMMO)
			{
				case 3: return WEAPON_SCALE(GWW_BENELLI);
				case 10: return WEAPON_SCALE(GWW_BENELLI);
				case 100: return WEAPON_SCALE(GWW_BENELLI);
				default: return balance(5, 3, 7);
			} //end switch
#else
			return 1;
#endif
		} //end default
	} //end switch
} //end weight

weight "ut_weapon_p90"
{
	switch(INVENTORY_P90)
	{
		case 1: return WEAPON_SCALE(W_P90);
		default:
		{
#ifdef WEAPONS_STAY
			switch(INVENTORY_P90_AMMO)
			{
				case 16: return WEAPON_SCALE(GWW_P90);
				case 50: return WEAPON_SCALE(GWW_P90 - 10);
				default: return balance(5, 3, 7);
			} //end switch
#else
			return 1;
#endif
		} //end default
	} //end switch
} //end weight

weight "ut_weapon_magnum"
{
	switch(INVENTORY_MAGNUM)
	{
		case 1: return WEAPON_SCALE(W_MAGNUM);
		default:
		{
#ifdef WEAPONS_STAY
			switch(INVENTORY_MAGNUM_AMMO)
			{
				case 16: return WEAPON_SCALE(GWW_MAGNUM);
				case 50: return WEAPON_SCALE(GWW_MAGNUM - 10);
				default: return balance(5, 3, 7);
			} //end switch
#else
			return 1;
#endif
		} //end default
	} //end switch
} //end weight
								
// This is only used to pickup dropped CTF
// flags now. The logic in here makes no
// sense since the bot has specific CTF AI.
//=============================================

weight "team_CTF_redflag" //Red Flag
{
	switch(INVENTORY_REDFLAG)
	{
		case 1: //not carrying the red flag
		{
			switch(INVENTORY_BLUEFLAG)
			{
				case 1: //not carrying the blue flag
				{
					return FLAG_WEIGHT;
				} //end case
				default: //bot carrying the blue flag so go back to the base
				{
					return 200;
				} //end case
			} //end switch
		} //end case
		default: //bot carrying the red flag, so don't go back
		{
			return 0;
		} //end default
	} //end switch
} //end weight

weight "team_CTF_blueflag" //Blue Flag
{
	switch(INVENTORY_BLUEFLAG)
	{
		case 1: //not carrying the blue flag
		{
			switch(INVENTORY_REDFLAG)
			{
				case 1: //not carrying the red flag
				{
					return FLAG_WEIGHT;
				} //end case
				default: //bot is carrying the red flag so go back to the base
				{
					return 200;
				} //end case
			} //end switch
		} //end case
		default: //bot is carrying the blue flag, so don't go back
		{
			return 0;
		} //end default
	} //end switch
} //end weight

