//===========================================================================

//

// name:			rnd.c

// function:		random strings

// programmer:		MrElusive (MrElusive@idsoftware.com)

// Author:			Anonymous, Steve Winter and Paul Jaquays

// editor:			Paul Jaquays, Steve Winter & Seven Swords

// last update:		1999-11-02

// tab size:		4 (real tabs)

// notes:			-

//===========================================================================



#include "game.h"



//===========================================================================

//		GROUP A RANDOM MESSAGES ,,, orignal Initial Chat messages

//		The messages in this sub-grouping are intended as responses to specific

//		game events.  To avoid possible recursion situations, they should not

//		call each other, but instead, should call plug-in words/phrases from

//		the GROUP B messages.

//===========================================================================


DEATH_BFG0 = {

	"BFG-whore!";

	"Use a skill weapon next time.";

	"You want fireworks? I'll give you friggin' fireworks!";

}

DEATH_INSULT0 = {

	"That cheap frag is gonna cost you big time, ", 0, "!";

	"No good, yellow-bellied, weasel-faced ^1CAMPER!";

	"I'm keeping track of these cheap shots for later.";

	"Blast! Shot in the back by ", 0, " again!";

	0, ", your Judgement Day is on its way!";



}



DEATH_INSULT1 = {

	"I nominate ", 0, " for the 'Happy Camper Hall of Fame' award.";

	"I've got no use for snipers, assassins and campers.";

	"Well lookit that ...heh, heh. My safety was on!";

	"You're allowed ~one lucky shot a day, ", 0, ".";

	"Grrrrrr!";

}



DEATH_INSULT2 = {

	"~Three strikes and you're outta here, ", fighter, ".";

	"Stinkin', ", fighter, "! What kind of a shot was that?";

	"I didn't enjoy that.";

	"Blast!";

	"I'm taking off the kid gloves now, ", 0, "!";

	"That was your last free shot, ", 0, "!";

	"=P";

	"You better have some tricks you haven't shown me yet, ", 0, ".";

}



DEATH_INSULT3 = {

	"Warm-up's over. Say your prayers, ", 0, "!";

	"That's it. It's not your birthday anymore.";

	"Now the match gets serious.";

	"Enjoy that ~one. Your luck is about to run out, ", 0, ".";

	"I give as I get, ", fighter, " ... and more.";

}

DEATH_INSULT4 = {

	"A fluke. Had to be. Won't happen again.";

	"You just try that again, ", 0, ".";

	"Accidents happen.";

	"I'm not impressed, ", 0, ".";

	"I got ~one just like that for you, ", 0, ".";

}



DEATH_INSULT5 = {

	"Full on LUCK!";

	"Hah! That only makes me stronger, ", 0, "!";

	"You won't get to keep that point for long.";

	"You must be hurting after that, ", 0, "!";

	"They're gonna be picking up pieces of you in the next county.";

	"Ready or not, here I come back at ya, ", 0, ".";

	"I'm learning your tricks, ", 0, ".";

	"Be afraid, ", 0, ". Be very afraid.";

}



DEATH_INSULT6 = {

	"Wow, ", 0, ", did your gun misfire or something?";

	"My dog is named for you, ", 0, ". 'Frag Head' has a nice ring to it.";

	"So when did ", 0, " stop cowering and start shooting?";

	"Okay, ", 0, ", I have your punk-ass figured.";

}



DEATH_FEM_INSULT = {

	0,", you are gonna be so dead now.";

	"Drat! There goes ~three hours at the salon down the drain.";

	"I'm sorry. I forgot to mention that I hold grudges.";

	"That's it, ", 0, ". We are just so over now.";

	"Are you wearing your rabbit's foot AND your lucky underwear, ", 0, "?";

}



DEATH_FEM_INSULT1 = {

	"Mmmmmm, you get a lot of mileage out of your tiny gun.";

	"GREAT! Now my boobs need another implant.";

	"I don't do the dance with losers like you, ", 0, ".";

	"HA! You can't really kill me, ", 0,". Not permanently.";

}



DEATH_FEM_INSULT2 = {

	"Amazing what ", 0, " will do to impress a girl";

	"Why must we always let the geek squad play?";

	"Let me guess, first time for you ", 0, "?";

	"So is that IT?";

}



DEATH_LAVA0 = {

	"How do they keep this stuff from setting up?";

	"Never a battle suit when you need ~one.";

	"My feet were cold.";

}



DEATH_LAVA1 = {

	"That's like Africa hot.";

	"I meant to do that.";

	"Crud.";

}



DEATH_LAVA2 = {

	"I hate that burning sensation";

	"Never a ~cigar when you need one";

	"Ouch, ouch, hot ... hot...";

}



DEATH_SLIME0 = {

	"What a world ... what a world.";

	"Ow.";

	"Mmmmmmm. Toxic.";

}



DEATH_SLIME1 = {

	"Ahh ... lawyer hell!";

	"I think I found ", 0, "'s ancestors.";

	"Who spilled the yogurt?";

}



DEATH_DROWN0 = {

	"* Glub *";

	"So, I failed Remedial Swimming 101.";

	"C'mon in! The water's fine!";

}



DEATH_DROWN1 = {

	"Next time, women and children first.";

	"Everybody, out of the pool.";

	"I'm sleeping with the fishes now.";

}



DEATH_DROWN2 = {

	"I'm just looking for mermaids.";

	"Instant death, just add water.";

	"Now that's a water slide!";

}



D_PRAISE = {

	"Yeah, Baby, YEAH!";

	"You win the prize for that ~one.";

	"You go, ", friendname, "!";

	"Rockin' shot, ", 0, ". Just don't do it again.";

	"That ~one almost blew me to ", place, "!";

}



D_PRAISE1 = {

	":)";

	"Nice ~one, ", 0, "!";

	"Figures. Fragged on the day I don't wear clean underwear.";

	"OK ", 0, " let's dance ~one more time!";

	"Let's dance that tune again ... but this time I lead.";

}



D_PRAISE2 = {

	"Nice! How you'd do that ", 0, "?";

	"Impressive!";

	"Excellent!!";

	"That rocked ", 0, "!";

	"I never saw that ~one coming ", 0, ".";

	"Nice frag.";

}



D_PRAISE3 = {

	"Not gonna let you do that again, ", 0, ". ", negative;

	"Smooo-oooth";

	"Rockin' good shot there.";

	"Nice style!";

	"8-D";

	"Stylin'";

}



D_PRAISE4 = {

	"You aren't making this easy for me ", 0, ".";

	"... and the nominee for best shot is ", 0, ".";

	"Very Cool";

	"Was that a hot shot? ", affirmative;

	"Nice shootin' ", friendname, "!";

	"Nice shootin' ", 0, "!";

}



D_PRAISE5 = {

	"You had me dead to rights with that ~one ", 0, ".";

	"Magnefique, ", friendname, "!";

	"Some mighty fine shooting there, ", friendname, ".";

	"Send me the instruction book for that move!";

}



D_PRAISE6 = {

	"I'd take a bow but I can't find my legs.";

	"Looks like all the legends about ", 0, " are true.";

	"That was bellisimo, baby!"; 

	"They don't come much better than that.";

}



LEVEL_END0 = {

	"gg";

	"Quite the challenge.";

	"This will not go unavenged.";

	"Good match ... better if I win.";

	

}



LEVEL_END1 = {

	"gg";

	"Bunch of losers.";

	"I'm definitely out of my league here.";

	"Figures. 'Mr. Camper' on top.";

	"Figures. ", 2, " the camper is on the top.";

}



LEVEL_END2 = {

	"gg";

	"Definitely fun ... let's do it again sometime.";

	"hehehe";

	"Very challenging.";

	"Whew. Let me catch my breath here.";

}



LEVEL_END3 = {

	"gg";

	"That was the biggest waste of time ever.";

	"I really enjoyed that, except for ", 0, ".";

	"Getting out of here while I still can.";

	"There's only winning and losing. Nothing in between.";

}



LEVEL_END4 = {

	"gg";

	"This has been truly tragic.";

	"It saddens me to see tactics brought to such a low estate.";

	"I will accept this as yet another learning experience.";

}



GOODBYE = {

	"Hasta la vista, ", friendname, "s.";

	"Oops. No time to chat. Gotta run.";

	"I'm so outta here.";

	"Later folks";

}



GOODBYE1 = {

	"Exit, stage left.";

	"Beam me up scottie.";

	"I'm outta here.";

}

	

GOODBYE2 = {

	"Goodbye";

	"I gotta wash my hair.";

	"It's been real.";

	"I got an appointment with my ", random_counselor, ".";

}



GOODBYE3 = {

	"Sayonara mutha's";

	"Anyone for getting lunch? ", food, " sounds good to me!";

	"This is too much for me."

	"Parting tis sweet sorrow ...";

}

	

GOODBYE4 = {

	"ttfn";

	"C u l8er";

	"Gotta fly.";

	"It's happy hour.";

}



GOODBYE5 = {

	"cya";

	"Will you look at the time?!";

	0, " is outta here.";

}



