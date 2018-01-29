//===========================================================================
//
// Name:			match.c
// Function:		match templates
// Programmer:		Mr Elusive
// Last update:		1999-11-20
// Tab Size:		4 (real tabs)
// Notes:			currently maximum of 8 match variables
//===========================================================================

#include "game.h"
#include "match.h"


//entered the game message
MTCONTEXT_ENTERGAME
{
	//enter game message
	NETNAME, " entered the game" = (MSG_ENTERGAME, 0);
} //end MTCONTEXT_ENTERGAME

//initial team command chat messages
MTCONTEXT_INITIALTEAMCHAT
{
	//help someone (and meet at the rendezvous point)
	"(", NETNAME, ")", PLACE, ": help "|" meet ", TEAMMATE, " near "|" at ", "the "|"checkpoint "|"waypoint "|"", ITEM = (MSG_HELP, ST_NEARITEM);
	"(", NETNAME, ")", PLACE, ": help "|" meet ", TEAMMATE = (MSG_HELP, ST_SOMEWHERE);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " help "|" meet ", TEAMMATE, " near "|" at ", "the "|"checkpoint "|"waypoint "|"", ITEM = (MSG_HELP, $evalint(ST_NEARITEM|ST_ADDRESSED));
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " help "|" meet ", TEAMMATE = (MSG_HELP, $evalint(ST_SOMEWHERE|ST_ADDRESSED));

	//accompany someone (and meet at the rendezvous point) ("hunk follow me", "hunk go with babe", etc.)
	"(", NETNAME, ")", PLACE, ": ", "accompany "|"go with "|"follow "|"cover ", TEAMMATE, " near "|" at ", "the "|"checkpoint "|"waypoint "|"", ITEM, " for", TIME = (MSG_ACCOMPANY, $evalint(ST_NEARITEM|ST_TIME));
	"(", NETNAME, ")", PLACE, ": ", "accompany "|"go with "|"follow "|"cover ", TEAMMATE, " near "|" at ", "the "|"checkpoint "|"waypoint "|"", ITEM = (MSG_ACCOMPANY, ST_NEARITEM);
	"(", NETNAME, ")", PLACE, ": ", "accompany "|"go with "|"follow "|"cover ", TEAMMATE, " for", TIME = (MSG_ACCOMPANY, $evalint(ST_SOMEWHERE|ST_TIME));
	"(", NETNAME, ")", PLACE, ": ", "accompany "|"go with "|"follow "|"cover ", TEAMMATE = (MSG_ACCOMPANY, ST_SOMEWHERE);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " accompany "|" go with "|" follow "|" cover ", TEAMMATE, " near "|" at ", "the "|"checkpoint "|"waypoint "|"", ITEM, " for", TIME = (MSG_ACCOMPANY, $evalint(ST_NEARITEM|ST_ADDRESSED|ST_TIME));
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " accompany "|" go with "|" follow "|" cover ", TEAMMATE, " near "|" at ", "the "|"checkpoint "|"waypoint "|"", ITEM = (MSG_ACCOMPANY, $evalint(ST_NEARITEM|ST_ADDRESSED));
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " accompany "|" go with "|" follow "|" cover ", TEAMMATE, " for", TIME = (MSG_ACCOMPANY, $evalint(ST_SOMEWHERE|ST_ADDRESSED|ST_TIME));
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " accompany "|" go with "|" follow "|" cover ", TEAMMATE = (MSG_ACCOMPANY, $evalint(ST_SOMEWHERE|ST_ADDRESSED));

	//get the flag in CTF
	"(", NETNAME, ")", PLACE, ": get ", "the "|"", "blue "|"red "|"enemy "|"", "flag" = (MSG_GETFLAG, 0);
	"(", NETNAME, ")", PLACE, ": go get ", "the "|"", "blue "|"red "|"enemy "|"", "flag" = (MSG_GETFLAG, 0);
	"(", NETNAME, ")", PLACE, ": capture ", "the "|"", "blue "|"red "|"enemy "|"", "flag" = (MSG_GETFLAG, 0);
	"(", NETNAME, ")", PLACE, ": go capture ", "the "|"", "blue "|"red "|"enemy "|"", "flag" = (MSG_GETFLAG, 0);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " go get ", "the "|"", "blue "|"red "|"enemy "|"", "flag" = (MSG_GETFLAG, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " get ", "the "|"", "blue "|"red "|"enemy "|"", "flag" = (MSG_GETFLAG, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " go capture ", "the "|"", "blue "|"red "|"enemy "|"", "flag" = (MSG_GETFLAG, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " capture ", "the "|"", "blue "|"red "|"enemy "|"", "flag" = (MSG_GETFLAG, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": kill the flag carrier" = (MSG_GETFLAG, 0);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " kill the flag carrier" = (MSG_GETFLAG, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " attack ", "the "|"", "enemy "|"red "|"blue "|"", "base"|"flag" = (MSG_GETFLAG, ST_ADDRESSED);

	//kill someone (NOTE: make sure these are after the get flag match templates because of the "kill"
	"(", NETNAME, ")", PLACE, ": kill ", ENEMY = (MSG_KILL, 0);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " kill ", ENEMY = (MSG_KILL, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": hunt down ", ENEMY = (MSG_KILL, 0);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " hunt down ", ENEMY = (MSG_KILL, ST_ADDRESSED);

	//get item
	"(", NETNAME, ")", PLACE, ": get ", "the "|"", ITEM = (MSG_GETITEM, 0);
	"(", NETNAME, ")", PLACE, ": go get ", "the "|"", ITEM = (MSG_GETITEM, 0);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " get ", "the "|"", ITEM = (MSG_GETITEM, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " go get ", "the "|"", ITEM = (MSG_GETITEM, ST_ADDRESSED);

	//defend/guard a key area
	"(", NETNAME, ")", PLACE, ": ", "defend "|"guard ", "the "|"checkpoint "|"waypoint "|"", KEYAREA, " for", TIME = (MSG_DEFENDKEYAREA, ST_TIME);
	"(", NETNAME, ")", PLACE, ": ", "defend "|"guard ", "the "|"checkpoint "|"waypoint "|"", KEYAREA = (MSG_DEFENDKEYAREA, 0);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " defend "|" guard ", "the "|"checkpoint "|"waypoint "|"", KEYAREA, " for", TIME = (MSG_DEFENDKEYAREA, $evalint(ST_ADDRESSED|ST_TIME));
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " defend "|" guard ", "the "|"checkpoint "|"waypoint "|"", KEYAREA = (MSG_DEFENDKEYAREA, ST_ADDRESSED);

	//camp somewhere ("hunk camp here", "hunk camp there", "hunk camp near the rl", etc.)
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " camp ", "there "|"over there ", " for", TIME = (MSG_CAMP, $evalint(ST_ADDRESSED|ST_TIME|ST_THERE));
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " camp ", "there"|"over there" = (MSG_CAMP, $evalint(ST_ADDRESSED|ST_THERE));
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " camp ", "here"|"over here ", " for", TIME = (MSG_CAMP, $evalint(ST_ADDRESSED|ST_TIME|ST_HERE));
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " camp ", "here"|"over here" = (MSG_CAMP, $evalint(ST_ADDRESSED|ST_HERE));
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " camp ", "near "|"at "|"", "the "|"checkpoint "|"waypoint "|"", KEYAREA, " for", TIME = (MSG_CAMP, $evalint(ST_ADDRESSED|ST_NEARITEM|ST_TIME));
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " camp ", "near "|"at "|"", "the "|"checkpoint "|"waypoint "|"", KEYAREA = (MSG_CAMP, $evalint(ST_ADDRESSED|ST_NEARITEM));
	//go to (same as camp)
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " go to ", "the "|"checkpoint "|"waypoint "|"", KEYAREA = (MSG_CAMP, $evalint(ST_ADDRESSED|ST_NEARITEM));

	//rush to the base in CTF
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " rush base" = (MSG_RUSHBASE, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " rush to base" = (MSG_RUSHBASE, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " rush to the base" = (MSG_RUSHBASE, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " go to base" = (MSG_RUSHBASE, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " go to the base" = (MSG_RUSHBASE, ST_ADDRESSED);

	//return the flag
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " return the flag" = (MSG_RETURNFLAG, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " return our flag" = (MSG_RETURNFLAG, ST_ADDRESSED);


	//who is the team leader
	"(", NETNAME, ")", PLACE, ": who is ", "the leader"|"the team leader"|"team leader"|"leader","?"|"" = (MSG_WHOISTEAMLAEDER, 0);
	"(", NETNAME, ")", PLACE, ": is there a ", "leader"|"team leader","?"|"" = (MSG_WHOISTEAMLAEDER, 0);

	//become the team leader
	"(", NETNAME, ")", PLACE, ": ", TEAMMATE, " will be ", THE_TEAM, "leader" = (MSG_STARTTEAMLEADERSHIP, 0);
	"(", NETNAME, ")", PLACE, ": ", TEAMMATE, " want to be ", THE_TEAM, "leader" = (MSG_STARTTEAMLEADERSHIP, 0);
	"(", NETNAME, ")", PLACE, ": ", TEAMMATE, " wants to be ", THE_TEAM, "leader" = (MSG_STARTTEAMLEADERSHIP, 0);
	"(", NETNAME, ")", PLACE, ": ", TEAMMATE, " is ", THE_TEAM, "leader" = (MSG_STARTTEAMLEADERSHIP, 0);
	"(", NETNAME, ")", PLACE, ": ", TEAMMATE, " you are ", THE_TEAM, "leader" = (MSG_STARTTEAMLEADERSHIP, 0);
	"(", NETNAME, ")", PLACE, ": I am ", "the leader"|"the team leader"|"team leader"|"leader" = (MSG_STARTTEAMLEADERSHIP, ST_I);

	//stop being the team leader
	"(", NETNAME, ")", PLACE, ": ", TEAMMATE, " is not ", THE_TEAM, "leader" = (MSG_STOPTEAMLEADERSHIP, 0);
	"(", NETNAME, ")", PLACE, ": ", TEAMMATE, " does not want to be ", THE_TEAM, "leader" = (MSG_STOPTEAMLEADERSHIP, 0);
	"(", NETNAME, ")", PLACE, ": ", TEAMMATE, " quits being ", THE_TEAM, "leader" = (MSG_STOPTEAMLEADERSHIP, 0);
	"(", NETNAME, ")", PLACE, ": ", TEAMMATE, " stops being ", THE_TEAM, "leader" = (MSG_STOPTEAMLEADERSHIP, 0);
	"(", NETNAME, ")", PLACE, ": I will not be ", THE_TEAM, "leader" = (MSG_STOPTEAMLEADERSHIP, ST_I);
	"(", NETNAME, ")", PLACE, ": I do not want to be ", THE_TEAM, "leader" = (MSG_STOPTEAMLEADERSHIP, ST_I);
	"(", NETNAME, ")", PLACE, ": I quit being ", THE_TEAM, "leader" = (MSG_STOPTEAMLEADERSHIP, ST_I);
	"(", NETNAME, ")", PLACE, ": I stop being ", THE_TEAM, "leader" = (MSG_STOPTEAMLEADERSHIP, ST_I);

	//wait for someone
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " wait for me", " near "|" at ", "the "|"checkpoint "|"waypoint "|"", ITEM = (MSG_WAIT, $evalint(ST_NEARITEM|ST_ADDRESSED|ST_I));
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " wait for me" = (MSG_WAIT, $evalint(ST_SOMEWHERE|ST_ADDRESSED|ST_I));
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " wait for ", TEAMMATE, " near "|" at ", "the "|"checkpoint "|"waypoint "|"", ITEM = (MSG_WAIT, $evalint(ST_NEARITEM|ST_ADDRESSED));
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " wait for ", TEAMMATE = (MSG_WAIT, $evalint(ST_SOMEWHERE|ST_ADDRESSED));

	//ask what someone/everyone is doing
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " what are you doing", "?"|"" = (MSG_WHATAREYOUDOING, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": what are you doing ", ADDRESSEE, "?"|"" = (MSG_WHATAREYOUDOING, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " report" = (MSG_WHATAREYOUDOING, ST_ADDRESSED);

	//ask the team leader what to do
	"(", NETNAME, ")", PLACE, ": what is my command", "?"|"" = (MSG_WHATISMYCOMMAND, 0);
	"(", NETNAME, ")", PLACE, ": what should I do", "?"|"" = (MSG_WHATISMYCOMMAND, 0);
	"(", NETNAME, ")", PLACE, ": what am I supposed to do", "?"|"" = (MSG_WHATISMYCOMMAND, 0);
	"(", NETNAME, ")", PLACE, ": what is my job", "?"|"" = (MSG_WHATISMYCOMMAND, 0);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " what is my command", "?"|"" = (MSG_WHATISMYCOMMAND, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " what should I do", "?"|"" = (MSG_WHATISMYCOMMAND, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " what am I supposed to do", "?"|"" = (MSG_WHATISMYCOMMAND, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " what is my job", "?"|"" = (MSG_WHATISMYCOMMAND, ST_ADDRESSED);

	//ask where someone or everyone is
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " where are you", "?"|"" = (MSG_WHEREAREYOU, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": where are you ", ADDRESSEE, "?"|"" = (MSG_WHEREAREYOU, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": where is ", ADDRESSEE, "?"|"" = (MSG_WHEREAREYOU, ST_ADDRESSED);

	//join a sub team
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " create team ", TEAMNAME = (MSG_JOINSUBTEAM, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " create squad ", TEAMNAME = (MSG_JOINSUBTEAM, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " join team ", TEAMNAME = (MSG_JOINSUBTEAM, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " join squad ", TEAMNAME = (MSG_JOINSUBTEAM, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " you"|" we"|"", " are", " in"|"", " team ", TEAMNAME = (MSG_JOINSUBTEAM, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " you"|" we"|"", " are", " in"|"", " squad ", TEAMNAME = (MSG_JOINSUBTEAM, ST_ADDRESSED);

	//leave a sub team
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " leave your team" = (MSG_LEAVESUBTEAM, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " leave your squad" = (MSG_LEAVESUBTEAM, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " ungroup" = (MSG_LEAVESUBTEAM, ST_ADDRESSED);

	//what team are you in
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " which "|" what ", "team"|"squad", " are you ", "in"|"on", "?"|"" = (MSG_WHICHTEAM, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " in"|" on", " which "|" what ", "team"|"squad", " are you ", "?"|"" = (MSG_WHICHTEAM, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " what is your ", "team"|"squad","?"|"" = (MSG_WHICHTEAM, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " are you ", "in"|"on", " a ", "team"|"squad","?"|"" = (MSG_WHICHTEAM, ST_ADDRESSED);

	//dismiss
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " dismissed" = (MSG_DISMISS, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " dismiss" = (MSG_DISMISS, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " roam" = (MSG_DISMISS, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " stop action" = (MSG_DISMISS, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " cancel order" = (MSG_DISMISS, ST_ADDRESSED);

	//remember checkpoint
	"(", NETNAME, ")", PLACE, ": ", "checkpoint "|"waypoint ", NAME, " is at gps ", POSITION = (MSG_CHECKPOINT, 0);
	"(", NETNAME, ")", PLACE, ": ", "checkpoint "|"waypoint ", NAME, " is at ", POSITION = (MSG_CHECKPOINT, 0);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " checkpoint "|" waypoint ", NAME, " is at gps ", POSITION = (MSG_CHECKPOINT, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " checkpoint "|" waypoint ", NAME, " is at ", POSITION = (MSG_CHECKPOINT, ST_ADDRESSED);

	//patrol
	"(", NETNAME, ")", PLACE, ": patrol ", "from "|"", KEYAREA, " for", TIME = (MSG_PATROL, ST_TIME);
	"(", NETNAME, ")", PLACE, ": patrol ", "from "|"", KEYAREA = (MSG_PATROL, 0);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " patrol ", "from "|"", KEYAREA, " for", TIME = (MSG_PATROL, $evalint(ST_ADDRESSED|ST_TIME));
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " patrol ", "from "|"", KEYAREA = (MSG_PATROL, ST_ADDRESSED);

	//create new formation
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " create a new ", FORMATION, " formation" = (MSG_CREATENEWFORMATION, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " we are going to create a new ", FORMATION, " formation" = (MSG_CREATENEWFORMATION, ST_ADDRESSED);
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " we are going to create a new formation called ", FORMATION = (MSG_CREATENEWFORMATION, ST_ADDRESSED);

	//formation position
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " your formation position is ", POSITION, " relative to ", TEAMMATE = (MSG_FORMATIONPOSITION, ST_ADDRESSED);

	//form a known formation
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " form the ", FORMATION, " formation" = (MSG_DOFORMATION, ST_ADDRESSED);

	//the formation intervening space
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " the formation intervening space is ", NUMBER, " meter" = (MSG_FORMATIONSPACE, $evalint(ST_ADDRESSED|ST_METER));
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " the formation intervening space is ", NUMBER, " feet" = (MSG_FORMATIONSPACE, $evalint(ST_ADDRESSED|ST_FEET));

	//lead the way
	"(", NETNAME, ")", PLACE, ": lead the way" = (MSG_LEADTHEWAY, 0);
	"(", NETNAME, ")", PLACE, ": lead the way ", ADDRESSEE = (MSG_LEADTHEWAY, $evalint(ST_ADDRESSED));
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " lead the way" = (MSG_LEADTHEWAY, $evalint(ST_ADDRESSED));
	"(", NETNAME, ")", PLACE, ": lead ", TEAMMATE, " the way ", ADDRESSEE = (MSG_LEADTHEWAY, $evalint(ST_ADDRESSED|ST_SOMEONE));
	"(", NETNAME, ")", PLACE, ": ", ADDRESSEE, " lead ", TEAMMATE, " the way" = (MSG_LEADTHEWAY, $evalint(ST_ADDRESSED|ST_SOMEONE));
} //end MTCONTEXT_INITIALTEAMCHAT

MTCONTEXT_CTF
{
	NETNAME, " got the ", FLAG, " flag", "!"|"" = (MSG_CTF, ST_GOTFLAG);
	NETNAME, " captured the ", FLAG, " flag", "!"|"" = (MSG_CTF, ST_CAPTUREDFLAG);
	NETNAME, " returned the ", FLAG, " flag", "!"|"" = (MSG_CTF, ST_RETURNEDFLAG);
} //end MTCONTEXT_CTF

MTCONTEXT_TIME
{
	TIME, " minute"|" min","s"|"" = (MSG_MINUTES, 0);
	TIME, " second"|" sec","s"|"" = (MSG_SECONDS, 0);
	"ever" = (MSG_FOREVER, 0);
} //end MTCONTEXT_TIME

MTCONTEXT_PATROLKEYAREA
{
	"the "|"checkpoint "|"waypoint "|"", KEYAREA, " to "|" and ", MORE = (MSG_PATROLKEYAREA, ST_MORE);
	"the "|"checkpoint "|"waypoint "|"", KEYAREA, " and loop"|" and back", " to the start"|"" = (MSG_PATROLKEYAREA, ST_BACK);
	"the "|"checkpoint "|"waypoint "|"", KEYAREA, " and reverse" = (MSG_PATROLKEYAREA, ST_REVERSE);
	"the "|"checkpoint "|"waypoint "|"", KEYAREA = (MSG_PATROLKEYAREA, 0);
} //end MTCONTEXT_PATROL

MTCONTEXT_TEAMMATE
{
	"me"|"I" = (MSG_ME, 0);
} //end MTCONTEXT_TEAMMATE

MTCONTEXT_ADDRESSEE
{
	"everyone"|"everybody" = (MSG_EVERYONE, 0);
	TEAMMATE, " and "|", "|","|" ,", MORE = (MSG_MULTIPLENAMES, 0);
	TEAMMATE = (MSG_NAME, 0);
} //end MTCONTEXT_ADDRESSEE

MTCONTEXT_REPLYCHAT
{
	"(", NETNAME, ")", PLACE, ": ", MESSAGE = (MSG_CHATTEAM, ST_TEAM);
	NETNAME, ": ", MESSAGE = (MSG_CHATALL, 0);
} //end MTCONTEXT_REPLYCHAT
