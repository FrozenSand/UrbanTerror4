//===========================================================================
//
// Name:			syn.c
// Function:		synonyms
// Programmer:		Mr Elusive
// Last update:		1999-11-20
// Tab Size:		4 (real tabs)
//
// $Archive: /baseq3/botfiles/syn.c $
// $Author: Paulj $ 
// $Revision: 40 $
// $Modtime: 11/20/99 12:19p $
// $Date: 11/20/99 4:05p $
// 
// Notes:			-
//===========================================================================

#include "game.h"
#include "syn.h"


CONTEXT_NEARBYITEM
{
	//armor
	[("Heavy Armor", 0), ("red armor", 0), ("Heavy Armour", 0), ("red armour", 0),("ra", 0)]
	[("Armor", 0), ("yellow armor", 0), ("Armour", 0), ("yellow armour", 0), ("ya", 0)]
	[("Mega Health", 0), ("mh", 0)] 
	//weapons
	[("Shotgun", 1), ("sg", 0.5), ("shot gun", 0)]
	[("Machinegun", 1), ("mg", 0), ("machine gun", 0)]
	[("Grenade Launcher", 1), ("gl", 0.1), ("GL", 0.7)]
	[("Rocket Launcher", 1), ("rl", 0.1), ("RL", 0.7)]
	[("Lightning Gun", 1), ("lightning gun", 1), ("lightning", 0.7), ("lg", 0), ("shaft", 0)]
	[("Plasma Gun", 1), ("plasma", 0.7), ("pg", 0)]
	[("Railgun", 1), ("rail", 0.5), ("rg", 0), ("rail gun", 0)]
	[("BFG10K", 1), ("bfg", 1), ("BFG", 1)]
	//powerups
	[("Quad Damage", 1), ("quad", 0.7)]
	[("Regeneration", 1), ("regen", 0.6)]
	[("Battle Suit", 1), ("bs", 0), ("b suit", 0)]
	[("Invisibility", 1), ("invis", 0)]
	//[("Invulnerability", 1), ("invincebility", 1), ("invul", 0)] //not a q3 powerup
} //end CONTEXT_NEARBYITEM

//flags
CONTEXT_CTFREDTEAM
{
	[("Red Flag", 0), ("our base", 0), ("our flag", 0), ("red base", 0), ("base", 0)]
	[("Blue Flag", 0), ("enemy base", 0), ("blue base", 0), ("enemy flag", 0)]
} //end CONTEXT_CTFREDTEAM

CONTEXT_CTFBLUETEAM
{
	[("Red Flag", 0), ("enemy flag", 0), ("red base", 0), ("enemy base", 0)]
	[("Blue Flag", 0), ("our base", 0), ("our flag", 0), ("blue base", 0), ("base", 0)]
} //end CONTEXT_CTFBLUETEAM