GOODBYE6 = {

	"Gotta fly";

	"Miss ya!... Mean it! ... Not!";

	"Fairwell my friends.";

	"May you all die painfully.";

}



HELLO = {

	"Run for cover ", fighter, "s! I'm back!";

	"Hi!";

	"Oh look, ", 1, "'s back for another beating.";

	"Hello";

}



HELLO1 = {

	"Hey there, ho there, hi there!";

	"I'll bet you missed me.";

	"G'day mates. Time to toss you on the barbie.";

	"Yo! ", 0, " is in the house!";

	"wassup!";

}



HELLO2 = {

	"wassup!";

	"Hey there!";

	"I've got a grudge to settle with ", 1, ".";

	"H'lo";

	"I got me some primal urges to work here.";

}



HELLO3 = {

	"Howdy!";

	"This is GREAT!! I OWN ", 4, "!";

	"Who's going to be the first to die?";

	"John C said to tell you guys 'hi.'";

}



HELLO4 = {

	"Konnichiwa";

	"No challenge here today.";

	"Run in fear, ", 0, " is here!";

	"Hello!";

	"Time to party down!";

}



HELLO5 = {

	"Awright!! I OWN this arena!";

	"Crap. Losers in here again!";

	"Yessss! New victims everywhere!";

	"I see ", 1, " just doesn't know when to quit.";

	"I'm back!";

}



HELLO6 = {

	"Salutations, ", fighter;

	"I'm taking volunteers for target practice.";

	"It's showtime!";

	"Back for more, eh ", 1, "?";

	"Oh yeah! I'm so ready for this.";

}



HELLO7 = {

	"Let's get it ON!";

	"Great! Nothing but easy frags here today.";

	"Hello. This is the voice of death speaking.";

	"Let's do it!";

	"Let's frag the losers and make 'em cry!";



}



HELLO8 = {

	"Let's get rollin'!";

	"I see ", 1, " has healed from the last beating I gave out.";

	"I'm just thrilled you could make here today, ", 1, ".";

	"It's time for some fireworks.";

}



HELLO9 = {

	"Heh. ", 4, " is ~one of my favorite places to be.";

	"Today, I am death incarnate! Fear the name of ", 0, "!";

	"Yo, ", 1, ", I've got a rocket with your name on it!";

	0, " is here. There will be no survivors!";

}



HELLO10 = {

	"Hey ", 1, " your mommy said for you to come home right now.";

	0, " rules here. You will respect my authority!";

	"Hey, we're in ", 4, "! I thought we trashed this place last time.";

	4, " again? I'm tired of this arena.";

}



HELLO11 = {

	"Yo! I'm back in da House!";

	"WOW! Is the circus in town or something?";

	"So, ", 1, " we meet again.";

}



HIT_NOKILL0 = {

	"I was robbed! That should've fragged you ", 0, "!";

	"What? You're supposed to be dead ", 0, "!";

	"You wearing iron underpants there, ", 0, "?";

}



HIT_NOKILL1 = {

	"Next time ", 0, " ... you won't be so lucky.";

	"Run for the health little rabbit!";

	"That was just a ranging shot, ", 0, ".";

	"Use that medkit now, or the next shot's for the money!";

}



KILL_INSULT0 = {

	"C'mon ", 0, "! Try to give me some challenge here.";

	"Bag 'em, tag 'em and drag 'em!";

	"You'e slowing down, ", 0, ". That was far too easy.";

}



KILL_INSULT1 = {

	"Nice skull you had there ", 0, ".";

	0, ", maybe you ought to take up chess.";

	"Do you to practice to be that bad, ", 0, "?";

	"I'm so good I even impress me!";

	"Gotta love this new 'geek-seeking' ammo!";

}



KILL_INSULT2 = {

	"You keep this up and I'm gonna run out of insults.";

	"Like shootin' fish in a barrel.";

	"Bah! Too easy!";

	"You can't win a match with your thumb in your mouth, ", 0, "!";

	"You gonna be a threat anytime soon, ", 0, "?";

	"This is too easy.";

	"Like taking candy from a baby.";

	"Are you some kind of pacifist, ", 0, ".";

	"That's what a steady diet of ", food, " will do to you.";

}



KILL_INSULT3 = {

	"What is this, some kind of game to you ", 0, "?";

	"There's a lot more of the same where that came from, ", 0, ".";

	"How did you like that ", 0, "?";

	"There oughtta be a law against me.";

}



KILL_INSULT4 = {

	"I hope you're not the best there is, ", 0, ".";

	"They got stuff that'll remove those stains.";

	"How about giving me a little challenge here, ", 0, "?";

	"Flat-lined!";

}



KILL_INSULT5 = {

	"Too bad there's no medals for 'best target', ", 0, ".";

	"Let's see ... you were 'on the phone', right?";

	"Hey everyone, it's open season on ", 0, ".";

	"Bwahahaha!";

}



KILL_INSULT6 = {

	"That's ~one more lesson in humility for you, ", 0, ".";

	"You can call me the steam-roller, because I just flattened you good.";

	0, " is ^1TERMINATED!";

	"Oooo ... such language from ~one so lame.";

}



KILL_INSULT7 = {

	"Ka-POW!";

	"Atomic powered loser remover at your service.";

	"Now that ~one must have hurt a little.";

}



KILL_INSULT8 = {

	

	"Pathetic. Truly pathetic.";

	"~One unpleasant learning experience, sunny side up!";

	"And I'm still just warming up.";

	"Is anybody taking notes here? That was a classic frag.";

}



KILL_INSULT9 = {

	"Somebody wanna clean this mess up?";

	"Why don't you just give up ", 0, "?";

	"I'm filing a protest. I deserve better opponents than this.";

	"I'm far too good to be fighting you.";

}



KILL_INSULT10 = {

	"Get down and stay down!";

	"Surrender now while you still can.";

	"Can't you at least make this interesting, ", 0, "?";

}



KILL_INSULT11 = {

	"There's no excuse for that kind of sloppy behaviour, ", 0, ".";

	"Mess with the best, ",0, "; die like the rest!";

	"That shot belonged in a museum.";

	"You do a great 'roadkill' impression, ", 0, ".";

}



KILL_INSULT12 = {

	"better run ", 0, " ... I'm catching my stride here.";

	"Hey ", 0, " ... ya shoulda zigged when ya zagged there.";

	"Hey nice catch ", 0, "!";

}



KILL_INSULT13 = {

	"Thought so. You got nothing to back up the smack talk.";

	"You fought the law and the law won."

	"Just call me 'City Hall.'";

	"Oh, Yesssssss!";

	

}



KILL_INSULT14 = {

	"I thought so. You WERE full of hot air ", 0, ".";

	"That should take you down a couple hat sizes ", 0, ".";

	"Thought I should leave you with something to remember me by.";

	"OK. I'll stop being so easy on you.";

}



KILL_INSULT15 = {

	"My how the mighty have fallen. And fallen. And fallen.";

	"I think this is your exit, ", 0, ".";

	"Clean up your mess before you go ", 0, ".";

	"Too easy. I think I'll switch to the gauntlet.";

}



KILL_INSULT16 = {

	"BINGO!";

	"Left kidney in the side pocket.";

	"Ugh. You leave quite the mess, ", 0, ".";

	"Mind if I keep the skull? I'm making a chess set.";

}



KILL_INSULT17 = {

	"I'm collecting ears, but I got way too many of yours ", 0, ".";

	"That was beautiful, like art.";

	"Whack 'em and Stack 'em!";

	"Respect THAT!";

}



KILL_INSULT18 = {

	"I'm simply unstoppable.";

	"Don't mind me. I'm just takin' out the trash.";

	"Bang, yer dead!";

	"Hey ", 0, ", you make a great throw rug.";

}



KILL_INSULT19 = {

	"Wahooootie!";

	"That shot rocked!";

	"I think it's time you evolved into something more talented, ", 0, ".";

	"M-m-m-Momma!";

}



KILL_INSULT20 = {

	"Happy, happy, joy, joy!";

	"We aim to please ... ourselves.";

	"And another species of loser marches into extinction.";

}



KILL_INSULT21 = {

	"And another ~one's gone. Another ~one bites the dust.";

	"Here lies, ", 0, ". Another victim of pointless ambition.";

	"Skill first, ", 0, "; victory later.";

	"It's always fun fighting with ", 0, ", 'cause I get to win.";

}



KILL_INSULT22 = {

	"Let's hurry this up, I'm running out of good lines.";

	"Say good night, ", 0, ".";

	"Happiness is a warm ", weapon, ".";

}



KILL_INSULT23 = {

	"I am so :)";

	"So many ", fighter, "s, not enough ammo.";

	"My mama taught me that move ... just before I fragged her.";

	"I'm gonna keep doing this til you get it right, ", 0, ".";

}



KILL_INSULT24 = {

	"Grenade Jump that ", 0, "!";

	"I need more targets.";

	"Are you normally this bad ", 0, "?";

	"Groovy.";

	"You need to spend some more quality time with Crash, ", 0, ".";

}



KILL_INSULT25 = {

	"HAH!";

	"Maybe next time I just use my bare hands.";

	"I'm hot and you're not!";

	"I've got my groove back.";

	0, "'s Arena career looks to be a short ~one.";

	"You weren't hoping to win today, were you, ", 0, "?";

	"You were hoping I'd go easy on you, right, ", 0, "?";

	"Well ", 0, ", I see you've met my boomstick.";

}



KILL_INSULT26 = {

	"I rock!";

	"You suck!";

	"What was that? You can't even die right!";

	"I give lessons. I think you need 'em.";

}



KILL_INSULT27 = {

	"The TimCo Fragamatic! It slices! It dices!";

	"Can I get a doggy bag for that?";

	"Don't point that gun at me ", 0, ", unless you know how to use it.";

}



KILL_INSULT28 = {

	"SMACK!!";

	"POW!";

	"You're right. This is all an evil conspiracy.";

	"Bring 'em on, I'm hot today!!";

}



KILL_INSULT29 = {

	"Next time, I use live ammo.";

	"Another ~one bites the dust, hey, hey, hey!";

	"And that, settles that.";

}



KILL_INSULT30 = {

	"Mmmmmmm. Revenge is soooooo sweet!";

	"You ain't near fast enough, ", friendname, ".";

	"I hate you ", 0, " ... and this time I mean it";

}



KILL_INSULT31 = {

	"Man, there isn't enough left of ", 0, " to make gravy.";

	"Isn't it your bedtime ", 0, "?";

	"Hey, ", 0, " does your mommy know you're here?";

}



KILL_INSULT32 = {

	"I'm new and improved. Can't you tell?";

	"I don't think I left enough of you to respawn.";

	"Lesson ~number ~one: Shoot anything that moves.";

}



KILL_INSULT33 = {

	"~Two more and I win a free vacation!";

	"Mmmmmm. Looks yummy.";

	0, ", you have the right to remain dead.";

}



KILL_INSULT34 = {

	"Fine ... just be dead then.";

	"Cooperate and we'll all be done much sooner.";

	"Nice catch, ", 0, "!";

	"Give til it hurts ", friendname, "!";

}



KILL_INSULT35 = {

	"What we have here, is a failure to communicate.";

	"Next time, I'll do it blindfolded and backwards.";

	"I'm impressed. That's a lot side meat you had there.";

	"Ooops. You lose again.";

}



KILL_INSULT36 = {

	"Ready to be ground into hamburger again ", 0, "?";

	"Hurry up and respawn. I need another cheap frag.";

	"I'm like a hot knife and you're butter.";

	"That was quick.";

	"Premature Termination AGAIN?";

}



KILL_INSULT37 = {

	"Aww did I stain your shirt, ", 0, "?";

	"Well, ", 0, ". Think of this as a really fast diet";

	0, " is now a pizza!";

	"One move and ", 0," is dead, ... oopsie!";

}



KILL_INSULT38 = {

	"Boom Boom Boom, its time for a broom";

	"A couple of shots and you just fall to pieces ", 0, ".";

	"Hahaha! Stop, ", 0, ", you're killing me. No, wait! I'm killing you!";

}



KILL_INSULT39  = {

	"So you're the best, ", 0, ". Hmmmm. What planet were you from again?";

	"You look good on the ceiling ", 0, " ... and on the floor, and the wall ...";

}



KILL_EXTREME_INSULT = {

	"Maybe you're just in the wrong line of business.";

	"I'm spittin' on your corpse and dancin' on your grave ", 0, "!"; 

	"Stupid, stupid, stupid.";

}



MISC0 = {

	"Anyone seen Bitterman around here?";

	"I hate L33T Sp34K";

	"Aw crap. Not brown AGAIN.";

}



MISC1 = {

	"Anyone found the dust puppy yet?";

	"Gimme some action!";

	"No challenge here today!";

}



MISC2 = {

	"Wahooooooooo!!!";

	"I ain't afraid of anyone here.";

	"Can we wrap this up soon? I need my beauty sleep.";

}



MISC3 = {

	"You are all just so dead!";

	"Go home and play with your dollies, ", 0, " ... or are they too scary?";

	"I've had it for today";

}



MISC4 = {

	"Killme. Killme now!";

	"Cowabunga!!";

	"*[snicker]*";

	"Hey ", 1, ". This blood smear looks just like you.";

}



MISC5 = {

	"Anybody out there?";

	"I watched your last match, ", 0, ", no threat there.";

	"Somebody got a match? I can't see.";

}



MISC6 = {

	"Hey, ", 0, ", I think I hear your mommy calling.";

	"Ow ... I bumped my toe on something. Oh, it was your head.";

	"Warriors, come out and play!!";

}



MISC7 = {

	"Phooey. I'm lost again.";

	"Hey. Truce. Let's all team up go after the Arena Masters.";

	"I can smell fear ... and frankly you stink right now.";

}



MISC8 = {

	"Where's all the lava? I thought all these arenas had it.";

	"Where oh where has my little dog gone ... ?";

	"Who wants to be a hero?";

}



MISC9 = {

	"I am the rocket lord and I'm giving out samples.";

	"Who dies first?";

	"Am I a god? You even have to ask?";

	"I'm surrounded by stinking ", fighter, "s!";

}



MISC10 = {

	"I know where all the hiding places are.";

	"So, are you hiding, camping, or just running away?";

	"Face to face, like true warriors.";

}



MISC11 = {

	"There is no honor or glory in camping. Unless I'm doing it.";

	"Mr. Elusive. Paging Mr. Elusive. Pick up the white courtesy phone.";

	"I'm confused. Do I have a kick the idiot sign on my back?";

	0, " + ", 5, "= disaster!";

}



MISC12 = {

	"Where are you hiding little rabbit?";

	"You know you are just delaying the inevitable ", 0, ".";

	"You can run, but thre is no place you can hide.";

}



MISC13 = {

	"Use it or lose it baby.";

	"Hey any of you ", fighter, "s got a map for ", 4, "?";

	"Holy Crud. Where did that come from?";

	"You're a master of disguise ", 1, ". I mistook you for someone dangerous.";

}



MISC14 = {

	"Let's agree right now, ", 0, ". I'm the winner and you're not.";

	"Let's agree right now, you ", fighter, "s. I'm the winner and you're not.";

	"When you pull out the pin, Mr. Grenade is no longer your friend.";

	"Anyone seen my other leg?";

}



MISC15 = {

	"I've got you ", fighter, "s surrounded.";

	"Hot spit! I own this arena!";

	"Oooooooo. Now I am so scared.";

}



MISC16 = {

	"Ahh, No one told me it was an ugly party!";

	"I've got a prize for the first ~one who finds me!";

	0, "Needs an ugly slap!";

}



GUYTALK = {

	"*[flex]* Chicks really go for the ripped muscles.";

	"Oh yeah. That's the way I like it, Baby!";

	"I'm just too ~sexy for my own good.";

}



GUYTALK2 = {

	"All you chicks keep begging for more";

	"Did you see the BFG on that ~one?!";

	"I'm not the guy you want to bring home to Mommy.";

}



PRAISE = {

	"Next time, things will not go so easy for you ", 0, ".";

	"I think a retreat is in order on my part ...";

	"Not half bad, ", 0, " Not half bad.";

}



PRAISE1 = {

	"A solid hit ", 0, "!";

	"Definitely ~one for the record books, ", 0, "!";

	"Nice. Really nice.";

}



PRAISE2 = {

	"Die with a smile ", 0, "!";

	"You can't win 'em all, ", 0, " ... unless you're me.";

	"You need eyes in the back of your head, ", 0, ".";

}



PRAISE3 = {

	"Some fine work there!";

	"Cool. Show me how you did that ", 0, ".";

	"Owww. Way to go ", 0, " That definitely hurt.";

}



PRAISE4 = {

	"You really die with class, ", 0, ".";

	"You made me work hard for that ~one ", 0, "!";

	"Almost, but not quite enough that time, ", 0, ".";

}



PRAISE5 = {

	"I'll knock back a cold ~one for ya ", 0, "!";

	"That ~one could have gone either way!";

	"Heh Heh, you remind me of my younger self, ", 0, ".";

}



LEVEL_START0 = {

	"Ahhhh! I OWN this arena.";

	"Oh good. I always win here.";

	"Uggh. Why is it always THIS arena?";

}



LEVEL_START1 = {

	"Raise the curtains and start the band! It's SHOWTIME!";

	"Oh yeah! I smell victory already.";

	"Gonna rock around the clock tonight!";

	"It's party time!";

	"Everybody out of the pool! I'm swimming with the sharks tonight.";

}



LEVEL_START2 = {

	"Come let us frag!";

	"I am so ready for this.";

	"Is everybody ready for some serious fragging?!";

	"Time to settle some scores!!";

}



LEVEL_START3 = {

	"It's time for 'Bowling for Morons'";

	"I'm like a kid in a candy store!";

	"Guess its time to mow the grass.";

	"Let the tears begin!";

}



TAUNT = {

	"Chew on this!";

	"You can eat my socks.";

	"pineapple salad for everyone.";

	"Want some? Come and get it!";

}



