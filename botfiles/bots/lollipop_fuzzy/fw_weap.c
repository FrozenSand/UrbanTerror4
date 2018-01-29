//===========================================================================
//
// Name:			fw_weap.c
// Function:
// Programmer:		Mr Elusive (MrElusive@idsoftware.com)
// Last update:		1999-09-08
// Tab Size:		4 (real tabs)
//===========================================================================
#define KNIFE_DIST 128
#define SHORT_DIST 320
#define MID_DIST 512
#define FAR_DIST 768
#define VERYFAR_DIST 1024

weight "Knife"
{
	switch(INVENTORY_KNIFE)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_KNIFE_AMMO)
			{
				case 1: return 0;
				default:
				{
					switch(ENEMY_HORIZONTAL_DIST)
					{
						case 128: return W_KNIFE;
						default: return $evalint(W_KNIFE*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight

weight "Colt1911"
{
	switch(INVENTORY_COLT1911)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_COLT1911_AMMO)
			{
				case 1: return 0;
				default:
				{
					switch(ENEMY_HORIZONTAL_DIST)
					{
						case 384: return W_COLT1911;
						default: return $evalint(W_COLT1911*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight

weight "Glock"
{
	switch(INVENTORY_GLOCK)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_GLOCK_AMMO)
			{
				case 1: return 0;
				default:
				{
					switch(ENEMY_HORIZONTAL_DIST)
					{
						case 320: return W_GLOCK;
						default: return $evalint(W_GLOCK*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight

weight "Beretta"
{
	switch(INVENTORY_BERETTA)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_BERETTA_AMMO)
			{
				case 1: return 0;
				default:
				{
					switch(ENEMY_HORIZONTAL_DIST)
					{
						case 320: return W_BERETTA;
						default: return $evalint(W_BERETTA*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight

weight "Desert Eagle"
{
	switch(INVENTORY_DEAGLE)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_DEAGLE_AMMO)
			{
				case 1: return 0;
				default:
				{
					switch(ENEMY_HORIZONTAL_DIST)
					{
						case 320: return W_DEAGLE;
						default: return $evalint(W_DEAGLE*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight

//weight "Spas12"
//{
//	switch(INVENTORY_SPAS12)
//	{
//		case 1: return 0;
//		default:
//		{
//			switch(INVENTORY_SPAS12_AMMO)
//			{
//				case 1: return 0;
//				default:
//				{
//					switch(ENEMY_HORIZONTAL_DIST)
//					{
//						case 512: return W_SPAS12;
//						default: return $evalint(W_SPAS12*0.1);
//					} //end switch
//					
//				} //end default
//			} //end switch
//		} //end default
//	} //end switch
//} //end weight

weight "Spas12"
{
	switch(INVENTORY_SPAS12)
	{
        	case 1: return 0;
		default:
		{
			switch(INVENTORY_SPAS12_AMMO)
			{
				case 1: return 0;
				default:
				{
					switch(ENEMY_HORIZONTAL_DIST)
					{
						case SHORT_DIST: return $evalint(W_SPAS12*0.1);
						case MID_DIST: return W_SPAS12;
        					case FAR_DIST: return $evalint(W_SPAS12*0.1);
						default: return 1;
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight

weight "MP5K"
{
	switch(INVENTORY_MP5K)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_MP5K_AMMO)
			{
				case 1: return 0;
				default:
				{
					switch(ENEMY_HORIZONTAL_DIST)
					{
						case 512: return W_MP5K;
						default: return $evalint(W_MP5K*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight

weight "UMP 45"
{
	switch(INVENTORY_UMP45)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_UMP45_AMMO)
			{
				case 1: return 0;
				default:
				{
					//the lightning gun has a limited range
					switch(ENEMY_HORIZONTAL_DIST)
					{
						case 512: return W_UMP45;
						default: return $evalint(W_UMP45*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight

weight "MAC 11"
{
	switch(INVENTORY_MAC11)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_MAC11_AMMO)
			{
				case 1: return 0;
				default:
				{
					switch(ENEMY_HORIZONTAL_DIST)
					{
						case 512: return W_MAC11;
						default: return $evalint(W_MAC11*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight

weight "HK69"
{
	switch(INVENTORY_HK69)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_HK69_AMMO)
			{
				case 1: return 0;
				default:
				{
					return W_HK69;
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight

weight "M4"
{
	switch(INVENTORY_M4)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_M4_AMMO)
			{
				case 1: return 0;
				default:
				{
					return W_M4;
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight

weight "LR"
{
	switch(INVENTORY_LR)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_LR_AMMO)
			{
				case 1: return 0;
				default:
				{
					return W_LR;
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight

weight "G36"
{
	switch(INVENTORY_G36)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_G36_AMMO)
			{
				case 1: return 0;
				default:
				{
					return W_G36;
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight

weight "PSG1"
{
	switch(INVENTORY_PSG1)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_PSG1_AMMO)
			{
				case 1: return 0;
				default:
				{
				switch(ENEMY_HORIZONTAL_DIST)
					{  
                                                case 512: return $evalint(W_PSG1*0.1);
						case 768: return $evalint(W_PSG1*0.1);
						case 1024: return W_PSG1;
						default: return $evalint(W_PSG1*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight

weight "Grenade HE"
{
	switch(INVENTORY_GRENADE_HE)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_GRENADE_HE_AMMO)
			{
				case 1: return 0;
				default:
				{
					switch(ENEMY_HORIZONTAL_DIST)
					{
						case 512: return W_GRENADE_HE;
						default: return $evalint(W_GRENADE_HE*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight

weight "Negev"
{
	switch(INVENTORY_NEGEV)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_NEGEV_AMMO)
			{
				case 1: return 0;
				default:
				{
					return W_NEGEV;
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight


weight "SR8"
{
	switch(INVENTORY_SR8)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_SR8_AMMO)
			{
				case 1: return 0;
				default:
				{
				switch(ENEMY_HORIZONTAL_DIST)
					{
						case 512: return $evalint(W_SR8*0.1);
                                                case 768: return $evalint(W_SR8*0.1);
						case 1024: return W_SR8;
						default: return $evalint(W_SR8*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight

weight "Grenade Smoke"
{
switch(INVENTORY_GRENADE_SMOKE)
        {
                case 1: return 0;
	                default:
	                {
                        switch(INVENTORY_GRENADE_SMOKE_AMMO)
	                        {
										                                case 1: return 0;
										                                default:
											                                {
                                        return W_GRENADE_SMOKE;
	                                } //end default
	                        } //end switch
	                } //end default
	        } //end switch
} //end weight

weight "AK103"
{
        switch(INVENTORY_AK103)
        {
                case 1: return 0;
                default:
                {
                        switch(INVENTORY_AK103_AMMO)
                        {
                                case 1: return 0;
                                default:
                                {
                                        return W_AK103;
                                } //end default
                        } //end switch
                } //end default
        } //end switch
} //end weight

weight "TOD50"
{
	switch(INVENTORY_TOD50)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_TOD50_AMMO)
			{
				case 1: return 0;
				default:
				{
				switch(ENEMY_HORIZONTAL_DIST)
					{
						case 768: return $evalint(W_TOD50*0.1);
						case 1024: return W_TOD50;
						default: return $evalint(W_TOD50*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight

weight "FRF1"
{
	switch(INVENTORY_FRF1)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_FRF1_AMMO)
			{
				case 1: return 0;
				default:
				{
				switch(ENEMY_HORIZONTAL_DIST)
					{
						case 512: return $evalint(W_FRF1*0.1);
						case 1024: return W_FRF1;
						default: return $evalint(W_FRF1*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight

weight "Benelli"
{
	switch(INVENTORY_BENELLI)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_BENELLI_AMMO)
			{
				case 1: return 0;
				default:
				{
					switch(ENEMY_HORIZONTAL_DIST)
					{
					case SHORT_DIST: return $evalint(W_BENELLI*0.1);
						case MID_DIST: return W_BENELLI;
        					case FAR_DIST: return $evalint(W_BENELLI*0.1);
						default: return 1;
					} //end switch
					
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight

weight "P90"
{
	switch(INVENTORY_P90)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_P90_AMMO)
			{
				case 1: return 0;
				default:
				{
					switch(ENEMY_HORIZONTAL_DIST)
					{
						case 512: return W_P90;
						default: return $evalint(W_P90*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight


weight "Magnum"
{
	switch(INVENTORY_MAGNUM)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_MAGNUM_AMMO)
			{
				case 1: return 0;
				default:
				{
					switch(ENEMY_HORIZONTAL_DIST)
					{
						case 512: return W_MAGNUM;
						default: return $evalint(W_MAGNUM*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight




