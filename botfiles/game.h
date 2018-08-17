//===========================================================================
//
// Name:			game.h
// Function:		game settings
// Programmer:		Mr Elusive (MrElusive@demigod.demon.nl)
// Last update:		1999-09-08
// Tab Size:		4 (real tabs)
//===========================================================================


#ifndef DEATHMATCH
	#define DEATHMATCH			1
#endif
#ifndef DMFLAGS
	#define DMFLAGS				0
#endif

#define DF_NO_HEALTH			1			//Health, Adrenaline and the AncientHead are removed
#define DF_NO_ITEMS				2			//all powerups are removed
#define DF_WEAPONS_STAY			4			//weapons stay
#define DF_NO_FALLING			8			//no falling damage
#define DF_INSTANT_ITEMS		16			//powerups are used instantly when picked up
#define DF_SAME_LEVEL			32			//same level is played over and over again
#define DF_SKINTEAMS			64			//teamplay based on skin
#define DF_MODELTEAMS			128			//teamplay based on model
#define DF_NO_FRIENDLY_FIRE		256			//no friendly fire
#define DF_SPAWN_FARTHEST		512			//spawn as far away from the death point
#define DF_FORCE_RESPAWN		1024		//force players to respawn
#define DF_NO_ARMOR				2048		//All armor is removed
#define DF_ALLOW_EXIT			4096		//allow player to exit the map
#define DF_INFINITE_AMMO		8192		//all ammo and the bfg are removed
#define DF_QUAD_DROP			16384		//drop the quad when died when using
#define DF_FIXED_FOV			32768		//field of vision is fixed