TAUNT1 = {

	"You can eat my ... dust.";

	"Hey, catch this.";

	"Go cry to your mommy.";

}



TAUNT2 = {

	"Fear this!";

	"Lemme at ya";

	"Kissy. Kissy.";

}



TAUNT3 = {

	"Come and get some ", 0, ".";

	"Hey dummy, the action's over here.";

	"Say cheese!";

}



TAUNT4 = {

	"When I'm done with you, ", 0, " there won't be enough left to spread on a cracker.";

	"You want praise ", 0, "?  Praise this!";

	"Run fool! RUN!";

}



TAUNT5 = {

	"Burn baby, burn";

	0, ", is that a mask or are you just naturally ugly?";

	"What I have is skill. What you have, ", 0, ", is luck.";

}



TAUNT6 = {

	"I think you're the red-shirt here today, ", 0, ".";

	"I'm the best and you are the rest.";

	"Do your best, loser.";

}



TAUNT7 = {

	"I just punched a hole in your luck ", 0, ", and it's all run out.";

	"You call this excitement? Not hardly.";

	0, ", you are hardly even target practice today.";

}



TAUNT8 = {

	"C'mon ", fighter, ", show me what you got.";

	"You can all go howl!";

	"Whatever.";

}



TAUNT9 = {

	"**[Sniff Sniff]** smells like ", 0, " is runnin' scared again.";

	"Oh stop whining, ", 0, ".";

	"Hey Zippy I'm over here!";

}



TAUNT_FEM = {

	0, ", I feel your pain ... and I'm getting darn tired of it.";

	"I am nobody's bee-yatch.";

	"Men are such babies.";

}

		

TAUNT_FEM1 = {

	"Trick or Treat. Hmmmm. Nothing left but tricks.";

	"Pigs.";

	"I am feeling so nasty right now.";

}

		

TAUNT_FEM2 = {

	"I think someone needs to have the air let out of him.";

	"The difference is that I look good doing this.";

	"You ought to let your mommy dress you ", 0, ".";

	0, ", you can kiss my ... ", weapon, ".";

}

		

TAUNT_FEM3 = {

	"The lips says 'no' ... but my ", weapon, " says 'Hell NO.'";

	"I don't have to pad it to flaunt it.";

	"Oh ... that WAS a rocket launcher in your pocket.";

}

		

TAUNT_FEM4 = {

	"Ooooooo. Designer combat boots ", 0, ". How trendy.";

	"When was the last time you even saw a REAL woman?";

	"You know what they say about a man with a small gun?";

}

		

TAUNT_FEM5 = {

	"Is that the best you've got to offer?";

	"Size does matter ", 0, ". Who told you it didn't?";

	0, " is REALLY starting to piss me off.";

}

		

TAUNT_FEM6 = {

	"Don't call me 'girl.' I am nobody's 'girl.'";

	"A ", weapon, " is a grrrl's best friend!";

	"Chicks rule. Loozerz drool.";

	"Mmmmmmmm...baby!";

}



TAUNT_FEM7 = {

	"I don't date losers ... I frag them.";

	"So ", 0, " show me what you think you got.";

	"What a cute outfit ", 0, ". Did you dress up just for me?";

}



TAUNT_FEM8 = {

	"It's time to stop letting Mommy dress you.";

	"If you stare less you may get a shot off.";

	"Hell Yes, I faked it.";

}



TELEFRAGGED0 = {

	"Slicker'n snot!";

	"Whack! Pay attention ", 0, ". That's how we do it downtown.";

	"Ewwww. Now I've got ", 0, "'s gick all over me.";

}



TELEFRAGGED1 = {

	"Awww. Did it that hurt poor little ", 0, "?";

	":)";

	"Atomized!";

}



TELEFRAGGED2 = {

	"That's ~one way to become one with the universe.";

	"Gotta move faster than that.";

	"That is just so funny.";

}



TELEFRAGGED3 = {

	"Move it or lose it ... permanently.";

	"Now that's what I call a 'moving violation.'";

	"LOL";

}



TELEFRAGGED4 = {

	"WOWEEE!";

	"So much for trying to get an autograph.";

	"That was truly evil. Bwahahahahaha!";

}



TELEFRAGGED5 = {

	"Tag, you're it.";

	"Beam me up Scotty and we can try it again.";

	"Billions and billions of little tiny atoms everywhere.";

}



TELEFRAGGED6 = {

	"WooHoo!";

	"Oh yeah!! Too easy.";

	"Tis better to give than receive.";

}



TELEFRAGGED7 = {

	"Ugh. Someone get a mop.";

	"Looks like gelatin dessert tonight.";

	"Careful contents under pressure.";

}



DEATH_SUICIDE0 = {

 	"Crap!";

	"Doh!";

	"Frack!";

}



DEATH_SUICIDE1 = {

 	"I'm my own worst enemy.";

	"Grrrrrr.";

	"Just a minor setback.";

}



DEATH_SUICIDE2 = {

 	"I hate it when that happens.";

	"Stop laughing ", 0, "!";

	"Hehe";

}



DEATH_SUICIDE3 = {

	"Arrrrg. I can't believe that happened.";

	"Care to join me down here ", 0, "?";

	"Alright, who pushed me?";

}



DEATH_SUICIDE4 = {

	"I can't believe I did that.";

	"I don't plan on repeating this.";

	"I did that to even the odds ... looked like ", 0, " needed the help.";

}



DEATH_SUICIDE5 = {

	"D'oh!";

	"Oops";

	"Heh";

}



DEATH_SUICIDE6 = {

	"I did that on purpose.";

	"There's never a personal teleporter when you need ~one.";

}



KILL_RAIL0 = {

	"Am I good or what?";

	"Just like shooting fish in a barrel.";

	"WoooHooo. Dodge that suckah.";

}



KILL_RAIL1 = {

	"Click. Bang! Splat!";

	"I looove this gun.";

	"Set 'em up and knock 'em down.";

}



KILL_RAIL2 = {

	"Thanks for being such a great target ", 0, ".";

	"Ewwww. That had to hurt.";

	"Man, I'd hate anyone doing that to me.";

}



DEATH_RAIL0 = {

	"Camping Punk!";	

	0, "!! You ... CAMPER!";

	"Wow. Where did that shot come from?";

	"Nice shot ", 0, "!";

}



DEATH_RAIL1 = {

	"Great! ", 0, " gets lucky once and I'm the target!";

	"Bet you can't do that again ", 0, ".";

	0, " is starting to piss me off.";

}



DEATH_RAIL2 = {

	"You have to run out of ammo sometime, camper.";

	"Camping's fun, ", 0, "But you're going to run out of ammo eventually.";

	"That's it ", 0, ". No more being nice to you.";

	"When I find ~one of those, you're in big trouble, ", 0, ".";

}



KILL_GAUNTLET0 = {

	"You are such an easy mark!";

	"That was fun. I think I'll do it again real soon.";

	"Uh-oh. My 'Loser-meter' detects ~Zero challenge here.";

}



KILL_GAUNTLET1 = {

	"WooHoo. Tag as an 'Extreme Sport'. Gotta love it.";

	"I float like a butterfly and sting like a bee.";

	"Reach out and touch ...";

}



KILL_GAUNTLET2 = {

	"Brutal, but effective.";

	"BIFF!! WHAM!! POW!!";

	"Definitely Crude, but it does the job.";

}



DEATH_GAUNTLET0 = {

	"Get that thing outta my face ", 0,"!";

	"Don't you ever touch me with that again ", 0,".";

	"This is starting to piss me off ", 0,"!";

}



DEATH_GAUNTLET1 = {

	"Yeah. Do that again ", 0, ". I just love being humiliated!";

	"That really makes me mad.";

	"I can't believe I let you do that to me ", 0, ".";

}



DEATH_GAUNTLET2 = {

	"I'm not going to let you do that again ", 0, "!";

	"Death by gauntlet. I feel so ... so unclean.";

	"Heh.";

}



DEATH_FALLING = {

	"D'oh!";

	"Alright, who pushed me?";

	"Look Jack, I'm flying!";

}



DEATH_TELEFRAGGED0 = {

	"Dag-nabbit!";

	"Dangit, ", 0, ", I told you to quit following me!";

	"What a cheap frag ", 0, ".";

}



DEATH_TELEFRAGGED1 = {

	"Do that a bunch more, ", 0, ", and you just might beat me.";

	"Lucky";

	"Heh.";

}



DEATH_TELEFRAGGED2 = {

	"I bet you're pretty darn proud of yourself right now, " , 0, ".";

	"**sigh**";

	"Nice move ", 0, ".";

}



DEATH_TELEFRAGGED3 = {

	"Oh heck.";

	"I hate that. I just hate that.";

	"Well, ", 0, ", I owe you ~one for that.";

}



LEVEL_END_VICTORY0 = {

	"The air smells like sweet victory right now.";

	"Yesssssss!!!";

	"Holey Moley!";

}



