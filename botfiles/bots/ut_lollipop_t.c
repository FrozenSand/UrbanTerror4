//===========================================================================

//

// Name:			ut bot file

// Function:		chat lines for Grunt

// Programmer:		Mr. Elusive / GottaBeKD

// Author:			No Fear

// Last update:		Oct. 8, 1999

// Tab Size:		3 (real tabs)

//===========================================================================



chat "lollipop"

{

	#include "teamplay.h"

	//

	type "game_enter"

	{

		"Lo everE 1";

		HELLO5;

		HELLO6;

	} //end type



	type "game_exit"

	{

		"Time for a hot bath with my rubber ducky, seeya.";

		GOODBYE5;

	} //end type



	type "level_start"

	{

		LEVEL_START0;

		"oooooh yeah.... this is mmmmyyyyyy map.";

	} //end type



	type "level_end"

	{

		"Well, that was fun wasnt it.";

		LEVEL_END0;

	} //end type



	type "level_end_victory"

	{

		"Hahahaha.... Oh so 0wnt!";

		LEVEL_END_VICTORY3;

	} //end type



	type "level_end_lose"

	{

		"I, um... maybe my gf should go home now";

		LEVEL_END_LOSE1;

	} //end type



	//================================================================

	//================================================================



	type "death_telefrag"

	{

		DEATH_TELEFRAGGED0;

		DEATH_TELEFRAGGED1;

	} //end type



	type "death_lava"

	{

		"Gah.";

		"Hey, who put that there!?";

	} //end type



	type "death_slime"

	{

		"Oh FFS!";

		"Reminds me of the ", liquid, " we used to get at the mess hall.";

	} //end type



	type "death_drown"

	{

		"I am a fish, I am a fish, I am a fish, I am a fish, I am a fish.";

		DEATH_DROWN1;

		DEATH_SUICIDE1;

	} //end type



	type "death_suicide"

	{

		"Well, someone has to keep my score down.";

		DEATH_SUICIDE1;

	} //end type



	type "death_gauntlet"

	{

		"You gotta have a lotta guts to come here and do that, ", 0, ".";

		"I'm impressed. Now it's my turn.";

		0, " You are in for a beating now.";

		"Thanks for sharing that with me, ", 0, ".";

		DEATH_GAUNTLET0;

		DEATH_GAUNTLET1;

	} //end type



	type "death_rail"

	{

		"OK, that was a good shot.";

		"That just ruins my day. Now I gotta ruin yours, ", 0, ".";

		DEATH_RAIL1;

	} //end type



	type "death_bfg"

	{

		0, ", I'm tempted to grab that thing and shove it ...";

		"Use that thing once more and you're gonna eat it ", 0, ".";

		ponder, " I remember that weapon being a lot scarier.";

		DEATH_BFG0;

	} //end type



	type "death_insult"

	{

		"Did you ever think that using a bot kinda detracts from the fun of the game, ", 0, "?";


		DEATH_INSULT4;

	} //end type



	type "death_praise"

	{

		"Ns";


	} //end type



	//======================================================

	//======================================================



	type "hit_talking" //bot is hit while chat balloon is visible; lecture attacker on poor sportsmanship

	{

		"OOOh that was cheap!";

		//0 = shooter

	} //end type



	type "hit_nodeath" //bot is hit by an opponent's weapon attack; either praise or insult

	{

		"Mummy... The nasty people are shooting me again :(";

		//0 = shooter

	} //end type



	type "hit_nokill" //bot hits an opponent but does not kill it

	{

		"Im commin 4 ya f3wl... Dont stand still.";

		//0 = opponent

	} //end type



	type "enemy_suicide"

	{

		"Jeez, you got something right for a change, did they teach you that at school or what?";

		//0 = enemy

	} //end type



	//================================================================

	//================================================================



	type "kill_rail"

	{

		"'Old Betsy' still works like a charm.";

		"I just love modern technology.";

		0, ", consider yourself terminated with extreme prejudice.";

		KILL_RAIL2;

	} //end type



	type "kill_gauntlet"

	{

		"Feel the ^1POWER!";

		"Ow. My hand hurts now.";

		"Beats a hand blaster any day.";

		KILL_GAUNTLET1;

	} //end type



	type "kill_telefrag"

	{

		"Blood and gore all over the floor and me without a spoon.";

		TELEFRAGGED0;

		TELEFRAGGED6;

	} //end type



	type "kill_insult"

	{

		"WHO IS YOUR DADDY??? I AM YOUR DADDY!!";

		KILL_INSULT0;

		KILL_INSULT4;

		KILL_INSULT6;

		KILL_INSULT14;

		KILL_INSULT32;

		KILL_INSULT38;

	} //end type



	type "kill_praise"

	{

		"Jeez mon, you ever consider being that rabbit in greyhound races?";

		PRAISE4;

		D_PRAISE6;

	} //end type



	//================================================================

	//================================================================



	type "random_insult"

	{

		"So then, how much do they pay all you moving bullseyes again?";


		TAUNT2;

		TAUNT6;

		TAUNT3;

	} //end type



	type "random_misc"

	{

		MISC8;

		MISC2;

		MISC10;

		MISC14;

		"I always wonder whether this is worth the money.";

	} //end type



} //end chat botname

