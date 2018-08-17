/**
 * Filename: fw_items.c
 *
 * Copyright (C) 2000-2009 FrozenSand
 *
 * This file is part of Urban Terror source code.
 *
 * Weapon Configuration 
 */

#include "inv.h"
#include "game.h"

#define VEC_ORIGIN {0, 0, 0}
/* projectile flags */
#define PFL_WINDOWDAMAGE       1 /* projectile damages through window */
#define PFL_RETURN             2 /* set when projectile returns to owner */
/* weapon flags */
#define WFL_FIRERELEASED       1 /* set when projectile is fired with key-up event */
/* damage types */
#define DAMAGETYPE_IMPACT      1 /* damage on impact */
#define DAMAGETYPE_RADIAL      2 /* radial damage */
#define DAMAGETYPE_VISIBLE     4 /* damage to all entities visible to the projectile */
#define DAMAGETYPE_IGNOREARMOR 8 /* projectile goes right through armor */

/**
 * Knife
 */
projectileinfo
{
	name           "knifehit"
	damage         40
	damagetype     DAMAGETYPE_IMPACT
}

weaponinfo
{
	name           "Knife"
	number         WEAPONINDEX_KNIFE
	projectile     "knifehit"
	numprojectiles 1
	speed          0
}

/**
 * Beretta
 */
projectileinfo
{
	name           "Beretta Bullet"
	damage         10
	damagetype     DAMAGETYPE_IMPACT
}
weaponinfo 
{
	name           "Beretta"
	number         WEAPONINDEX_BERETTA
	projectile     "Beretta Bullet"
	numprojectiles 1
	speed          0
}

/**
 * Desert Eagle
 */
projectileinfo
{
	name           "de bullet"
	damage         10
	damagetype     DAMAGETYPE_IMPACT
}

weaponinfo
{
	name           "Desert Eagle"
	number         WEAPONINDEX_DEAGLE
	projectile     "de bullet"
	numprojectiles 1
	speed          0
}

/**
 * Spas12
 */
projectileinfo
{
	name           "spas12bullet"
	damage         10
	damagetype     DAMAGETYPE_IMPACT
}

weaponinfo
{
	name           "Spas12"
	number         WEAPONINDEX_SPAS12
	projectile     "spas12bullet"
	numprojectiles 10
	speed          0
}

/**
 * Benelli
 */
projectileinfo
{
	name           "BenelliBullet"
	damage         11
	damagetype     DAMAGETYPE_IMPACT
}

weaponinfo
{
	name           "Benelli"
	number         WEAPONINDEX_BENELLI
	projectile     "BenelliBullet"
	numprojectiles 1
	speed          0
}

/**
 * MP5K
 */ 
projectileinfo
{
	name           "MP5K bullet"
	damage         10
	damagetype     DAMAGETYPE_IMPACT
}

weaponinfo
{
	name           "MP5K"
	number         WEAPONINDEX_MP5K
	projectile     "MP5K bullet"
	numprojectiles 1
	speed          0
}

/**
 * P90
 *
*/
projectileinfo
{
	name           "P90 bullet"
	damage         10
	damagetype     DAMAGETYPE_IMPACT
}

weaponinfo
{
	name           "P90"
	number         WEAPONINDEX_P90
	projectile     "P90 bullet"
	numprojectiles 1
	speed          0
}

/**
 * UMP45
 */
projectileinfo
{
	name           "45 bullet"
	damage         10
	damagetype     DAMAGETYPE_IMPACT
}

weaponinfo
{
	name           "UMP 45"
	number         WEAPONINDEX_UMP45
	projectile     "45 bullet"
	numprojectiles 1
	speed          0
}

/**
 * HK69
 */
projectileinfo
{
	name           "HK69 shell"
	damage         120
	radius         160
	damagetype     $evalint(DAMAGETYPE_IMPACT|DAMAGETYPE_RADIAL)
}

weaponinfo
{
	name           "HK69"
	number         WEAPONINDEX_HK69
	projectile     "HK69 shell"
	numprojectiles 1
	speed          700
}

/**
 * LR300
 */
projectileinfo
{
	name           "LR bullet"
	damage         10
	damagetype     DAMAGETYPE_IMPACT
}

weaponinfo
{
	name           "LR"
	number         WEAPONINDEX_LR
	projectile     "LR bullet"
	numprojectiles 1
	speed          0
}

/**
 * G36
 */
projectileinfo
{
	name           "G36 bullet"
	damage         10
	damagetype     DAMAGETYPE_IMPACT
}

weaponinfo
{
	name           "G36"
	number         WEAPONINDEX_G36
	projectile     "G36 bullet"
	numprojectiles 1
	speed          0
}