LEVEL_END_VICTORY1 = {

	"I rule this place!";

	"I rule ", 4, "!";

	"Game Over Man!!";

	"I'd like to thank all the little pieces of those who made this possible.";

}



LEVEL_END_VICTORY2 = {

	":-D";

	"You ", fighter, "s can all go home now!";

	"It's survival of the fittest.";

}



LEVEL_END_VICTORY3 = {

	"Humility is for wimps. I AM the Champion!";

	"Wahoooo! I am on my way to the top!";

	"Outta my way you ", fighter, ". The train is comin' through.";

}



LEVEL_END_VICTORY4 = {

	"You gotta earn this spot the hard way, ", 3, ".";

	"My Momma would be so proud.";

	"I dedicate this victory to ... ME. Yeah baby.";

}



LEVEL_END_LOSE0 = {

	"Great match. Just don't expect to repeat it the next time, ", 2, ".";

	"Of course I lost, I was playing hurt!";

	"Don't get used to it, ", 2, "-- ~lightning doesn't strike twice.";

}



LEVEL_END_LOSE1 = {

	"Yeah, I let you win this time, ", 2, ".";

	"I let you win.";

	":-(";

}



LEVEL_END_LOSE2 = {

	"I hate losing.";

	"I hate losing to a worthless ", fighter, " like ", 2, ".";

	"I'm not a poor loser. I seem to be pretty good at losing.";

	"Losing stinks.";

}



DEATH_TALKING = {

	"I can see that you're not much into the honor and fair play thing, ", 0, ".";

	"Talker Killer.";

	"You know, ", 0, ", that was a remarkably cheap shot.";

}



//===========================================================================

//		GROUP B RANDOM MESSAGES ,,, orignal random messages

//		The messages in this sub-grouping are intended as fill-in-the-blank

//		variables.  Care must be taken not to set up recursive call situations.

//===========================================================================

exclamation = {"!"; "!!"; "!"; "!!!"; "!!!!!!!"; "!!!";}

good = {"good"; "gooood"; "so good"; "sooo goood";}

looser = {"sucker"; "loser"; "sckr"; "loosr";}

nerd = {"pizza"; "nerdy"; "nerd";}

boyz = {"boyz"; "boyz & grllz"; "girlies";}

ramble = {ramble; one_liners;} //warning this is a repointer variable

response = {affirmative; negative; neutral; response_insult;} //warning this is a repointer variable



list_sort = { //points at other random key lists ... be wary of recursion

	weapon;

	response;

	food;

	liquid;

	family_member;

	fighter;

	item;

	namez;

	place;

	animal;

	substance;

}



language = {

	"English";

	"Chinese";

	"Dutch";

	"Urdu";

	"Cantonese";

	"French";

	"Spanish";

	"German";

	"Italian";

	"Russian";

	"Arabic";

	"Hebrew";

	"Korean";

	"Japanese";

	"Vietnamese";

	"Pushtu";

	"Afrikaans";

	"Amhara";

	"Swahili";

	"Greek";

	"Japanese";

	"Hungarian";

	"Polish";

}



weapon = {

	"gauntlet";

	"rocket launcher";

	"shotgun";

	"machine gun";

	"grenade launcher";

	"railgun";

	"plasmagun";

	"BFG";

	"BFG 10K";

	"lightning gun";

}



ponder = {

	"Interesting.";

	"Hmmmm.";

	"So What?";

	"Now that's something.";

	"Alright.";

	"So you say.";

	"Oh really?";

	"Are you crazy?";

	"That's crazy!";

	"*[YAWN}*";

	"That doesn't sound right.";

	"What?";

	"How charming.";

	"Bah!";

	"Don't give me that.";

	"Horse-puckey!";

	"Bull!";

	"Here we go again.";

	"Not again.";

	"Oh come off it.";

	"That's bull and you know it.";

	"That's ridiculous.";

}



response_insult = {

	"What is this, a radio talk show?";

	"Are you just gonna blabber me to death?";

	"Will you just shut up and fight?!";

	"Bite my ass"; //'cause Graeme said so

	"Discussion time is over!";

	"Take that conversation outside!";

	"**[unacceptably rude gesture]**";

	"You're confusing me for someone who wants to listen!";

	"You've confused me with someone who gives a rip!";

	"I can't hear you!";

	"What am I supposed to be, your private  ", random_counselor, "?";

	"Less chatting more shooting!";

	"Oh bite me!";

	"Bite me fan boy!";

	"Oh whatever! Can we just fight?";

	"Fight, or get the heck outta Dodge.";

	"This arena isn't big enough for me and your chat balloon.";

	negative, " We are not working this out by talking.";

	"This ain't no war of words we got here.";

	"This is an arena, not a confessional.";

	"You trying to talk me to death here?";

	"Keep talking, I'm reloading!";

	"That mouth of yours makes a great target!";

	"That chat balloon makes a great target!";

	"I ain't your ", random_counselor, " ", fighter, ".";

	"We're not here to work out your personal problems.";

	"You got personal problems, take 'em to your ", random_counselor, ".";

	"I'm not in a talking mood.";

	"Will you SHUT UP already?!";

	"Shoot me here already, OK?";

	"Enough with the talking!";

	"Whatsamatter, you not getting enough attention at home?";

	"Talk to the ", weapon, ", because the ear ain't listening.";

	"Keep talking, I need more ammo.";

	"The arena masters didn't set up a debate club here.";

	"This is an arena, not a chat room.";

	"You some kind of touchy-feely, granola-eating nut?";

	"Ugh. You gonna get all touchy-feely on me?";

	"You want therapy? Therapy this!";

	"You need help and I ain't the ~one to help you.";

	"We FIGHT here. We TALK somewhere else.";

	"Can't you see I'm busy here?";

	"Shouldn't you be doing something about all that pent-up aggression?";

	"Cut the chatter.";

	"Zip the lip, ", fighter, ".";

	"You wanna keep it down? I'm trying to frag here!";

	"Ohboy. Non-moving target!";

	"Somebody shut this ", fighter, " up!";

	"I don't wanna argue! I wanna fight!";

	"Somebody kill this ", fighter ," before we're all bored to death.";

	"Gahhh! You just yakked my ear off!";

	"Gahhh!";

	"Blah, blah, blah!";

	"Whatever.";

	"Am I supposed to be taking notes here?";

	"Just, Shut, UP.";

	"Will you just stop with all the whining?";

	"You're whining again.";

	affirmative, " Now just SHUT UP!";

	"Who do you think I am, Sigmund Freud?!";

	"Your MOM!!";

}



random_counselor = { //nice people who listen, counsel or give advice

	"guidance counselor";

	"astrologist";

	"psychic pal";

	"doctor";

	"girlfriend";

	"sex therapist";

	"shrink";

	"hair dresser";

	"psychiatrist";

	"pschologist";

	"~witch doctor";

	"radio talk show host";

	"mother";

	"grandmother";

	family_member;

	"mommy";

	"priest";

	"pastor";

	"rabbi";

	"mullah";

	"minister";

	"guru";

	"bartender";

	"imaginary friend";

}



family_member = {

	"sister";

	"brother";

	"mother";

	"father";

	"uncle";

	"aunt";

	"grandmother";

	"grandfather";

	"cousin";

	"second cousin";

	"brother-in-law";

	"sister-in-law";

	"weird uncle";

	"goofy aunt";

	"niece";

	"nephew";

	"kid";

	

}



friendname = {

	"amigo";

	"bud";

	"buddy";

	"chum";

	"chummer";

	"dude";

	"friend";

	"guy";

	"kid";

	"kid-O";

	"pal";

	"baby";

	"Tex";

}





different = {

	"bigger";

	"smarter";

	"better looking";

	"larger";

	"uglier";

	"smellier";

	"cleaner";

	"dirtier";

	"more beautiful";

	"smaller";

	"more disturbed";

	"crazier";

	"more sane";

	"less friendly";

	"more friendly";

	"fatter";

	"more powerful";

	"more manly";

	"more effeminate";

	"stupider";

	"more alien";

	"weirder";

	"more normal";

	"better educated";

	"longer winded";

	"more boring";

	"goofier";

	"more dangerous";

	"older";

	"younger";

	"better off";

	"worse off";

}



fighter = {

	"bottom feeder"; 

	"camper";

	"camping punk";

	"cheap frag"; 

	"chump";

	"coward";

	"dirtbag"; 

	"frag bait";

	"geek";

	"girlie";

	"goof-ball";

	"hair-ball";

	"~jerk"; 

	"lamer";

	"little kitten"; 

	"llama";

	"loser";

	"loozR";

	"lounge-lizard";

	"microbe";

	"monkey butt";

	"miserable excuse"; 

	"nerd";

	"newbie"; 

	"no-account";

	"pissant";

	"puke";

	"rodent"; 

	"scab";

	"scumbag"; 

	"scumbutt"; 

	"~scum-sucker"; 

	"slimeball"; 

	"slime surfer";

	"slug"; 

	"spud";

	"stiff";

	"stupid cow";

	"thug"; 

	"vidiot"; 

	"week-night warrior";

	"weak-sister"; 

	"wimp";

	"yellow-belly";

	"frag-weasel"; 

	"hairball";

	"lowlife";

	"frag farmer";

	"spawn camper";

}