CONTEXT_NORMAL
{
	//contractions
	[("do not", 1), ("don't", 1), ("dont", 0)]
	[("does not", 1), ("doesn't", 1), ("doesnt", 0)]
	[("did not", 1), ("didn't", 1), ("didnt", 0)]
	[("have not", 1), ("haven't", 1), ("havent", 0)]
	[("has not", 1), ("hasn't", 1), ("hasnt", 0)]
	[("had not", 1), ("hadn't", 1), ("hadnt", 0)]
	[("will not", 1), ("won't", 1), ("wont", 0)]
	[("would not", 1), ("wouldn't", 1), ("wouldnt", 0)]
	[("should not", 1), ("shoudn't", 1), ("shoudnt", 0)]
	[("can not", 1), ("can't", 1), ("cant", 0), ("cannot", 0)]
	[("could not", 1), ("couldn't", 1), ("couldnt", 0)]
	[("is not", 1), ("isn't", 1), ("isnt", 0), ("ain't", 0.2), ("aint", 0)]
	[("must not", 1), ("mustn't", 1), ("mustnt", 0)]
	//are
	[("I am", 1), ("I'm", 1), ("Im", 0)]
	[("you are", 1), ("you're", 1), ("youre", 0)]
	[("he is", 1), ("he's", 1), ("hes", 0)]
	[("she is", 1), ("she's", 1), ("shes", 0)]
	[("it is", 1), ("it's", 1), ("its", 0)]
	[("they are", 1), ("they're", 1), ("theyre", 0)]
	[("we are", 1), ("we're", 0.7)]		//, ("were", 1) conflicts
	[("what is", 1), ("what's", 1), ("whats", 0)]
	[("that is", 1), ("that's", 1), ("thats", 0)]
	[("how is", 1), ("how's", 1), ("hows", 0)]
	[("why is", 1), ("why's", 1), ("whys", 0)]
	[("who is", 1), ("who's", 1), ("whos", 0)]
	[("here is", 1), ("here's", 1), ("heres", 0)]
	[("there is", 1), ("there's", 1), ("theres", 0)]
	[("where is", 1), ("where's", 1), ("wheres", 0)]
	//will
	[("I will", 1), ("I'll", 1)]
	[("you will", 1), ("you'll", 1)]
	[("he will", 1), ("he'll", 1)]
	[("she will", 1), ("she'll", 1)]
	[("it will", 1), ("it'll", 1)]
	[("they will", 1), ("they'll", 1), ("theyll", 0)]
	[("we will", 1), ("we'll", 1)]
	[("how will", 1), ("how'll", 1)]
	[("that will", 1), ("that'll", 1),("thatll", 0)]
	//would
	[("I would", 1), ("I'd", 1)]
	[("you would", 1), ("you'd", 1)]
	[("he would", 1), ("he'd", 1)]
	[("she would", 1), ("she'd", 1)]
	[("it would", 1), ("it'd", 1)]
	[("they would", 1), ("they'd", 1)]
	[("we would", 1), ("we'd", 1)]
	//have
	[("I have", 1), ("I've", 0), ("Ive", 0)]
	[("you have", 1), ("you've", 0), ("youve", 0)]					//conflicting with "you have" where contraction inappropriate
//	[("he has", 1), ("he's", 1)]									//conflicting with "he is"
//	[("she has", 1), ("she's", 1)]								//conflicting with "she is"
//	[("it has", 1), ("it's", 1)]									//conflicting with "it is"
	[("they have", 1), ("they've", 1), ("theyve", 0)]
	[("we have", 1), ("we've", 1), ("weve", 0)]
//	[("I had", 1), ("I'd", 1), ("Id")]							//conflicting with "I would"
//	[("you had", 1), ("you'd", 1), ("youd", 1)]				//conflicting with "you would"
//	[("he had", 1), ("he'd", 1), ("hed", 1)]					//conflicting with "he would"
//	[("she had", 1), ("she'd", 1)]								//conflicting with "she would"
//	[("it had", 1), ("it'd", 1)]									//conflicting with "it would"
//	[("we had", 1), ("we'd", 1)]									//conflicting with "we would"
	//ing chops
	[("being", 1), ("bein", 0)]
	[("going", 1), ("goin", 0)]
	[("having", 1), ("havin", 0)]
	[("doing", 1), ("doin", 0)]
	[("hanging", 1), ("hangin", 0)]
	[("living", 1), ("livin", 0)]
	//slang
	[("cool", 1), ("kool", 1), ("kwl", 1), ("kewl", 0.5)]
	[("you", 1), ("ya", 0.03), ("U", 0.01), ("y'all", 0.01), ("youse", 0), ("ye", 0)]
	[("your", 1), ("yer", 0)]
	[("out of", 1), ("outta", 0.07)]
	[("are", 1), ("R", 0.02)]
	[("why", 1), ("Y", 0.02)]
	[("people", 1), ("ppl", 0.05), ("folks", 0.5)]
	[("thanx", 0.5), ("thanks", 1), ("tx", 0), ("tnx", 0), ("thx", 0.5), ("thnx", 0.6)]
	[("this", 1), ("diz", 0.05), ("dis", 0.1)]
	[("men", 1), ("boyz", 0.3), ("guys", 0.2), ("d00dz", 0)]
	[("women", 1), ("girlz", 0.1), ("Grrrlz", 0.2)]
	[("picture", 1), ("pic", 1)]
	[("pictures", 1), ("pics", 1), ("pix", 0)]
	[("everyone", 1), ("everybody", 1), ("all y'all", 0)]
	[("see you", 1), ("cya", 0)]
	[("father", 1), ("dad", 1), ("pa", 0), ("daddy", 0.6), ("poppa", 1)]
	[("mother", 1), ("mom", 1), ("mommy", 1), ("mama", 1), ("momma", 1), ("muthah", 0)]
	[("brother", 1), ("bro", 0.2), ("bruthah", 0)]
	[("sister", 1), ("sis", 0.4), ("sistah", 0)]
	[("butt", 1), ("ass", 1), ("heinie", 0.3), ("bum", 0.4), ("rear", 0.4), ("rear end", 0.5), ("bottom", 1)]
	//
	[("going to", 1), ("gonna", 0.02)]
	[("got to", 1), ("gotta", 0.05)]
	[("want to", 1), ("wanna", 0.05)]
	//
	[("waypoint", 1), ("way-point", 1), ("wp", 1)]
	[("checkpoint", 1), ("check-point", 1), ("cp", 1)]
	//numbers
	[("0", 1), ("zero", 1)]
	[("1", 1), ("one", 1)]
	[("2", 1), ("two", 1)]
	[("3", 1), ("three", 1)]
	[("4", 1), ("four", 1)]
	[("5", 1), ("five", 1)]
	[("6", 1), ("six", 1)]
	[("7", 1), ("seven", 1)]
	[("8", 1), ("eight", 1)]
	[("9", 1), ("nine", 1)]
	[("10", 1), ("ten", 1)]
	[("11", 1), ("eleven", 1)]
	[("12", 1), ("twelve", 1)]
	[("13", 1), ("thirteen", 1)]
	[("14", 1), ("fourteen", 1)]
	[("15", 1), ("fifteen", 1)]
	[("16", 1), ("sixteen", 1)]
	[("17", 1), ("seventeen", 1)]
	[("18", 1), ("eighteen", 1)]
	[("19", 1), ("nineteen", 1)]
	[("20", 1), ("twenty", 1)]
	[("30", 1), ("thirty", 1)]
	[("40", 1), ("fourty", 1)]
	[("50", 1), ("fifty", 1)]
	[("60", 1), ("sixty", 1)]
	[("70", 1), ("seventy", 1)]
	[("80", 1), ("eighty", 1)]
	[("90", 1), ("ninety", 1)]
	[("100", 1), ("a hundred", 1), ("one hundred", 1)]
	[("1000", 1), ("a thousand", 1), ("one thousand", 1)]
	[("100000", 1), ("a hundred thousand", 1), ("one hundred thousand", 1)]
	[("1000000", 1), ("a million", 1), ("one million", 1)]
/*
	[("good game", 1), ("gg", 1)]
*/
} //end CONTEX_NORMAL

CONTEXT_REPLY
{
	[("that I", 0), ("that you", 0)]
	[("that you", 0), ("that I", 0)]
	[("you", 0), ("I", 0)]
	[("my", 0), ("your", 0)]
	[("your", 0), ("my", 0)]
	[("you", 0), ("me", 0)]
	[("me", 0), ("you", 0)]
	[("mine", 0), ("yours", 0)]
	[("yours", 0), ("mine", 0)]
	[("am", 0), ("are", 0)]
	[("are", 0), ("am", 0)]
	[("yourself", 0), ("myself", 0)]
	[("myself", 0), ("yourself", 0)]
} //end CONTEXT_REPLY

CONTEXT_NAMES
{
	[("Xaero", 1),		("Honored Master", 0.3), ("Number 1", 0.1), ("Mr. X", 0.4), ("Numero Uno", 0.3), ("Baldo", 0.01), ("baldy", 0)]
	[("Bones", 1),		("Skeleton", 0.5), ("Bonesy", 0.9), ("skullboy", 0.2), ("Stiffy", 0.4), ("Boner", 0.1)]
	[("Crash", 1),		("Doom Girl", 0.3), ("Doom Lady", 0.5), ("Doomette", 0.3), ("Shiny-butt", 0.4)]
	[("Orbb", 1),		("Eyeball", 0.7), ("Cyberclops", 0.6), ("Ol' One Eye", 0.5), ("One-eyed Freak", 0.4)]
	[("Slash", 1),		("Blade Lady", 0.5), ("Roller Queen", 0.6), ("Cutie Honey", 0.3), ("Roller Girl", 0.55), ("Pipsqueak", 0.2)]
	[("Sorlag", 1),		("Lizard Breath", 0.4), ("Sorg Scum", 0.4), ("Butt-muncher", 0.2), ("Foul-mouth", 0.2), ("S-s-s-snake", 0.5)]
	[("Major", 1),		("Cyclops", 0.2), ("Boss Lady", 0.6), ("Ms. Major, Sir", 0.5), ("Major Witch", 0.1), ("Iron-thighs", 0.15)]
	[("Uriel", 1),		("Old Gargoyle", 0.3), ("Gargoyle-breath", 0.2), ("Lizard-face", 0.15), ("Rag-head", 0.1)]
	[("Ranger", 1),		("Old Timer", 0.3), ("Q Dude", 0.7), ("Quaker", 0.4), ("Frag-licker", 0.2)]
	[("Keel", 1),		("Keel-hauler", 0.3), ("Tin Man", 0.6), ("Metal-head", 0.5), ("Keely", 0.2)]
	[("Razor", 1),		("el Jefe", 0.3), ("Jumping Boy", 0.3), ("Road Warrior", 0.4), ("Tough-guy", 0.5), ("Goggles", 0.2)]
	[("Visor", 1),		("Visor", 1), ("Voice-box", 0.3), ("Daisy-picker", 0.4), ("Clone-head", 0.6)]
	[("Hunter", 1),		("Ice Queen", 0.7), ("Princess", 0.3), ("Witch", 0.1), ("Bitch", 0), ("Feather-head", 0.6), ("She-male", 0.02), ("Beeyatch", 0), ("~Sistah Chicken Hat", 0.01)]
	[("Tankjr", 1),		("Ironsides", 0.6), ("Cyborg scum", 0.9), ("Monstrosity", 0.2), ("Tread-head", 0.2), ("Gear-face", 0.4), ("Stroggy-boy", 0.4)]
	[("Patriot", 1),	("Blood Sucker", 0.5), ("Flaghead", 0.9), ("Leech", 0.2)]
	[("Biker", 1),		("Lard Belly", 0.7), ("Fat-man", 0.5), ("Curly", 0.6)]
	[("Lucy", 1),		("Lard Butt", 0.7), ("Pattie-Fattie", 0.2)]
	[("Klesk", 1),		("Klesk", 1), ("Bug", 0.6), ("Scum-sucker", 0.5), ("corpse-gobbler", 0.2)]
	[("Doom", 1),		("Mad Man", 0.4), ("Loony", 0.3), ("Schitzo", 0.35)]
	[("Mynx", 1),		("Hotstuff", 0.2), ("Hardcore", 0.04), ("Hottie", 0.03), ("Sexy", 0.1), ("Wild Vixen", 0.05), ("Mynxie", 0.6)]
	[("Gorre", 1),		("Jerk", 0.6), ("Al", 0.5), ("Flamer", 0.7), ("Pansy", 0.3), ("Wuss", 0.1)]
	[("Angel", 1),		("Iron Lady", 0.5), ("Avenging Angel", 0.6), ("Steel Witch", 0.8)]
	[("Anarki", 1),		("Cyber Surfer", 0.4), ("Doood", 0.3), ("Cyber-Scarecrow", 0.6), ("Freak-boy", 0.4), ("Mumbles", 0.6), ("PAB", 0.1)]
	[("Grunt", 1),		("Marine", 0.9), ("Leatherneck", 0.5), ("Pretty boy", 0.4), ("Oz-man", 0.1)]
	[("Bitterman", 1),	("Cowboy", 0.4), ("Squidz", 0.01), ("Bitter Guy", 0.6), ("Squid head", 0.2), ("Squidly", 0.3), ("Fish-face", 0.5), ("Kev", 0.01)]
	[("Daemia", 1),		("Chili Pepper", 0.5), ("Chiquita", 0.2), ("Wench", 0.2), ("Dammitia", 0.1)]
	[("Hossman", 1),	("Guido", 0.4), ("Big Fella", 0.8), ("Big Guy", 0.4), ("Mikey", 0.2), ("Chaperone", 0.01)]
	[("Sarge", 1),		("Old Man", 0.5), ("Drill-master", 0.1), ("Hero", 0.6), ("Jar-head", 0.2)]
	[("Stripe", 1),		("Stripes", 0.5), ("Stud-muffin", 0.4), ("Stripey", 0.6), ("War-Hero", 0.3)]
	[("Wrack", 1),		("Wrack 'n Ruin", 0.2), ("hard-ass", 0.3), ("hard-guy", 0.6)]
	[("Phobos", 1),		("Colonel", 0.8), ("Colonel, Sir", 0.1), ("Feeb-o's", 0.2), ("Colonel Feeble", 0.1)]
	[("Cadavre", 1),	("Zombie Bait", 0.6), ("Number 2", 0.2), ("Maggot Bait", 0.7), ("Meat-wagon", 0.5), ("Laughing-boy", 0.6)]
} //end CONTEXT_NAMES