/**
 * PSG1
 */
projectileinfo
{
	name           "PSG1 bullet"
	damage         40
	damagetype     DAMAGETYPE_IMPACT
}

weaponinfo
{
	name           "PSG1"
	number         WEAPONINDEX_PSG1
	projectile     "PSG1 bullet"
	numprojectiles 1
	speed          0
}

/**
 * Grenade HE
 */
projectileinfo
{
	name           "Grenade HE"
	damage         120
	radius         160
	damagetype     $evalint(DAMAGETYPE_IMPACT|DAMAGETYPE_RADIAL)
}

weaponinfo
{
	name           "Grenade HE Weapon"
	number         WEAPONINDEX_GRENADE_HE
	projectile     "Grenade HE"
	numprojectiles 1
	speed          700
}

/**
 * GRENADE SMOKE
 */
projectileinfo
{
	name           "Grenade Smoke"
	damage         120
	radius         160
	damagetype     $evalint(DAMAGETYPE_IMPACT|DAMAGETYPE_RADIAL)
}

weaponinfo
{
	name           "Grenade Smoke Weapon"
	number         WEAPONINDEX_GRENADE_SMOKE
	projectile     "Grenade Smoke"
	numprojectiles 1
	speed          700
}

/**
 * SR8
 */
projectileinfo
{
	name           "SR8 bullet"
	damage         40
	damagetype     DAMAGETYPE_IMPACT
}

weaponinfo
{
	name           "SR8"
	number         WEAPONINDEX_SR8
	projectile     "SR8 bullet"
	numprojectiles 1
	speed          0
}

/**
 * AK103
 */
projectileinfo
{
	name           "AK103 bullet"
	damage         10
	damagetype     DAMAGETYPE_IMPACT
}

weaponinfo
{
	name           "AK103"
	number         WEAPONINDEX_AK103
	projectile     "AK103 bullet"
	numprojectiles 1
	speed          0
}



/**
 * NEGEV
 */
projectileinfo
{
	name           "Negev bullet"
	damage         10
	damagetype     DAMAGETYPE_IMPACT
}

weaponinfo
{
	name           "Negev"
	number         WEAPONINDEX_NEGEV
	projectile     "Negev bullet"
	numprojectiles 1
	speed          0
}

/**
 * M4
 */
projectileinfo
{
	name           "M4 bullet"
	damage         10
	damagetype     DAMAGETYPE_IMPACT
}

weaponinfo
{
	name           "M4"
	number         WEAPONINDEX_M4
	projectile     "M4 bullet"
	numprojectiles 1
	speed          0
}

/**
 * Glock
 */
projectileinfo
{
	name           "Glock Bullet"
	damage         10
	damagetype     DAMAGETYPE_IMPACT
}
weaponinfo 
{
	name           "Glock"
	number         WEAPONINDEX_GLOCK
	projectile     "Glock Bullet"
	numprojectiles 1
	speed          0
}

/**
 * Colt1911
 */
projectileinfo
{
	name           "Colt1911 Bullet"
	damage         10
	damagetype     DAMAGETYPE_IMPACT
}
weaponinfo 
{
	name           "Colt1911"
	number         WEAPONINDEX_COLT1911
	projectile     "Colt1911 Bullet"
	numprojectiles 1
	speed          0
}

/**
 * MAC11
 */
projectileinfo
{
	name           "MAC11 bullet"
	damage         10
	damagetype     DAMAGETYPE_IMPACT
}

weaponinfo
{
	name           "MAC 11"
	number         WEAPONINDEX_MAC11
	projectile     "MAC11 bullet"
	numprojectiles 1
	speed          0
}

/**
 * FR-F1
 */
projectileinfo
{
	name           "FRF1 bullet"
	damage         40
	damagetype     DAMAGETYPE_IMPACT
}

weaponinfo
{
	name           "FRF1"
	number         WEAPONINDEX_FRF1
	projectile     "FRF1 bullet"
	numprojectiles 1
	speed          0
}

/**
 * Magnum
 */
projectileinfo
{
	name           "Magnum bullet"
	damage         10
	damagetype     DAMAGETYPE_IMPACT
}

weaponinfo
{
	name           "Magnum"
	number         WEAPONINDEX_MAGNUM
	projectile     "Magnum bullet"
	numprojectiles 1
	speed          0
}

/**
 * TOD50
 */
projectileinfo
{
	name           "TOD50 bullet"
	damage         40
	damagetype     DAMAGETYPE_IMPACT
}

weaponinfo
{
	name           "TOD50"
	number         WEAPONINDEX_TOD50
	projectile     "TOD50 bullet"
	numprojectiles 1
	speed          0
}