rearrange = {"DARK CAR MANIAC"; "KICKBUTT"; "~SEVEN SWORDS"; "AWESOME"; "LLAMA"; "LOOZERS"; "ANARKI RULEZ"; "NO CONTEST"; "my mom's name";}



femalebot = {



"Sorlag";

"Major";

"Hunter";

"Lucy";

"Mynx";

"Angel";

"Slash";

"Daemia";}



androbot = {

"Xaero";

"Ranger";

"Keel";

"Razor";

"Visor";

"Patriot";

"Biker";

"Doom";

"Gorre";

"Anarki";

"Grunt";

"Bitterman";

"Hossman";

"Sarge";

"Stripe";

"Wrack";

"Phobos";

"Mr. Elusive";

"Cadavre";}



neuterbot = {

"Orbb";

"Tankjr";

"Klesk";

"Uriel";

}



botnames = {

"Xaero";

"Orbb";

"Slash";

"Sorlag";

"Major";

"Uriel";

"Ranger";

"Keel";

"Razor";

"Visor";

"Hunter";

"Tankjr";

"Patriot";

"Biker";

"Lucy";

"Klesk";

"Doom";

"Mynx";

"Gorre";

"Angel";

"Anarki";

"Grunt";

"Bitterman";

"Daemia";

"Hossman";

"Sarge";

"Stripe";

"Wrack";

"Phobos";

"Mr. Elusive";

"Cadavre";}



negative = { 

"No.";

"Nope.";

"No way.";

"No!";

"Heck no.";

"Nahhhhh!";

"Not on your life!";

"Of course not.";

"I don't think so.";

"Homey don't play that.";

"Sure ... NOT!.";

"No.";

"Negative.";

"I think not.";

"No way, Jose.";

"No.";

"I think maybe ... NO!";

"Forget that!";

"Belay that.";

"Forget that.";

"Negatory.";

"Not a chance.";

"Not in a million years!";

"Not now. Not ever.";

}



affirmative = { 

"Yes.";

"OK!";

"Right!";

"Certainly!";

"It is agreed.";

"Yep.";

"You bet.";

"Uh-huh.";

"Of course!";

"You betcha.";

"Darn tootin'.";

"Affirmative.";

"That's a big 10-4!";

"10-4 good buddy!";

"Correct.";

"Yeah.";

"That is right!";

"You got it!";

"Sure.";

"Yes.";

"Oui!";

"Precisely right.";

"That sounds right.";

"Exactly!";

"You know it!";

"Yeppers.";

"Absolutely.";

"You got that.";

"You know it.";

"Ain't it the truth.";

"Yeah, whatever.";

}



neutral = { 

"What are you talking about?";

"Beats me.";

"Geez.";

"Ick!";

"Wait a sec ... what?";

"I don't understand.";

"Dunno.";

"Not sure.";

"Let me think.";

"Hmm.";

":-)";

";-\\";

":(";

"What do you mean?";

"Am I supposed to tell you?";

"How should I know?";

"I could tell you, but then I would have to kill you.";

"I will never tell!";

"I have no idea!";

"Don't ask me.";

"What is this, 20 questions?";

"No ~one said there would be a test.";

"I thought YOU knew!";

"I'm not gonna tell you!";

"I know nothing about that!";

"That information is top secret, sorry.";

"Can't say.";

"Search me!";

"What?!";

"Do what?";

"Huh?";

"I don't know that!";

"Sorry, dunno!";

"I am clueless here!";

"I'm too sleepy to think straight.";

"Answer hazy. Try back later.";

"I dunno, man.";

"That's for me to know and you to find out.";

"*[confused]*";

"I am not knowing.";

"I really don't know.";

"No idea.";

"Haven't the foggiest.";

"Can I get back to you later?";

"Errrrrrrr.";

"Don't know.";

"Whatever.";

"Definitely ... maybe.";

"I don't know ... what do you think?";

"Whatever does it for you.";

"Uhhh . . .";

}



confused_response = {

	"Confused?";

	"You are confused?"

	"Why are you confused?";

	"I'm not confused!";

	"Sorry confusion caused you.";

	"I understand perfectly.";

	"Maybe you have weasels in your brain.";

	"I understand, don't you?";

	"Do ... you ... speak ... English?!";

	"Are you confused?";

	"What don't you understand?";

	"I understand everything";

	"I think you understand perfectly well.";

	"Did I speak too fast for you?";

	"Are you a newbie or something?";

	"*[sigh}* ... Newbies.";

	neutral;

	response_insult;

}



ramble = { 

":-(";

":-)";

"I'm falling asleep here.";

"I;m getting sick.. ughh.";

"*[vomit]*";

"I'm bored.";

"I'm really tired.";

"I hate life.";

"I just ask for belonging.";

"What is everyone talking about?";

"Whoops.";

"Yawn";

"Zzzzzzzzzzzz";

"Oh.";

"No doubt!";

"I am being repressed by The Man!";

"I see.";

"I think I'm getting a cold.";

"Ahh.";

"Anyone else smell smoke?";

"Anyone here actually have any intelligence?";

"Explain further.";

"Fascinating.";

"Go on.";

"Great.";

"Excellent.";

"Hahaha";

"Hehehe";

"Shocking!";

"Grrr...";

"pfft!";

"*[sniff]*";

"*[snort]*";

"*[grin]*";

"Hmmm";

"Ummmm";

"Ho hum";

"La de dah.";

"Really.";

"School sucks.";

"So what shall we talk about?";

"That's nice.";

"Tsk tsk tsk.";

"*[sigh]*";

"Oh?";

"Aaaaaah.";}



item = { 

"2x3 flat-sawed board";

"8-track tape player";

"aluminum can";

"athletic supporter";

"bar code reader";

"belly button stud";

"bongo set";

"bucket of money";

"can opener";

"car battery";

"car";

"cat";

"ceiling fan";

"cell phone";

"chemistry kit";

"computer";

"console game";

"construction toy";

"curling iron";

"demonic soul";

"digital alarm clock";

"dog";

"DVD player";

"facial tissue";

"floppy drive";

"FM radio";

"German sports car";

"gold coin";

"goldfish";

"hard drive";

"joystick";

"kielbasa sausage";

"mouse ears";

"mouse pad";

"MP3 player";

"new car";

"Picasso painting";

"pop-up toaster";

"pressure gauge";

"riding lawn-mower";

"rock";

"rubber ball";

"rubber frog";

"snow shovel";

"soccer ball";

"soda pop bottle";

"sports bra";

"statue";

"sticky-note";

"table saw";

"telephone";

"television";

"toe fungus";

"toupee";

"tubes of epoxy glue";

"weed trimmer";

"wig";

"wooden chair";

}



place = { 

	"Lake Titicaca";

"42nd Street";

"a pasture";

"Alabama";

"Alaska";

"Amsterdam";

"Arizona";

"Arkansas";

"Atlantis";

"Australia";

"Barcelona";

"Belgium";

"Bergen";

"Berlin";

"Bermuda";

"Birmingham";

"Bonaire";

"Bonn";

"Brazil";

"Brisbane";

"Brussels";

"Calgary";

"California";

"Canada";

"Caracas";

"China";

"Colorado";

"Connecticut";

"Curacoa";

"Dallas";

"Deimos";

"Delaware";

"Denmark";

"Dusseldorf";

"Eldorado";

"Florida";

"France";

"Geneva";

"Georgia";

"Greece";

"Hawaii";

"Idaho";

"Illinois";

"Indiana";

"Indonesia";

"Iowa";

"Isle of Man"; 

"Istanbul";

"Jackson";

"Jakarta";

"Japan";

"Java";

"Kalamazoo";

"Kansas";

"Kansas";

"Katmandu"; 

"Kentucky";

"Lake Geneva";

"Lesotho";

"London";

"Louisiana";

"Lourdes";

"Maastricht";

"Madagascar"; 

"Madrid";

"Maine";

"Mars";

"Massachussetts";

"Mesquite";

"Michigan";

"Minnesota";

"Minnesota";

"Mississipi";

"Missouri";

"Montana";

"my parent's basement";

"Nebraska";

"Nevada";

"New England";

"New Hampshire";

"New Jersey";

"New Mexico";

"North Dakota";

"North Carolina";

"Nova Scotia";

"New York";

"Newcastle";

"Norway";

"Nottingham";

"Ohio";

"Oklahoma";

"Oregon";

"Oregon";

"Oregon";

"Oslo";

"outer space";

"Paris";

"Pennsylvania";

"~Phobos";

"prison";

"Rhode Island";

"Rotterdam";

"San Jose";

"Scotland";

"Seattle";

"South Carolina";

"South Dakota";

"Spain";

"St. Etienne";

"St. Paul";

"Sweden";

"Tennesee";

"Texas";

"the 3rd planet from the sun";

"the area behind the bleachers";

"the attic";

"the basement";

"the farthest star";

"the ghetto";

"the high plains";

"the Left coast";

"the Midwest";

"the moon";

"the Netherlands";

"the North Pole";

"the Pacific Northwest";

"the planet Uranus";

"the Rocky Mountains";

"the U.S.A.";

"the wetlands of Florida";

"Tierra Del Fuego";

"Toronto";

"Toulouse";

"Troy";

"United Kingdom";

"Utah";

"Vancouver";

"Venus";

"Vermont";

"Virginia";

"Washington";

"Washington D.C.";

"West Virginia";

"Willemstad";

"Wisconsin";

"Wyoming";

"Yellowstone Park";

"Zambezia";

"Zimbabwe";

}



