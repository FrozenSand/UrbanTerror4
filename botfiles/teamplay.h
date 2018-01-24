//===========================================================================
//
// Name:			teamplay.h
// Function:		teamplay chats
// Programmer:		MrElusive (MrElusive@idsoftware.com)
// Last update:		1999-10-03
// Tab Size:		4 (real tabs)
//===========================================================================

	//the bot doesn't know who someone is
	type "whois"
	{
		"Who is ", 0, "?";
		"Who uses the name ", 0, "?";
		"I don't know of any team mate named ", 0, ".";
		"Never heard of ", 0, ". A friend of yours?";
		0, "?", neutral;
	} //end type

	//the bot doesn't know where someone is hanging out
	type "whereis"
	{
		"Where is ", 0, "?";
		"I don't know where ", 0, " is.";
		"Can someone tell me where I can find ", 0, ".";
		"Where is ", 0, " hanging out?";
		"Where the heck is ", 0, "?";
		"What? Am I ", 0, "'s keeper today?";
	} //end type

	//the bot asks where you are
	type "whereareyou"
	{
		"Where are you ", 0, "?";
		"Where the heck are you, ", 0, "?";
		"I don't know where you are ", 0, ". Report in.";
		"Tell me where you are ", 0, ".";
		"Tell me where to find you, ", 0, ".";
	} //end type

	//cannot find something
	type "cannotfind"
	{
		"I don't know where to find a ", 0, ".";
		"Where can I find a ", 0, "?";
		"Where the heck is a ", 0, "?";
		"Are you sure there's a , ", 0, " in this arena? I can't find it.";
	} //end type

	//bot tells where he/she is
	type "location"
	{
		"I'm near the ", 0;
	} //end type

	//bot tells where he/she is and near which base
	type "ctflocation"
	{
		"I'm near the ", 0, " in the ", 1, " base";
	} //end type

	//start helping
	type "help_start"
	{
		"I'm coming to help you ", 0, ".";
		"Help is on the way ", 0, ".";
		"Hang in there ", 0, " I'm on my way to help you.";
		"Hang in there ", 0, " I'm coming to help.";
		"Hold on, ", 0, " Reinforcements are on the way.";
		"Keep the enemy busy ", 0, " help is on its way.";
		"The cavalry is coming to the rescue, ",0, ".";
	} //end type

	//start accompanying
	type "accompany_start"
	{
		"I'll be your companion ", 0 ,".";
		affirmative, " I'll follow you around ", 0, ".";
		"I'll accompany you ", 0, ".";
		affirmative, " ", 0, ", I'll accompany you.";
		"OK ", 0, ", lead the way!";
		"Following you is now my mission in life ", 0, ".";
		"Lead the way ", 0, ". I'll follow.";
		"Just call me Tonto, ", 0, ".";
		"You lead, ", 0, ". And I follow.";
		"You know who your buddy is, ", 0, ".";
	} //end type

	//stop accompanying
	type "accompany_stop"
	{
		"I'm going my own way now ", 0, ". ", teamchat_01;
		"I've had enough of this follow the leader stuff, ", 0, ". ", teamchat_01;
		"Being your companion has been nice while it lasted ", 0, ". :)";
		"I've got other things to do ", 0, ". ", teamchat_01;
	} //end type

	//cannot find companion
	type "accompany_cannotfind"
	{
		"I can't find you ", 0, ". ", teamchat_02;
		teamchat_02, " I can't find you ", 0, ".";
		"Where are you hiding, ", 0 , "? ", teamchat_02;
	} //end type

	//arrived at companion
	type "accompany_arrive"
	{
		"At your service ", 0, ".";
		"Your wish is my command ", 0, ".";
		"Ready to go ", 0, "!";
		"Ready for your command ", 0, ".";
		"I'm in position ", 0, ".";
		"Awaiting your command ", 0, ".";
		"At your command ", 0, "!";
		"As you wish ", 0, ".";
		"Your orders ", 0, "?";
		"Ready when you are ", 0, ".";
		"Set and ready ", 0, ".";
		"Reporting for duty, ", 0, ".";
		"Just lead the way, ", 0, ".";
		"Command me, ", 0, "!";
	} //end type

	//start defending a key area
	type "defend_start"
	{
		"I'm defending the ", 0, ".";
		"I'll guard the ", 0, "!";
		"I'm going to defend the ", 0, ".";
		"Leave defending the ", 0, " to me.";
		"Leave guarding the ", 0, " to me.";
		"I'm on guard at the ", 0, "!";
	} //end type

	//stop defending a key area
	type "defend_stop"
	{
		"I'll stop defending the ", 0, ".";
		"I've had enough of defending the ", 0, ".", teamchat_02;
		"I'm through guarding the stinking ", 0, ".";
		"I've been defending the ", 0, " for long enough now.";
		"Have someone else defend the ", 0, ". ", teamchat_02;
	} //end type

	//start getting an item
	type "getitem_start"
	{
		"I'm going to get the ", 0;
		"I'm off to find the ", 0;
	} //end type
	//item is not there
	type "getitem_notthere"
	{
		"the ", 0, " isn't there";
	} //end type
	//picked up the item
	type "getitem_gotit"
	{
		"I got the ", 0;
		"I now have the ", 0;
		"ok just picked up the ", 0;
		"I'm now carrying the ", 0;
	} //end type

	//go kill someone
	type "kill_start"
	{
		"I'm going to kill ", 0;
		"I'll hunt down ", 0;
		"I'll destroy ", 0;
	} //end type
	//killed the person
	type "kill_done"
	{
		"I killed ", 0;
		"I terminated ", 0;
		0, " is terminated";
		0, " is no more";
		0, " is dead";
	} //end type

	//start camping
	type "camp_start"
	{
		affirmative, " I'll set-up camp here, ", 0, ".";
		"I love camp-outs, ", 0, "!";
		affirmative, " I'll camp ", 0, ".";
		"I'd love to camp ", 0, ".";
		"Leave the camping to me ", 0, "!";
		"I'm pitching my tent here, ", 0, ".";
		"Pitching my tent and toasting marshmallows.";
		"Mmmmmm .... camping!";
	} //end type

	//stop camping
	type "camp_stop"
	{
		"I've had enough of camping here.";
		"I'm through camping here.";
		"I'm bored with camping. ", teamchat_02;
		"I've been camping here long anough now.";
		"I hate camping here I'm off.";
		"I'm not a happy camper any more. ", teamchat_02;
	} //end type

	//in camp position
	type "camp_arrive" //0 = one that ordered the bot to camp
	{
		"I'm in position ", 0, ".";
		"I'll take care of the enemy from here ", 0, ".";
		"I'm ready, ", 0, ". ", teamchat_03;
	} //end type

	//start patrolling
	type "patrol_start" //0 = locations
	{
		"I'm gonna patrol from ", 0, ".";
		"I'm starting my patrol at ", 0, ".";
		"I'm on patrol around ", 0, ".";
	} //end type

	//stop patrolling
	type "patrol_stop"
	{
		"I'm through with patrolling";
		"My patrol is over. ", teamchat_02;
		"No more patrolling for me.";
		"I'm done with this patrol. ", teamchat_02;
	} //end type

	//start trying to capture the enemy flag
	type "captureflag_start"
	{
		"I'm gonna capture the enemy flag!";
		"I'm off to grab the enemy flag!";
		"I'm going to get the enemy flag.";
		"I'm on my way to capture the enemy flag.";
		"The enemy flag will be mine!";
		"I'm going in for the capture!";
	} //end type

	//return the flag
	type "returnflag_start"
	{
		"I'm off to return the flag";
		"I'll return the flag";
		"I'll find the flag";
	} //end type

	//bot is dismissed
	type "dismissed"
	{
		"I'm off on my own";
		"I'm off roaming";
	} //end type

	//the bot joined a sub-team
	type "joinedteam"
	{
		"I'm on the ", 0, " team.";
		"I'm on team ", 0, ".";
		"I joined team ", 0, ".";
		"I've joined the ", 0, " team.";
		"OK, ", 0, " is my team.";
		"Affirmative, " ", ", 0, " is my team.";
		affirmative, " I joined team ", 0, ".";
		"OK. I joined team ", 0, ".";
	} //end type

	//bot leaves a sub team
	type "leftteam" //0 = team name
	{
		"I just quit the ", 0, " team.";
		"I'm not on team ", 0, " anymore.";
		"I left team ", 0, ".";
		"I've quit the ", 0, " team.";
		"OK, ", 0, " is not my team.";
		"OK. I quit team ", 0, ".";
		"I'm outta team ", 0, ".";
		"I'm not in ", 0, " anymore.";
	} //end type

	//bot is in a team
	type "inteam"
	{
		"I'm in team ", 0;
	} //end type

	//bot is in no team
	type "noteam"
	{
		"I'm in no team";
		"I'm not in any team";
		"I'm on my own";
		"I'm on my own, I have no friends";
	} //end type

	//the checkpoint is invalid
	type "checkpoint_invalid"
	{
		"That's an invalid checkpoint.";
	} //end type

	//confirm the checkpoint
	type "checkpoint_confirm" //0 = name, 1 = gps
	{
		affirmative, " Checkpoint ", 0, " at ", 1, " is confirmed.";
	} //end type

	//follow me
	type "followme"
	{
		"Get your butt over here ", 0, ".";
		"What are you waiting for ", 0, "?";
		"Are you waiting for a gold-edged invitation, ", 0, "?";
		"Come on ", 0, ", we haven't got whole day!";
		"Hurry up ", 0, "!";
		0, ", what didn't you understand about 'follow me?'";
	} //end type

	//the bot is helping someone
	type "helping"
	{
		"I'm helping ", 0, ".";
		"I'm trying to help ", 0, ".";
		"I'm working with ", 0, " at the moment.";
	} //end type

	//the bot is accompanying someone
	type "accompanying"
	{
		"I'm accompanying ", 0, ".";
		"I'm following ", 0, ".";
		"I'm covering ", 0, "'s back.";
		"I'm ", 0, "'s bodyguard";
	} //end type

	//the bot is defending something
	type "defending"
	{
		"I'm defending the ", 0, ".";
		"I'm guarding the ", 0, ".";
		"The ", 0," is under my supervision.";
		"I guard the ", 0, ".";
		teamchat_04, " I'm guarding the ", 0, ".";
	} //end type

	//the bot is going for an item
	type "gettingitem"
	{
		"I'm getting the ", 0;
	} //end type

	//trying to kill someone
	type "killing"
	{
		"I'm trying to kill ", 0;
		"I'm hunting down ", 0;
		"I'm chasing after ", 0;
	} //end type

	//the bot is camping
	type "camping"
	{
		"I'm camping.";
		"I'm camping where I'm supposed to be.";
		"I've set up a campground.";
	} //end type

	//the bot is patrolling
	type "patrolling"
	{
		"I'm patrolling.";
		"I'm on patrol right now.";
		"I'm on patrol.";
	} //end type

	//the bot is capturing the flag
	type "capturingflag"
	{
		"I'm trying to capture the flag.";
		"I'm getting the enemy flag.";
		"I'm going to get the enemy flag.";
		"I'm stealing the enemy flag.";
		"I'm laying my paws on the enemy flag now.";
	} //end type

	//the bot is rushing to the base
	type "rushingbase"
	{
		"I'm rushing to the base.";
		"I'm going to the base.";
		"I'm running to the base.";
		"I'm heading for the base.";
	} //end type

	//trying to return the flag
	type "returningflag"
	{
		"I'm trying to return the flag";
		"I'm trying to find the flag";
		"I'm trying to bring the flag back to the base";
	} //end type

	//the bot is just roaming a bit
	type "roaming"
	{
		"I'm just roaming a bit.";
		"Just rambling around right now.";
		"I'm out here looking for trouble.";
		"I'm gathering stuff?";
		"I'm out shopping for goodies.";
		"I'm picking up some goodies.";
	} //end type

	//==========================
	// teamplay chats
	//==========================
	//team mate killed the bot
	type "death_teammate"
	{
		"why are you shooting at me ", 0;
		"watch your fire ", 0;
		"I'm on your team ", 0, "!!";
	} //end type
	//killed by a team mate
	type "kill_teammate"
	{
		"sorry ", 0;
		0, " oops";
	} //end type

	//==========================
	// CTF useless chats
	//==========================

	//team mate got the enemy flag
	type "ctf_gotflag"
	{
		"now bring the flag home ", 0;
		"go go go ", 0, " bring it home";
	} //end type
	//team mate gets the enemy flag to the base
	type "ctf_captureflag"
	{
		"good work ", 0;
	} //end type
	//team mate returns the base flag
	type "ctf_returnflag"
	{
	} //end type
	//team mate defends the base
	type "ctf_defendbase"
	{
		"yes ", 0, " keep them out of our base";
	} //end type
	//team mate carrying the enemy flag dies
	type "ctf_flagcarrierdeath"
	{
		"someone get that flag";
	} //end type
	//team mate kills enemy with base flag
	type "ctf_flagcarrierkill"
	{
		"return that flag ", 0;
	} //end type

	//==========================
	// NOTE: make sure these work with match.c
	//==========================
	//ask who the team leader is
	type "whoisteamleader"
	{
		"Who is the team leader";
		"Is there a team leader";
	} //end type

	//I am the team leader
	type "iamteamleader"
	{
		"I'm the team leader";
	} //end type
	//defend the base command
	type "cmd_defendbase"
	{
		0, " defend the base";
		0, " guard the base";
	} //end type
	//get the enemy flag command
	type "cmd_getflag"
	{
		0, " get the flag";
		0, " get the enemy flag";
	} //end type
	//accompany someone command
	type "cmd_accompany"
	{
		0, " accompany ", 1;
		0, " follow ", 1;
	} //end type
	//accompany me command
	type "cmd_accompanyme"
	{
		0, " accompany me";
		0, " follow me";
	} //end type
