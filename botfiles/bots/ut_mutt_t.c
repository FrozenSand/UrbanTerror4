//===========================================================================
//
// Name:			ut_mutt_t.c
// Function:		chat lines for Grunt
// Programmer:		Mr. Elusive / GottaBeKD
// Author:			No Fear
// Last update:		Oct. 8, 1999
// Tab Size:		3 (real tabs)
//===========================================================================

chat "mutt"
{
	#include "teamplay.h"
	//
	type "game_enter"
	{
		"Lo everE 1";
	} //end type

	type "game_exit"
	{
		"Time for a hot bath with my rubber ducky, seeya.";
	} //end type

	type "level_start"
	{
		"oooooh yeah.... this is mmmmyyyyyy map.";
	} //end type

	type "level_end"
	{
		"Well, that was fun wasnt it.";
	} //end type

	type "level_end_victory"
	{
		"Hahahaha.... Oh so 0wnt!";
	} //end type

	type "level_end_lose"
	{
		"I, um... maybe my gf should go home now";
	} //end type

	//================================================================
	//================================================================


	type "death_drown"
	{
		"I am a fish, I am a fish, I am a fish, I am a fish, I am a fish.";
	} //end type

	type "death_suicide"
	{
		"Well, someone has to keep my score down.";
	} //end type

	type "death_insult"
	{
		"Did you ever think that using a bot kinda detracts from the fun of the game, ", 0, "?";
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
	type "kill_insult"
	{
		"WHO IS YOUR DADDY??? I AM YOUR DADDY!!";
	} //end type

	type "kill_praise"
	{
		"Jeez mon, you ever consider being that rabbit in greyhound races?";
	} //end type

	//================================================================
	//================================================================

	type "random_insult"
	{
		"So then, how much do they pay all you moving bullseyes again?";

	} //end type

	type "random_misc"
	{
		"I always wonder whether this is worth the money.";
	} //end type

} //end chat botname