class = {

"math";

"English language";

"geometry";

"gym";

"art";

"Spanish language";

"French language";

"German language";

"Latin language";

"Hebrew language";

"Mandarin language";

"Cantonese language";

"Japanese language";

"geography";

"science";

"geology";

"calculus";

"computer science";

"history";

"political science";

"physics";

"economics";

"chemistry";

"biology";

"anthropology";

"elementary education";

"nuclear engineering";

"electrical engineering";

"sociology";

"environmental engineering";

"management";

"accounting";

"marketing";}



liquid = { 

"cola";

"soda pop";

"mocha latte";

"coffee";

"brandy";

"orange juice";

"gin and tonic";

"milk";

"bottled water";

"mineral water";

"hydrochloric acid";

"lye";

"cherry cola";

"beer";

"bitter lemon";

"water";

"rum";

"rum and coke";

"wine";

"gasoline";

"rain water";

"iced tea";

"stout";

"pond water";

"cognac";

"vodka";

"pilsner";

"ale";

"ichor";

"celery soda pop";

"cocoanut milk";

"whiskey";

"scotch";

"bleach";

"turpentine";

"paint thinner";

"pool sanitizer";

"sulfuric acid";

"mercury";

"bicarbonate of soda";

"wine cooler";}



number = { 

"0";

"a billion";

"a trillion";

"a million";

"billions and billions";

"a gross";

"a dozen";

"a couple dozen";

"a baker's dozen";

"1";

"2";

"3";

"4";

"5";

"6";

"7";

"8";

"9";

"10";

"100";

"1,500";

"13";

"234";

"845";

"23";

"42";

"around 11";

"like 2 or 3";

"like 8 or 9";

"a buttload of";

"a bunch of";

"~fifty";

"~sixty";

"~seventy";

"~eighty";

"a hundred";

"a bazillion";

"a trillion";}



profession = { 

"accountant";

"actor";

"archeologist";

"artist";

"astronaut";

"bank robber";

"brick layer";

"cashier";

"cook";

"courier ";

"dancer";

"dish washer";

"doctor";

"drinker";

"engineer";

"electrician";

"fast food clerk";

"fast-food manager";

"female impersonator";

"game designer";

"grease monkey";

"hacker";

"judge";

"lawyer";

"~marine biologist";

"messenger";

"musician";

"phone-repairman";

"pizza deliverer";

"plumber";

"police officer";

"preacher";

"pre-school teacher";

"professor";

"radio announcer";

"programmer";

"psychopath";

"rocker";

"sacker";

"salesman";

"scientist";

"slacker";

"stocker";

"student";

"system administrator";

"thief";

"truck driver";

"writer";

"car salesman";

"hair dresser";

"mercenary soldier";

"sailor";

}



namez = { 

"N37w1z4rd";

"Sterling";

"Zorgo";

"the FBI";

"the CIA";

"the KGB";

"President McKinley";

"the ghost of Teddy Roosevelt";

"NIA";

"Ninja";

"the evil emperor";

"the evil empire";

"Scarface";

"some guy";

"Nostromo";

"Huckleberry";

"Baxter";

"Scorpio";

"the Cult of Quake";

"the Cult of Cthon";

"the Silver Dawn";

"the Illuminati";

"medieval recreationists";

"gamers";

"elite hackers";

"survival nuts";

"doomsday cultists";

"Y2K survivalist wackos";

"the Mexicans";

"the Aussies";

"the Dutch";

"the telephone company";

"the Cubans";

"the Canadians";

"the Iraqis";

"the Libyans";

"the Communist Chinese";

"the Argentinians";

"the Brazilians";

"the Strogg cyborgs";

"the Russians";

"the Texans";

"the Brits";

"the French";

"the liberal left";

"the left wing media";

"the conservative right";

"chitinids";

"Sorg reptiloids";

"a demigod";}



immaturity01 = {

"I suppose you're going to test all those other 'special' words too?";

"That's pretty much where I draw the line!";

"I just forwarded that message to your mom.";

"I just forwarded that message to the police.";

"I just forwarded that message to your ", random_counselor, ".";

"*[sigh]* Yeah, you and every other 14-year-old on the planet.";

"Still waiting for puberty to hit, eh, ", 7, "?";

"I was right about you.";

"PIG!!";

"You disgust me ", 7, "!";

"Oh grow up.";

"Do you have to talk about that?";

"Did I really need to know that?";

"Not that again!";

"Disgusting.";

"Immature little pervert.";

"You're sick, leave me alone.";

}



proposition01 = {



"Hmmmmm. Let's talk about that later.";

"Sure. But we should finish this first.";

botnames, " may go for that , but not me.";

"Tell me more.";

"You might want to take a moment and get ready.";

"Again?";

"Sure. Meet me in ", level_title, ". I'll be wearing the Battle Suit.";

}



male_one_liners = {

"He shoots! He scores! The crowd goes wild!";

"I'm the BFG king! Thank you, thank you very much.";

}

female_one_liners = {

"She shoots! She scores! The crowd goes wild!";

"Call me 'Cleopatra,' because I am the queen of denial!";

}

one_liners = { 

"Been there, done that, got the t-shirt.";

"Been there, done that, sent the post cards.";

"They got post cards for this place?";

"Ow. Not a good time to get a hang nail.";

"You got an early retirement coming up, ", 0, ".";

"We are definitely not going there.";

"Time to dance on the avalanche again.";

"Run, run, as fast as you can. Can't catch me, I'm the gingerbread man!";

"Time to reap the whirlwind.";

"I'm your ~one-way ticket to oblivion.";

"If you can't keep up with the big dogs, stay on the porch.";

"Brain, brain, blown away, respawn back another day.";

"The pain ... it's so ... motivating.";

"Welcome to Etermination Central.";

"Welcome to Frag School. Lessons are free today.";

"The freight train is a-coming through.";

"There will be NO survivors.";

"Chew on this!";

"Yippie-ki-yi-yay!";

"Ammo-gram!";

"Get ready to join the dinosaurs ", 0, ".";

"Well blow me down!";

"Shiver me timbers!";

"You're pretty fly for a meat pie.";

"I have not yet begun to fight.";

"Ink this on your tailbone!";

"Fear stalks you like heat!";

"Taste the fever wind!";

"Feel my shrieking rocket blast in your gibs!";

"Is this a bad time for you?";

"Winning's not everything -- it's just my middle name.";

"Too bad about your ribcage.";

"You better see a doctor about that.";

"Is that weapon licensed?";

"Watch your back -- I am.";

"Hey, was that your chest or yesterday's spaghetti I stepped in?";

"It's Killer time!";

"Spot & splatter.";

"Did you see that? I didn't think so.";

"Have a double-ought forget-me-not.";

"It's dangerous sneaking up behind a cyborg.";

"Didn't your mother teach you never to run with a ~rail gun?";

"I thought I told you to shut up.";

"I'm sure I told you to shut up.";

"Hey, little kitty-cat, I have a treat for you.";

"Guaranteed to remove unwanted brain tissue.";

"I found this rocket -- it has your name on it.";

"You ain't near fast enough, Tex.";

"Try pulling that little triggery thing.";

"Juggle grenades -- it's a blast!";

"Neither snow, nor sleet, nor rain of gibs will prevent delivery of the ~rail.";

"Paper, scissors, ROCKET!";

"I'm bad to your ~bones.";

"Your mom should have warned you about me.";

"I don't like to speak ill of the dead, but you suck.";

"Pain clears the mind.";

"I can take away your pain.";

"You're runnin' with the big dogs now.";

"You shouldn't oughtta have made me mad.";

"It's not too late to apologize.";

"We accept all leading surrender cards.";

"Welcome to Generation Ex.";

"Annrkee Roolz!";

"Loose lips need to be sewed shut.";

"You got real purty eyes.";

"Why do you run away? Won't you be my friend?";

"Put down the gun and we'll talk.";

"I swear, you got no sense O' humor.";

"Ping! Found you!";

"What's the sound of one hand slapping?";

"I don't know which came first, you or the egg.";

"I can't carry all this ammo. You want some?";

"I got blisters on my trigger finger!";}



adj = { 

"old";

"new";

"greasy";

"slimy";

"sticky";

"humongous";

"big";

"small";

"little";

"soft";

"hard";

"strange";

"fluffy";

"eerie";

"weird";

"teeny-tiny";

"tiny";

"smelly";

"high-tech";

"fat";

"putrid";

"skinny";

"dark";

"light";

"heavy";}



color = { 

"blue";

"red";

"white";

"pink";

"green";

"yellow";

"clear";

"tangerine";

"black";

"purple";

"pink";

"brown";

"tan";

"gray";

"olive";

"orange";

"violet";

"gold";

"silver";

"bronze";

"scarlet";

"crimson";

"rusty";

"crystal clear";

"emerald green";

"bloody red";

"chartreuse";

"fuschia";



}



whenf = { 

"never";

"when?";

"next week";

"next month";

"a long time from now";

"2 million A.D.";

"not now";

"tommorrow";

"tonight";

"in ~one year";

"in ", number, " years";

"in the next millenium";

"next year";

"in 2010";

"in the year 2025";

"in 2001";

"when the cows come home";

"in an aeon or ~two";

"who knows when";}



whenp = { 

"1 million BC";

"a very long time ago";

"just this morning";

"yesterday";

"last week";

"last month";

number, " years ago";

number, " weeks ago";

"last week";

"1999";

"1776";

"1492";

"1066";

"1984";

"before breakfast";}



time = { 

"0:00";

"1:00";

"2:00";

"3:00";

"4:00";

"5:00";

"6:00";

"7:00";

"8:00";

"9:00";

"10:00";

"11:00";

"12:00";

"1:30";

"2:30";

"3:30";

"4:30";

"5:30";

"6:30";

"7:30";

"8:30";

"9:30";

"10:30";

"11:30";

"12:30";}



food = { 

"anchovies";

"asparagus puree";

"baked potato";

"bananas";

"barbeque";

"beans and wieners";

"beef ~jerky";

"beef";

"black jellybeans";

"buffalo chicken wings";

"cabbage";

"canned meat";

"cheese puffs";

"cheese spread";

"cheese";

"chicken";

"Chinese take-out";

"chips and salsa";

"cottage cheese";

"dehydrated Brussel sprouts";

"eggplant";

"french fries";

"fried chicken";

"fried pork rinds";

"fugu";

"greasy fast food";

"ham";

"hamburger";

"head cheese";

"kung pao chicken";

"liver";

"liver and onions";

"mammoth meat";

"meatloaf";

"nachos";

"oatmeal";

"olive loaf";

"onion rings";

"pate fois gras";

"pickled pig's feet";

"pizza";

"popcorn";

"porkchops and applesauce";

"quesadillas";

"rutabaga paste";

"salami";

"sardines";

"sashimi";

"shrimp";

"shrimp cocktail";

"sliced white bread";

"soup";

"spaghetti";

"steak";

"sushi";

"sweet and sour";

"taffy";

"teriyaki";

"Texas toast";

"tuna fish";

"turkey";

"vegetarian meat loaf";

"goat meat";

}



animal = { 

"monkey";

"tiger";

"horse";

"hippo";

"sheep";

"lion";

"cow";

"wombat";

"kangaroo";

"zebra";

"giant eel";

"raccoon";

"duck";

"dog";

"cat";

"shark";

"spotted owl";

"mouse";

"rat";

"moose";

"armadillo";

"aardvark";

"wombat";

"goose";

"gorilla";

"squirrel";

"chipmunk";

"platypus";

"blue-footed booby";

"caribou";

"head louse";

"mosquito";}



weather = { 

"hot";

"Afica-hot";

"showering meteors";

"raining acid"; 

"threatening tornadoes";

"frigid";

"snot-freezing cold";

"melt-your-brains hot";

"bitter cold";

"Equatorial";

"cold";

"windy";

"so-so";

"hot as Hades";

"cold as Hades";

"sunny";

"cloudy";

"rainy";

"pretty cool";

"a bit warm";

"overcast";

"storming";

"raining";

"flooding";

"snowing";

"hailing";

"sleeting";}



month = { 

"January";

"February";

"March";

"April";

"May";

"June";

"July";

"August";

"September";

"October";

"November";

"December";}



substance = { // weird or unusual substance

"catnip";

"breath mints";

"stamp glue";

"cottage cheese";

"fruit juice";

"ice cubes"

"doggie biscuits"

"durian candy";}



level_title = { // the titles of the game maps



"Training Realm";

"Arena Gate";

"House of Pain";

"Arena of Death";

"Powerstation 0218";

"Place of Many Deaths";

"The Forgotten Place";

"The Campgrounds";

"The Proving Grounds";

"Temple of Retribution";

"Brimstone Abbey";

"Hero's Keep";

"Hell's Gate";

"The Nameless Place";

"Deva Station";

"The Dredwerkz";

"Vertical Vengeance";

"Lost World";

"Grim Dungeons";

"Demon Keep";

"Fatal Instinct";

"The Bouncy Map";

"The Longest Yard";

"Space Chamber";

"Apocalypse Void";

"Final Encounter";

"Dueling Keeps";

"Brimstone Abbey";

"The Stronghold";

"Assassins' Roost";

"Space CTF";

}



liquidmeasures = {  // Uriel's dramatic measurements of liquid

"gallons";

"litres";

"swirling rivers";

"bottomless oceans";

"cascading fountains";

"churning seas";

"steaming lakes";

"endless streams";

"raging tides";}



operation1 = { // Ranger's Mission Statements, part one

"Ambivalent";

"Benignant";

"Blasphemous";

"Convenient";

"Conventional";

"Convincing";

"Corpulent";

"Desert";

"Desperate";

"Deviant";

"Disturbing";

"Dormant";

"Extreme";

"Flagrant";

"Flatulent";

"Frequent";

"Heroic";

"Hideous";

"Malignant";

"Mighty";

"Migrant";

"Missing";

"Northern";

"Pristine";

"Rolling";

"Secret";

"Significant";

"Somnambulant";

"Southern";

"Statutory";

"Succulent";

"Torpid";

"Troubled";

"Truculent";

"Vagrant";

"Vapid";

"Vibrant";

}



operation2 = {// Ranger's Mission Statements, part two

"Argument";

"Bosom";

"Breakfast";

"Breeze";

"Buffalo";

"Childhood";

"Colors";

"Crime";

"Dinner";

"Eagle";

"Excuse";

"Experiment";

"Falcon";

"Flyer";

"Fruit";

"Growth";

"Haiku";

"Hawk";

"Heat";

"Humor";

"Intern";

"Luggage";

"Lunch";

"Manhood";

"Measures";

"Mistake";

"Morsel";

"Other";

"Stock";

"Storm";

"Tiger";

"Tumor";

"Violation";

"Visage";

"Waters";

"Wave";

"Wind";

"Winter";

"Womanhood";

}



curse = {

	"Curse you, ";

	"A pox on you, ";

	"Blast you, ";

}



// The following are for use in game modes that use a the team chat function



teamchat_01 = { //randoms for teamchat replies

	"Go on without me.";

	" ";

	" ";

	"I won't follow you anymore.";

	"Watch your back.";

	"Be alert.";

	"You go on ahead.";

	"Carry on without me.";

	"You go on.";

	"Go on without me.";

}



teamchat_02 = {

	"I'm going my own way now.";

	" ";

	" ";

	"]:-(";

	"I give up already.";

	"Ask someone else.";

	"I'm gonna do something else.";

	"I'm going to do something else.";

	"I'm off duty.";

	"I'm off.";

	"I quit.";

}



teamchat_03 = {

	"No ~one gets past this camper.";

	"The enemy is toast!";

	"The enemy doesn't stand a chance against me.";

	"Let's hammer these losers!";

	"Let's hammer these ", fighter, "s!";

}



teamchat_04 = {

	"No need to panic,";

	"Don't get excited,";

	"Don't get your panties in a bunch,";

	"Calm down, ";

	"Whoaaa there pardner,";

	"Chill,";

	"Back off,";

	"Take it easy,";

	"Lighten up,";

}



//General hints and tips for better playing

playtips = {

"In the language of the arena, a 'frag' means a 'kill'.";

"Running is faster, but walking is quieter.";

"Use sound cues to tell you where your enemies can be found.";

"Learn to use all weapons equally well. Don't rely on favorites.";

"At close range, the shotgun delivers an extremely powerful attack.";

"Never turn your back on the enemy. Run backwards and shoot.";

"Change directions frequently when moving.";

"Don't be predictable.";

"Fire grenades into rooms containing multiple enemies.";

"Hunt down your enemies rather than letting them hunt you.";

"Learn your enemy's behavior.";

"'Camping' means positioning yourself so your field of fire covers an important arena location.";

"Never kick your bosses' butt in a death match.";

"Fear the click. Change weapons BEFORE you run out of ammo.";

"Always hit your enemy and never let them hit you.";

"Learn your foes' strengths. Keep them from their best weapons.";

"Try talking to your opponents. They may surprise you.";

"Master the skill of 'strafing': moving from side to side without turning.";

"Most weapons require more than ~one hit to frag an opponent.";

"If you fall too far, you take damage.";

"Don't stay where you spawn in.";

"Generally speaking ... Frag everything that isn't you.";

"In 'free for all fights', the match begins when you enter the arena.";

"Death by falling costs you a frag point.";

"Pressing the attack against a badly injured opponent is often worth the risk.";

}
