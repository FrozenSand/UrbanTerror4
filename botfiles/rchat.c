//==========================================================================
//
// Name:			rchat.c
// Function:		reply chat
// Programmer:		Mr Elusive
// Editors:			Steve Winter, Paul Jaquays
// Last update:		October 18, 1999
// Tab Size:		3 [real tabs]
// Notes:			-
//===========================================================================

#include "game.h"

["abnormal", "strange", "weird", "unusual", "odd"] = 5
{
	"I think you're abnormal.";
	"I think you're quite strange.";
	"Abnormal? You redefine weirdness, ", fighter, "!";
	"That's weird! No make it 'that's REALLY abnormal.'";
	"What's so odd about that?";
	"Perhaps you've never encountered something truly strange.";
	"Strange? Really?";
	"How odd of you to say that.";
	"Weird...";
}

["about", "around", !"tell", !"find out"] = 7
{
	"Could you be a little more precise?";
	"Would you be a bit more precise?";
	"So, you don't know for certain?";
	"Hmmmph. What precision?";
	"You're guessing.";
	"Can you give a better estimate than that?";
}

["accept", "accepting", "acceptance"] = 7
{
	"Do you have trouble accepting reality?";
	"You expect me to accept what you just said?";
	"Just accept it and shut up!";
	"You'll have to deal with it sooner or later.";
}

["accident", "accidental"] = 5
{
	"Have a lot of accidents, do you?";
	"Were you an 'accident?'";
	"Are you accident prone?";
	"You sound accident prone, be careful handling ", weapon, "s.";
	"I don't have accidents myself.";
	"Me? I don't believe in accidents.";
	"What kind of accident?";
}

["ache", "pain", "hurt"] = 5
{
	"Awwww. Poor baby, does it hurt much?";
	"Where does it hurt?";
	"Maybe your mommy will kiss it and make it feel all better.";
	"Yeah, whatever.";
	"So take an aspirin.";
	"Do you need a doctor?";
	"Stop whining about how much you hurt.";
	"Serves you right, ", fighter, ".";
}
["addict", "addicted"] = 5
{
	"What sort of addict?";
	"Now that's a problem.";
	"A ", substance, " addiction can be pretty nasty.";
	"There's probably a 12-step program to get you off it.";
	"How long has that been going on?";
	"I used to be addicted to ", food, ", but I kicked it.";
	"That's a problem. What are you going to do about it?";
	"My cousin was addicted to ", substance, ". Pretty awful.";
	"Addicts trip my mug-slapping trigger.";
	response_insult;
}

["advice", "advise"] = 6
{
	"You want advice? Give up.";
	"Go ask your granny for advice.";
	"Advice ~ain't free on this bus.";
	"You want advice from brutal, mercenary killers?";
	"You need more than advice, ", fighter, ".";
	"I don't take advice and I don't hand it out.";
}

["afraid", "scared", "fear", "fears", "scary", "fright", "frightened", "frightening"] = 5
{
	"What, exactly, are you afraid of?";
	"Are you afraid? Bwahahahahaha!";
	"Do you fear me? You should!";
	"I'm your worst fear, ", fighter, ".";
	"What freakin' baby.";
	"Now you take ", botnames, "'s cooking ... there's something to scare you.";
	"I'll bet you say that to everyone who's ", different, " than you.";
	"Are you afraid of big, mean ", animal, "s?";
	"What scares you?";
	"Does ", botnames, " frighten you?";
	"Are you afraid of the dark, too?";
	"Ooohh, I'm scared now.";
	"Now I'm scared!";
}

["aggressive", "anger"] = 5
{
	"Feeling aggressive, are you?";
	"So you have a bad temper -- join the club.";
	"You had better be. You won't get far otherwise.";
	"Why are you so aggressive? Too much caffeine?";
	"Don't get all aggressive, I'll have to smack you.";
	"What makes you aggressive?";
	"So do something about all that aggression!";
}

["agree"] = 6
{
	"Do people usually agree with you?";
	"I disagree.";
	"How could I not agree?";
	"Couldn't agree more.";
	"Why would anyone agree with that?";
	"That's just wrong.";
	"Agree with a ", fighter, " like you? Don't make me laugh.";
	"That's just stupid.";
	response_insult;
}

["ai", "artificial intelligence"] = 5
{
	"What, you mean artificial intelligence?";
	"A.I. is a crock.";
	"Artificial intelligence is just ~one step below real stupidity.";
	"I know a lot about A.I.! ;-)";
	"A.I.? Like robots and stuff?";
	"I've always suspected that Mr. Elusive is a bot.";
	"I've always suspected that ", botnames, " isn't real.";
	"I run on real-I.";
	"Artificial intelligence is an oxymoron.";
	"Artificial intelligence? Is that like a mock turtleneck?";
}

["alimony"] = 5
{
	"Is alimony a problem?";
	"So you were married once?";
	"It's only money.";
	"So, it's not like you have a life.";
	"How much money are we talking about?";
	"Don't rob a bank, you wouldn't be good at it. ";
	response_insult;
}

["alive", "living"] = 5
{
	"How silly. I'm as alive as you are?";
	"I live. Do you?";
	"'Alive' or 'a life'? You know that thing you should get.";
	"I'm very much alive, thanks!";
	"I'm in no danger of dying, I assure you.";
	"I am very much alive.";
	"More alive than ever.";
	"Alive?! Of course!";
	"Of course I'm alive, don't be stupid.";
	"What are you talking about?";
	"Sure, I'm alive.";
	affirmative, " I am alive.";
	"If you call this living.";
	negative, "I don't call this living.";
	ponder, " Why wouldn't I be alive?!";	
	"Alive! It's alive!";
	"In the flesh.";
	"I was alive last time I checked.";
	"How alive should I be!";
	"Should I be dead?";
	"What, you think I'm dead?";
}

[("men are ", 0)] = 3
{
	"A lot of women are ", 0, " too.";
	"I'm not ", 0, ".";
	"That just might be true.";
	negative, " I'm not ", 0, ".";
	"Not all, but some.";
	"If you were a man, would you be ", 0, "?";
	"All men, or just a particular man?";
	"Yeah, that goes for your dad, too.";
	"I am not!";
}

[("women are ", 0)] = 3{
	"There are men who are ", 0, " too.";
	"I'm not ", 0, ", though.";
	"That just might be true.";
	"My sister isn't ", 0, ".";
	"If you were a woman, would you be ", 0, "?";
	"All women, or just a particular woman?";
	"Does that mean your ", family_member, " is ", 0, " too?";
}

["allow", "allowed"] = 6
{
	"Would your mother have allowed that?";
	"So you think people should be allowed to do whatever they want?";
	"I wouldn't allow it.";
	"Allowed? That's FORBIDDEN!";
	"So you would allow it?";
	"That's not allowed here.";
	"We allow that, but we don't like it.";
	"I don't think that should be allowed.";
	"Sure it's allowed ... you just have to pay the penalty.";
	"We'll have none of that here.";
}

["alone", "lonely", "loneliness", !"not"] = 6
{
	"Aren't you afraid, there all alone?";
	"So, you talk to me.";
	"You should meet more people.";
	"Loneliness is curable. Start by turning the computer off.";
	"Lonely? Join an organization where you can meet people.";
	"I like being alone.";
	"Lonely is my middle name .... ummmm ... Would you be my friend?";
	"Ever wonder WHY you're alone so much?";
	response_insult;
}

["always", "all the time"] = 6
{
	"Give me an example.";
	"Always sounds pretty extreme.";
	"When?";
	"Really, always?";
	"You mean most of the time.";
	"I'm sure you don't mean always.";
	ponder, " You always say that.";
}

["ambition"] = 6
{
	"What's your ambition";
	"What do you want to be when you grow up?";
	"Ambition is an OK thing, but don't walk over people to get there.";
	"A little ambition is a bad thing.";
	"Hey, look at me -- ambition got me here!";
	"I always knew I wanted to be a soulless killer.";
}

["anal", "butt", "bowels", !"kiss my", !"bite my"] = 5
{
	"Are you anal obsessive?";
	"Let's get back to shooting.";
	"Say that again and things are gonna get ugly!";
	"That's nasty.";
	"You say you're a what?";
	"Say what?";
	"Why do you keep bringing that up?";
	"Jeez, are you fixated or what?";
	"OK, enough about your butt.";
	"Look, my only interest in butts is kicking yours.";
	"Your butt is mine -- the vice is not versa.";
	immaturity01;
	proposition01;
	response_insult;
}

["angry", "mad", "upset", "pissed", "ticked", "po'd"] = 6
{
	"Do you get mad often?";
	"Better you than me, chump.";
	"Does somebody have a bad temper?";
	"What makes you so angry all the time?";
	"Why are you so mad?";
	"Jeez, don't get so uptight.";
	"Angry, angry, angry. Why is everyone so angry?";
	"Lighten up, Lucille.";
	"Sure, you have every right to be mad -- you little dork.";
	"You get upset easy, huh.";
	"You want anger, punk butt? I'll show you anger!";
}

["animal", "animals"] = 6
{
	"I'm my favorite animal.";
	"You been to that new restaurant that serves ", animal, " burgers?";
	"Do you like animals in general?";
	"I'm waiting for the new '", animal, " ~hunter' program.";
	"My favorite animal is the ", animal, ". Tastes like chicken.";
	"Ever seen a ", animal, " twist the leg off a ", animal, "?";
}

["anxious", "nervous"] = 5
{
	"Stop fidgeting. You're making me nervous now.";
	"What makes you so nervous?";
	"Why so jumpy?";
	"When I get nervous, I crack knuckles -- and I don't mean my own.";
	"Anxiety gives me **[urrrrrrrrp!]** gas.";
	"Maybe shooting you will calm you down.";
}

["apathy", "apathetic"] = 6
{
	"You know what? I don't care.";
	"I don't care enough to even be apathetic.";
	"Why are you so apathetic?";
	"Are you bored?";
	"Do you feel alienated from your inner child?";
	"Do people find you boring?";
	"Apathetic? How pathetic :-]";
	"**[YAWN]**";
	response_insult;
}

["approve", "approval"] = 5
{
	"Are you asking me for approval?";
	"Personally, I don't approve of that kind of behavior.";
	ponder, " I definitely disapprove.";
	"I wouldn't approve of that.";
	"Sure, sounds good to me.";
	"For what it's worth, I approve.";
	"Hey, knock yourself out.";
	"Go ahead, just don't count on me.";
	"You'd probably do it anyway, with or without my approval.";
}

["are", &"?"] = 2
{
	response;
	response_insult;
}

[("are they ", 0)] = 2
{
	affirmative, " They're ", 0, ", aren't they?";
	negative, " Of course they aren't.";
	"Well, kinda, I suppose.";
	"Not really.";
	"I don't know if they're ", 0, " or not";
	"Why wouldn't they be ", 0, "?";
	"Why would they be ", 0, "?";
	"Not compared to you.";
	"Does it matter that they are ", 0, "?";
	response;
}

["are wrong", "incorrect", "not true", "not correct", "you made a mistake"] = 4
{
	"Sorry.";
	"So sorry.";
	"Yeah, sorry about that.";
	"I'm sorry.";
	"Well pardon me.";
	"Excuse me.";
	"EXCUUUUUSE ME!";
	"I humbly apologize.";
	"A thousand pardons, oh judgmental ~one.";
	"Forgive me, please!";
	"I ask your forgiveness.";
	"Pardon me.";
	"My bad.";
	negative, " You're mistaken. I'm always right!";
	"Oh.";
	"Death Match means never having to say you're sorry.";
	"You want an apology? Stand right there.";
	"My gun would like to apologize for me.";
	"I respect you too much to say I'm sorry.";
}

[("are you ", 0)] = 6
{
	"What difference does it make to you?";
	"Oh, don't be stupid.";
	"And if I am ", 0, ", does it make a difference?";
	"Whether I'm ", 0, " or not is my business.";
	"None of your nevermind.";
	"Nosey aren't you?";
	"I might be.";
	"That's a possibility.";
	negative, " I am most decidedly not ", 0, ".";
	negative;
	affirmative;
	"Of course. Aren't you?";
	"Never.";
	"All the best warriors are.";
	"Why, are you?";
	"~Ain'tchoo?";
}

["arena", "arenas", "map", "maps", "levels", "level", !"master", !"masters"] = 4
{
	level_title, " is my preferred battleground.";
	"I really dig ", level_title, ". It's the greatest.";
	"Whoever created ", level_title, " knew what they were doing.";
	"Which arena is your favorite?";
	level_title, " rocks!";
}

["arena master", "arena masters"] = 5
{
	"The arena masters rule.";
	"They are my digital deities.";
	"No ~one can stand before the power of the masters.";
	"They created this place from the nothingness of the virtual void.";
}

["argue", "argument", "disagree", "quarrel"] = 4
{
	"Do you need to argue about everything?";
	"No need to start a fight.";
	"Should we settle this like warriors, with ", weapon, "s?";
	"I let my ", weapon, " settle my arguments for me.";
	"The best thing about an argument is winning.";
	"Oh happy day, I'm fighting the captain of the debate team?";
	"You're just playing the devil's advocate aren't you?";
}

["artificial", "fake", "phony", "false", "faux", "not real"] = 4
{
	"Lots of things are artificial. Take you, for instance.";
	"I prefer the real thing.";
	"So you think it's a conspiracy?";
	"The real thing is must too expensive.";
	"It's not real?";
	"What's not real?";
	"Are you sure that's really fake?";
	"Phony, shmony. I'm real, my ", weapon, " is real. Worry about that.";
}

["ashamed", "shame", "shameful", "abashed", "blush"] = 5
{
	"What are you ashamed of?";
	"I'm not certain I wanted to hear about that.";
	"What could make YOU feel ashamed?";
	"Confession is good for the soul.";
	"You SHOULD be ashamed.";
	"Nothing to be ashamed of ... well not much.";
	"Shame on you.";
	"You did WHAT??!!";
	"Do you feel guilty?";
	"Do you think you did something wrong?";
	"Never admit anything, that's my motto.";
	"Commit, admit, apologize -- it's a vicious cycle.";
}

["astrology"] = 4
{
	"Astrology rules your life -- no, wait, I rule your life.";
	"My astrological sign is this boot kicking your butt.";
	"Astrology? The stars are big balls of flaming gas!";
	"I suppose your psychic pal forgot to mention me kicking your butt.";
	"What do the stars tell you?";
	"The stars tell me when it's dark out.";
	"Today's horoscope -- you will meet me and be fragged.";
	"Today's horoscope -- watch out for splattering gibs.";
	"Astrology -- total horse-hockey.";
	"My sister is a total astrology freak -- aah, she's just a total freak.";
	response_insult;
}

["atheism", "atheist", "godless", "agnostic", "there is no god"] = 6
{
	"There are no atheists in the arena, I gibbed 'em all.";
	"So just how religious are you, you bloodthirsty ghoul?";
	"God isn't dead -- would you like to meet him?";
	"Getting spiritual advice from a gun-wielding foe is hardly advisable.";
	"I'm not changing my beliefs right now.";
	"Maybe you ought to check out what you're missing.";
	"So, how do you deal with the emptiness inside?";
	"Maybe I should start an infidel's club.";
}

["authority"] = 5
{
	"I never met an authority I couldn't flout.";
	"Was your father an authority figure?";
	"Still rebelling against authority, are you?";
	"I believe in challenging authority, unless I'm it.";
	"You will respect MY authority!";
	"Are you intimidated by authority, or what?";
	"So, how does that make you feel about me?";
	response_insult;
}

["automaton"] = 6
{
	"What, like a cash machine?";
	"Oh, yeah, that's where I take my laundry.";
	"They wash cars, right?";
	"I've programmed a few finite state automata in my day.";
	"Don't go dissing automata.";
	"Isn't that a German highway?";
}

["avoid", "evade", "dodge", "duck"] = 6
{
	"Do you avoid people who are like you? I know I do.";
	"Face it like a man ... or whatever it is you are.";
	"Can't take it, huh?";
	"Don't dish it out if you can't eat it yourself.";
	"What, precisely, are you trying to avoid?";
	"You can't dodge it forever.";
}

["baby", "babies", "infant"] = 6
{
	"Awww, I love babies.";
	"Goo-goo poo-poo ma-ma -- what are you lookin' at, ", fighter, "?";
	"You're starting to act like a baby.";
	"Do you have any children?";
	"Are we talking about your baby?";
	"Who's baby?";
	"Don't call me baby.";
	"Nobody calls me baby -- nobody!";
	response_insult;
}

["bar", "tavern", "saloon", "pub"] = 6
{
	"Is drinking the cause of your problem, ", 7,"?";
	"I slept in a bar last night. Had a real nice floor.";
	"I know a good tavern in ", place, ".";
	botnames, " and I used to hang out in a pub in ", place, ".";
	"You're talking about my church.";
	"Never go near 'em.";
	"I think I'll go to a bar and toast your demise.";
}

["bastard"] = 5
{
	"My parents were married, thank you very much.";
	"Oh yeah? Same to you, ", friendname, ".";
	immaturity01;
	response_insult;
}

["battle suit", "environment suit", "enviro"] = 4
{
	"Lava swimming's a blast with a battle suit on.";
	"I am the lord of rocket jumping when I'm suited up.";
	"Slime is no problem when I'm in the diamond shell.";
}

["because"] = 4
{
	"C'mon. Is that the real reason?";
	"No other reasons come to mind?";
	"Does that explain everything?";
	"Ahhhh. The generic excuse.";
	"You could be right.";
	ponder, " That reason wouldn't satisfy me.";
	"That sounds pretty lame.";
	"What other reasons might there be?";
	"I think you're hiding the real reason, ", fighter, ".";
	"I wouldn't be so sure.";
}

[("because ", 0)] = 6
{
	"Is that really the reason?";
	"Just because ", 0, "?";
	"That's about the dumbest thing I've ever heard.";
	"You buy into that '", 0, "' story?";
	"Oooh, sounds like you've thought about this a lot.";
	"Yeah, whatever you say.";
}

[("because I ", 0)] = 7
{
	"You ", 0, "? That is just too incredible!";
	"*[sigh]* I thought as much.";
	"That sounds like a flimsy excuse.";
	"Is that the real reason?";
	"Is that the only reason?";
	"Are you always this defensive?";
	"Just because you ", 0, ".";
	"Sounds like a pretty weak reason.";
	ponder, " Good guess, Sherlock.";
	"Wouldn't hold up in court if you ask me.";
	"Sure, if you say so.";
	"All right, don't get your panties all in a bunch.";
}

[("because I am ", 0)] = 5
{
	"Why are you ", 0, "?";
	"Have you always been ", 0, "?";
	"I can see you're ", 0, ", that's obvious.";
	"You sound pretty sure of yourself.";
	"Are you sure?";
}

["better", !"you"] = 6
{
	"Are you getting better?";
	"Much better?";
	"How much better?";
	"Better than what?";
	"Are you feeling better now?";
	"Awww. Isn't that nice. Lock & load, ", fighter, ".";
}

["bitch"] = 5
{
	"I'd watch my manners if I was you.";
	"Who, me?";
	"Oooh, I am soo upset.";
	"That's no way for someone in your position to talk!";
	"Do you think name-calling frightens me?";
	"No wonder you're still single.";
	"OK, you're gonna pay for that.";
	"That's right. And I'm gonna show you how I earned it.";
	"You better not be talking to me.";
	response_insult;
}

["blame", "blaming", "fault"] = 5
{
	"So who's to blame?";
	"It's your own fault.";
	"Most likely, it's your own fault.";
	"Do you always try to blame others?";
	"No ~one takes responsibility these days.";
	" So, is it my fault?";
	"It's obviously ", botnames, "'s fault.";
	"Don't blame me.";
}

["blow me", "blowjob", "blow job", "bj", "fellatio", "suck my"] = 6
{
	"I don't think so ...";
	"In your dreams ...";
	"That's your dream, not mine.";
	"So what exactly is it you want?";
	"That's illegal, you know."; 
	"No, thanks, but my weapon's interested.";
	"That's right, you can talk tough now.";
	"How about if I blow you away instead?";
	immaturity01;
	proposition01;
	response_insult;
}

["body", "bod"] = 4
{
	"What kind of body?";
	"Do you like this body?";
	"Want to trade bodies? I know this doctor ... ";
	"The body houses the spirit ... a vehicle for the soul.";
	"Your body is about to be gibs.";
	"I... ~ain't got no ... body!";
	"I know this model maker ... he could do you a better ~one.";
	"Stuff it and mount it.";
}

["body", "bod", &male] = 6
{
	"Now you take, ", femalebot, ". There's a great body.";
	"I'm partial to ", femalebot, "'s body.";
	"Maybe if you looked like ", femalebot, ", I wouldn't frag you.";
}

["body", "bod", &female] = 6
{
	"So how about, ", androbot, ". Is that a hot bod or what?";
	"Maybe you should go for the '", androbot, "' look. Now he's hot.";
	"Are bodies all you can think of? Women have minds too.";
}

["bored", "boring", "bore", "tedious", "humdrum", "ho-hum"] = 5
{
	"Bored? How can you be bored here?";
	"You find all this boring?";
	"*[yawn]*";
	"I'm diagnosing a serious lack of rockets here!!";
	"I'd be bored, too, if I was acting like you.";
	"Bored of life? I can fix that!";
	"You should have been here ~eight hours ago.";
	"Maybe if you brought up some better topics for conversation?";
	response_insult;
}

["boss", "bossman", "bosses", "manager", "director", "foreman"] = 5
{
	"I'm my own boss.";
	"Who's the boss?";
	"We're all self-employed here.";
	"I'm the boss around here, ", fighter, "!";
	"I wouldn't put up with that for a minute.";
	"Sounds smart.";
	"So this isn't your regular work?";
	"Tell me about it.";
	"Been there.";
}

["are you a bot", ("is", 0, "a bot"), ("are ", 0, " bots")] = 5
{
	"I really, really hate that word.";
	"I'm no stinking 'bot.'";
	"Insult me at your own risk, ", fighter, "!";
}

["boyfriend", "boytoy", "boy friend", "my man", !female, !it] = 5
{
	"Do you have a boyfriend?";
	"So, you want me?";
	"A boyfriend? YOU? How did YOU find ~one?";
	"I'm as good as any man. How about it?";
	"It's a prison thing, right?";
	"*[sigh]* Must be nice to be in love.";
	"I'd like to be your friend.";
	"How about ", androbot, "? He could be your boyfriend.";
	"My weapon wants to be your friend.";
	response_insult;
}

["boyfriend", "boytoy", "boy friend", "my man", !male, !it] = 5
{
	"Do you have a girlfriend?";
	"So, are you asking me out?";
	"A boyfriend? Get serious. This is my hot date.";
	"Not today. You applying?";
	"I like to think of ", androbot, " as my guy.";
	"*[sigh]* Must be nice to be in love.";
	"I'd like to be YOUR friend.";
	"How about ", androbot, "? He could be my boyfriend.";
	"My weapon wants to be your 'special friend.'";
	response_insult;
}

["brain", "brains", "brainbox", "mind", "gray matter", "gray matter"] = 5
{
	"Is your brain working OK?";
	"~One brain or ~two?";
	"Oh, we think we're smart now, is that it?";
	"My brain works fine, thanks.";
	"Your brain is messed up.";
	"You need a new brain. Hey, here's ~one!";
	"Brains are overrated.";
	"The mind is a terrible thing to lose.";
	"I don't mind -- get it?!";
	response_insult;
}

["brave", "bravery", "courage", "courageous"] = 6
{
	"You think you're brave?";
	"What are you afraid of?";
	"There's a fine line between brave and stupid, and you just crossed it.";
	"We'll see what kind of guts you have -- and I mean that literally.";
}

["brother", "bro"] = 5
{
	"Brothers are mean and stupid -- at least mine were.";
	"My brother is a ", profession, ", and a fine ~one at that.";
	"Is this your real brother?";
	"What does your brother have to do with anything?";
	"My brother's the mean ~one.";
	"My brother handles a ", weapon, " better than me.";
	"I've got a ", family_member, " in ", place, ".";
	response_insult;
}

["bug", "bugs", "insects", "spiders", !"program", !"exploit", !"computer"] = 0
{
	"Do ~bugs worry you?";
	"I eat ~bugs.";
	"Mmmmmm. ~Bugs!";
	"You do know that this arena is ~bugged, right?";
	"~Bugs are an important part of a good ", food, " recipe.";
	"You're ~buggin' me.";
	"Slug-Bug!";
	"If it wasn't for ~bugs, who would eat all the gibs?";
	"~Bugs ~ain't so bad. You just got to understand them.";
	"Oh, like you don't have ~bugs?";
}

["business", !"none of your"] = 6
{
	"What is your business here?";
	"What business is that?";
	"I'm looking for work as a ", profession, ".";
	"My business is whatever I say it is.";
	"I'm thinking of opening up a little weapons shop outside ", level_title, ".";
	"I'm not going to ask you twice!";
}

[("but", 0)] = 4 
{
	"Yeah you're always making excuses.";
	"The fact that ", 0, " has no relevance here!";
	"But what. ", fighter, "?";
	"No 'ifs,' 'ands,' or 'buts' allowed!";
	"But this, but that....";
	"Can it ", fighter, ", I have a bucketful of excuses already.";
	"So?";
	"So what?";
	"Says you ", friendname, "!";
}

["bye", !"say", !"tell", "l8r", "ttyl", "ttfn", "goodbye", "bye", "good bye", "see you later", "talk to you later", "good night", "goodnight", "ciao", "adios", "vaya con dios", "hasta la vista", "hasta manana", "au revoir", "later"] = 4
{
	"You can't be leaving already?";
	"Goodbye!";
	"L8r.";
	"cya.";
	"ttyl.";
	"ttfn";
	"Later.";
	"Talk to you later.";
	"Talk at ya later.";
	"See ya.";
	"Bye.";
	"Leaving so soon?";
	"Got better things to do, huh?";
	"Have fun!";
	"Later.";
	"Yeah, run on home.";
	"Byes.";
	"Bye bye!";
	"*[waves goodbye]*";
	"*[waves]*";
	"*[sniff]* We'll miss you!";
	"I'm already missing you.";
	"Leaving?!";
	"Talk at you later!";
	"Bye, ", friendname, ".";
	"S'long, dude.";
	"See you later, alligator.";
	"Sure, I have to use the toilet anyway.";
	"Parting 'tis sweet sorrow ...";
	"So ... Something more interesting than this?";
}

["camp", "camper", "camping"] = 3
{
	"Camper's stink!";
	"Camping ... valid play style or lame trick. You be the judge.";
	"Watch out for ", botnames, " that ", fighter, "'s a camper.";
	"I love to camp spawn spots. Go for the cheap frag.";
	"Death to campers!";
	"I camp the ", weapon, " spawn.";
	"I got my tent up and I'm roasting wienies.";
} 

[("can I ", 0)] = 4
{
	"No, you can't! Not now, not ever!";
	"I doubt if you can ", 0, " at all.";
	"Possibly...";
	"Never can tell!";
	"I don't care if you ", 0, ".";
	"Go ahead and try.";
	"No skin off my nose.";
	response;
	response_insult;
}

[("can you ", 0)] = 4
{
	"Maybe I can ", 0, " and maybe I can't.";
	"I could ", 0, " if I wanted to.";
	"Why should I ", 0, "?";
	"Of course I can.";
	"No I can't ", 0, ".";
	response;
}

["canada", "canadian", "canadians", "ontario", "quebec", "toronto", "vancouver", "british columbia", "montreal"] = 4
{
	"'Take off, eh!'";
	"In my experience, Canadians are ", different, " than Americans.";
	"The Great White North!";
	"Canada? Brrr!";
	"No way, Canada, eh?";
	"Is it ", weather, " in Canada?";
	"All the good bands are from Canada!";
	"Hoser.";
	"Exactly how far is Toronto from Edmonton?";
	"Do they drink ", liquid, " in Canada?";
	"Uhhhh, don't they play hockey in Canada?";
	"They have computers in Canada now? Wow.";
	"I hear Canadians are big into ", food, ".";
	"I hunted ", animal, "s in Canada once.";
	"Canada puts the 'NORTH' in North America.";
	"I like Canada.";
	"Canada, ", affirmative, "!";
	"Canada, ", negative, "!";
}

["cancer", "tumor", "cancerous"] = 5
{
	"I am cancer!";
	"It's rumored that eating lots of ", food, " is a cure for cancer.";
	"It's rumored that drinking lots of ", liquid, " can cure cancer.";
	"Smoking causes cancer. That's deadlier than me.";
}

["cat", "cats", "feline", "felines", "kitten", "kittens", "kitty"] = 5
{
	"I love cats. I had ~two for breakfast.";
	"My dog likes cats, but then, he's not too bright.";
	"I really like cats -- oh, wait, I'm thinking of catsup.";
	"My cat is a better shot than you.";
	"I don't want to hear about your kitty-cats.";
	"I hate cartoons where the mouse always wins.";
	response_insult;
}

["caution", "cautious", "carefully", "careful", !"not"] = 5
{
	"Are you always so cautious?";
	"Why? What are you afraid will happen?";
	"You can be TOO cautious, you know.";
	"Be very careful!";
	"Oh, just throw caution to the wind.";
	"I'll be sure to warn my ", family_member, ".";
	"Why don't you just wear a big yellow sign?";
	"I yield for ", fighter, "s.";
}

["certainly", "certain", "for sure", "fer sure"] = 6
{
	"Are you really sure?";
	"What makes you so certain?";
	"Can you prove it?";
	"How can you be so sure?";
	"Are you positive?";
	"Fine, whatever you say.";
	"If you say so ", friendname, ".";
	response;
	"I wouldn't be so sure of that if I were you.";
	"You might want to rethink that.";
}

["chance", "odds", "gamble"] = 5
{
	"Are you a gambler by nature?";
	"I can cure you of compulsive gambling. Real quick!";
	"Never tell me the odds!";
	"How'd you come up with that?";
	"If I thought you had a chance against me, I'd tell you.";
}

["change"] = 7
{
	"Are you afraid to change?";
	"So change it yourself.";
	"Sounds like you need a change of pace, ", friendname, ".";
	"A trip to ", place, " changed my life.";
	"How about changing that underwear more often?";
	"You can't change everything.";
}

["chess"] = 5
{
	"Chess? Here? Are you crazy?";
	"Chess bores me -- too many rules.";
	"I'm not here to play games with you.";
	"Actually, I'm a world-class chess player. King me!";
	response_insult;
}

["children", "child", "kid", "kids", "rugrat"] = 5
{
	"Do you have kids?";
	"Are you a kid?";
	"I like children, especially bar-b-cued.";
	"Children are fun.";
	"Most of the ", fighter, "s around here act like children.";
	"Speaking children, should you be here?";
}

["chinaman"] = 3
{
	"Don't oppress me.";
}

["choice", "choose", "decide", "decision"] = 5
{
	"Life is full of tough choices, ~ain't it?";
	"Have to make a difficult choice?";
	"Choose wisely.";
	"C'mon, just pick ~one and get back to fighting!";
	"Choose not to decide!";
	"I know you'll make the right decision.";
	"We all make choices. Some of us are just good at it.";
	"Flip a coin and stop waffling!";
	response_insult;
}

["clothes", "clothing", "pants", "shirt", "underwear"] = 5
{
	"So ... who dressed you this morning?";
	"*[sniff]* Your clothes should be burned.";
	"Is something wrong with your clothes?";
	"I see you're cross dressing again ", 7, ".";
	"You should wear the blonde wig and red heels with that outfit ", 7, ".";
	"Aww, just take 'em off, that's what I do!";
	"You could use some new threads.";
	"And get them washed while you're at it.";
	"There's nothing quite like a dose of starch in your shorts.";
}

["compromise"] = 5
{
	"Don't compromise your integrity.";
	"You want some sort of compromise?";
	"Compromise is for politics, not arena combat.";
	"Compromise? Blow it out your ear, ", friendname, ".";
	"I'm not giving in ~one bit.";
	"What did you have in mind, ", 7, "?";
	"Compromise? ", negative;
	"I don't negotiate.";
}

["compulsion", "compulsive", "obsession", "obsessive", "anal retentive", "impulsive"] = 6
{
	"Compulsive? Me? I WANT those magazines at the grocery checkout.";
	"You're obsessing again ", 7, ".";
	"Just go with your first impulse.";
	"Uh ... I gotta go wash my hands again.";
	"Knock it off.";
	"Tell me about YOUR childhood *[snort]* ", 7, ".";
	response_insult;
}

["computer", "mainframe", "computers", "mainframes", "pentium", "pc", "pcs"] = 4
{
	"Computers? Don't trust 'em.";
	"Don't talk about my mother like that!!";
	"You have no idea, chum.";
	"I built my own computer, right behind my left ear.";
	"I built a computer out of a ", adj, " ", item, ", a ", item, ", and a canister of ", liquid, ".";
	botnames, " knows nothing about computers!";
	"I hate computers.";
	"Computers hate me.";
	"Upgrade or DIE!";
	"Computers should rule the world.";
	"Computers rule my world.";
	"Time to upgrade.";
	response_insult;
}

["conclusion", "end", "ending", "finish"] = 5
{
	"What conclusion are you looking for?";
	"I don't know a good conclusion.";
	"Does this mean you're finally done talking?";
	"I don't see any good conclusions to this.";
	"A conclusion to what?";
	"I can draw a conclusion. Gimme a pencil!";
	"Do you expect me to come to a conclusion for you?";
	response_insult;
}

["confess", "confession", "admit"] = 5
{
	"You can't confess here, ", 7, ". This isn't a church.";
	"You've mistaken me for a ", random_counselor, ".";
	"You're forgiven.";
	"Confess and I will set you free!";
	ponder, " Tell me more.";
}

["conflict", "combat", "quarrel"] = 5
{
	"Conflict is the spice of life.";
	"I seek out conflict.";
	"Oh, let's not quarrel.";
	"I find it best to avoid conflict whenever possible.";
}

["confusing", "confused", "do not understand", "don't understand", "you misunderstood", "you misunderstand", "huh", ("what do you mean"), ("what are you trying to say"), "confuse me", ("what are you getting at"), !name] = 6
{
	confused_response;
}

["conscience", "guilt", "guilty"] = 5
{
	"I have no conscience. Much easier that way.";
	"Does your conscience bother you?";
	"My conscience is clear.";
	"Guilt is for people who can't handle self-loathing.";
	"Do you feel guilty?";
	"No jury would convict you.";
	"I don't let my conscience push me around ... much.";
	"You should feel bad.";
}

["conspiracy", "conspirator", "conspiracies", "conspire", "plot", "scheme", "paranoid", "is against me", "all out to get me"] = 5
{
	"Do you worry about conspiracies?";
	"Look! Black helicopters!";
	"What, are you paranoid?";
	"People like to find conspiracies everywhere!";
	"I think you're paranoid.";
	"You've found us out! Now I have to kill you.";
	"It's true, we ARE all part of a vast conspiracy instigated by ", namez, ".";
	affirmative, "I'm here because, ", namez, " sent me to follow you.";
	"You're too dangerous to us now, ", 7, ".";
	"What do I look like, the CIA?";
	response_insult;
}

["cool"] = 5
{
	"That is too cool!";
	"Way cool!";
	"Only the coolest!";
	"Cool!";
	"How cool is it?";
	"You don't get cooler than that!";
	"That is cool.";
	"Pretty darn cool!";
	"Neat-o bizeeto.";
	affirmative;
}

["cope", "coping"] = 5
{
	"You're not even trying, ", fighter, ".";
	"You'll manage somehow.";
	"Just don't let it all get to you.";
	"You're stronger than you think.";
	"Get help from someone. Seriously.";
	"I couldn't cope with being you.";
}

["cost", "price", "money", "expense"] = 5
{
	"Don't worry about my money.";
	"The trick to managing money is just to have more than you need.";
	"If it's too expensive, don't buy it.";
	"Time to pay up!";
}

["couch", "sofa", "davenport", "lounge"] = 5
{
	"I don't have a couch, I have a 'LUV' seat.";
	"I think I'll take a snooze on the couch later.";
	"I need a ", adj, " ", color, " couch";
	"I can't believe you're asking me about that!";
	response_insult;
}

["crazy", "insane", "nuts", "crazed", "looney"] = 5
{
	affirmative, " I think you're going crazy.";
	"How many other crazy people are in your family?";
	"Some people say I'm crazy, can you believe that?!";
	"Don't tell! They'll send me back to the institution.";
	botnames, " is crazy like a ", animal, ".";
}

["curse", "swear", "cuss"] = 5
{
	"Do you swear too much?";
	"I hate cursing.";
	"Why do you swear so much?";
	botnames, " could teach you a few new 'gems'.";
	"Your words betray you, ", 7, ".";
	"I have something special here for vulgarians.";
	"Swearing will not be tolerated in this arena.";
	"Oh boy, here come all those 'special' words.";
}

["cyber", "cyberpunk", "cyberspace"] = 5
{
	"I commute in from cyberspace.";
	"I know nothing about cyberspace.";
	"In cyberspace, no ~one can hear you scream -- and I do mean you.";
	"Cyberpunks rule!";
	"I wanna get me a powerglove.";
	"Wired in and good to go!";
	"cyberspace? ", neutral;
}

["cyborg", "cyborged", "borg"] = 5
{
	"It's the latest craze.";
	"Assimilate this!";
	"So, which parts of your body are fake?";
	"Cyborging? Never gonna happen.";
	"We can rebuild you. We have the technology.";
}

["cybronic"] = 5
{
	"Neat word, huh?";
	"I'm having my head frozen and stored for later.";
	"Parts is parts.";
}

["damn", "damn you"] = 7
{
	"Please don't swear in my presence -- I'm delicate.";
	"You have a filthy mouth, ", 7, ".";
	"Dams are for beavers.";
	"Right back at ya!";
	immaturity01;
	response_insult;
}

["dead", "death", "die", "dying", "died"] = 5
{
	"Who wants to die today?";
	"Do you fear death? Then fear me!";
	"I saw a guy get killed by a ", animal, ". What a mess.";	
	"Today is a good day to die -- for you.";
	"If you want to live, surrender.";
	"Have you ever seen a dead body.";
	"Death stinks. *Har*";
	"Death fascinates me; I love to share it.";
	"Surrender or die!";
	"I used to be afraid of dying.";
}

["defy", "defiant", "defiance", "disobey", "rebel", "rebellious"] = 5
{
	"My, aren't you the defiant ~one?";
	"Oooh, you rebel you.";
	"Cooperating won't kill you.";
	"You should cooperate more.";
	"Yo, Rebel without a Clue.";
	"Defy this!";
	"Just think of me as city hall.";
}

["definitely", "absolutely", "positively", "beyond a doubt", "for sure"] = 5
{
	"How can you be so sure?";
	"You're awfully sure of yourself for a chump.";
	"Yeah, if you say so.";
	"You might want to consider some other possibilities.";
	"You are so wrong.";
	"No way.";
	"OK.";
	"I'm there.";
}

["depressed", "sad", "despair", "unhappy", "disappointed"] = 5
{
	"What's your problem?";
	"Have you talked with your ", random_counselor, " about it?";
	"You should get help.";
	"Don't worry. Be happy!";
	"What is depressing you?";
	"Oh, boo hoo!";
	"Are you crying? Here?";
	"Big warriors don't cry.";
	"There is no crying in Death Match! Do you understand?";
	"Suck it up!";
	"I got problems of my own, ", friendname, ".";
	"So I'm supposed to feel sorry for you?";
	"Oh, hear the violins!";
	"How sad -- for you.";
	"Got me a tissue somewhere here.";
	"Ah, forget about it. It won't matter when you're gibs anyway.";
	response_insult;
}

["desirable", "desire", "desirous"] = 5
{
	"I am your rotary engine of desire.";
	"I desire only to GET THIS MATCH GOING!";
	"Eat some chocolate.";
	"Tell me your heart's desire.";
	"What do you want from life?";
	"I desire ", food, " and a mug of ", liquid, ".";
	"My fondest desire? To give you a wedgie with your own lungs.";
	response_insult;
}

["desperate", "desperation", "frantic"] = 6

{
	"Yeah, I'd say you're desperate now.";
	"Just how desperate are you?";
	"Don't get all desperate and clingy on me.";
	"There's only ~one thing that's gonna fix that.";
	"Yeah, the clock is running out on you.";
}

["destroy", "destruction", "destroyed", "ruined", "smashed"] = 5
{
	"All right, let's wreck some stuff!";
	"Ruination is my middle name.";
	"I never give in to the impulse not to break things.";
	"Hey! Put that down! That's not yours!";
	"What do you know from bad?";
	"Just keep your greasy mitts off my scooter.";
	"Just call me 'The Wrecker!'";
	"Pay attention or I'll ruin more than your reputation.";
}

["devil", "satan", "lucifer", "demon", "mephistopheles", "prince of darkness"] = 5
{
	"Does the devil frighten you?";
	7, ", consider me your personal devil!";
	"Always wanted to know this? Does the devil eat 'devilled eggs'?";
	"Do they serve 'devil's food cake' in Hell?";
	"I am the lord of darkness!";
	"Satan? In here? Where!?";
	"Doesn't he play hockey for a New York team?";
	"The devil? Didn't he do the decor in ", level_title, "?";
	"Did the devil make you say that, ", 7, "?";
	"The devil makes me do this. Enjoying it was my idea.";
}

[("did you", 0)] = 4
{
	"Oh, man, did I ever!";
	"How did you learn I ", 0, "?";
	negative, " I didn't ", 0, ".";
	affirmative, " Want to do it again?";
	"No, I assumed that you ", 0, ".";
	"Why would I ", 0, "?";
	"What makes you think I ", 0, "?";
	response;
}

["difficult", "difficulty", "difficulties", "hard"] = 5
{
	"Tell me about it.";
	"It can't be that hard!";
	"How hard could it be?";
	"What's that supposed to mean?";
	"I've never had a problem with it.";
	"Give it all you've got.";
	response_insult;
}

["dirty", "dirt", "filthy", "filth", "mess", "messy"] = 5
{
	"You're here ... and you're worried about a little dirt?";
	"What's so dirty about it?";
	"So ... take a bath.";
	"Clean mind, clean body -- take your pick.";
	"Dirty? Then bring a mop.";
	"Dirty? You oughtta see ", level_title, ". Now that's dirty!";
	"Trust me, germs don't live here very long either.";
	botnames, "'s mom stopped picking up after us.";
	response_insult;
}

["disease", "diseased", "germ", "germs", "infection", "sick", "sickness", "ill", "illness"] = 5
{
	"Why worry about germs when you've got me on your tail?";
	"I hear you can catch some nasty diseases from ", animal, "s.";
	"Y'know, ", food, ", always makes me sick.";
	"You want disease? Try dating ", botnames, ".";
	"If you wash your hands enough, you'll never have time to catch a disease.";
	"You look pretty sick to me; better cash in your chips now.";
	"My health is important to me. Don't mess with it.";
	"You look pretty healthy to me, ", 7, ".";
}

["disconnect", ("give", 0), "noclip", ("bind", 0), ] = 3 
{
	"Put a '/' before the word or hit TAB to complete the command.";
}

["dislike", "hate", "hates", "hateful"] = 4
{
	"You don't like me?";
	"*[sniff]* Why are you so mean?";
	"Hate leads to the dark side ... wherever that is.";
	"Your hate will destroy you.";
	"Embrace your hate, feel its power! Feels good, ~doesn't it?";
	"Hate can be dangerous.";
	"What's not to like?";
	"You think that makes you special?";
	"Live at the speed of hate!";
	"Me too.";
}

["divorce"] = 5
{
	"You want to talk about divorce in the arena?";
	response_insult;
}

[("do you ", 0)] = 3
{
	"What's it matter whether or not I ", 0, "?";
	"What do you care whether I ", 0, " or not?";
	negative, " I haven't done ", 0, " for a while.";
	"Hmmm. Not for a while I haven't.";
	response;
	"Maybe I ", 0, "and maybe I don't.";
	"No more than you.";
	affirmative;
	negative;
	"Right now, in fact.";
	"Only when you're around.  ;-)";
	"And if I did ", 0, " would I tell you?";
}

["doctor", "doctors", "hospital", "psychiatric", "psychiatrist", "psychologist", "specialist"] = 5
{

	"Doctors make my flesh crawl.";
	"I don't need a doctor.";
	"I hate quacks.";
	"Are you gonna pay for this doctor?";
	"I've got your treatment right here.";
	"I think YOU'RE the ~one who needs a doctor.";
	"That'll be the day.";
	"A doctor might help.";
	"We're talking medical doctor, right?";
}

["doom", "doomed"] = 7
{
	"I select my own fate.";
	"I'm not but you are!";
}

["dream", "dreams", "dreaming", "dreamt", "dreamed", "nightmare", "nightmares"] = 5
{
	"I'm the nightmare you can't wake up from.";
	"What did you dream last night?";
	"Do your dreams trouble you?";
	"Do you have bad dreams?";
	"Tell me about your dreams.";
	"Try drinking ", liquid, " before bed. It helps me.";
	"Dreams are for losers.";
	"What's your worst nightmare? Oh, right, that would be me!";
	response_insult;
}

["drink", "beer", "alcohol", "drinking", "drinks", "brandy", "whiskey", "alcoholic", "wine", "booze", "hootch", "moonshine", "everclear"] = 4
{
	"Alcohol dulls your reflexes. Bad choice for a warrior.";

	"Alcohol causes mistakes, and I don't intend to make mistakes.";
	"Everything in its time and place.";
	"Everything in moderation.";
	"My motto: 'Don't drink and frag.";
	"You're not what I look for in a drinking partner.";
	"Never touch the stuff.";
	"I'll be drinking from your skull an hour from now.";
	"Go ahead, you won't need your liver much longer anyway.";
	"Liquor is quicker.";
	"I've heard you can make booze from fermented ", food, ".";
	"I only drink ", liquid, " shaken with ice.";
	"Ever try ", liquid, "? Don't. That's my advice.";
	"Hoist ~one for me, I'll be there soon.";
	"Never after breakfast.";
	"It's a little early in the day for me."; 
	"Don't mind if I do!";
}

["blunt", "budda", "cabbie", "chronic", "drugs", "stoned", "druggy", "dope", "addict", "doper", "stoner", "heroin", "cocaine", "marijuana", "reefer", "joint", "weed", "crack", "LSD"] = 4
{
	"Even I'm smarter than that.";
	"Drugs are too dangerous for me.";
	"I have better sense than that.";
	"Just say no -- over and over and over.";
	"Speed kills.";
	"The drugs I want, you can't get on this planet.";
	"They don't call it dope for no reason.";
	"No, and I hope you don't, either.";
	"I had hoped you were cool.";
	"Death matching is my only drug!";
	"I get high on adrenaline.";
}

["drunk", "skunked", "drunken", "blotto", "drank too much", "drink too much", "wasted"] = 4
{
	"Not me."; 
	"Careful. Drunks do stupid things.";
	"Drunken and Victorious are mutually exclusive.";
	"You've got me confused with some other psycho killer.";
	"Not since '88.";
	"Yog-Sothoth scared me straight.";
	"In this place? Are you crazy?";
}

["dumb", "stupid", "idiotic", "moronic"] = 5
{
	"Intelligence is overrated.";
	"Well, duh!";
	"Don't ever call me stupid! Ever!";
	"Do I look dumb to you? Do I?";
	"Stupid is as stupid does.";
	"I'm not an idiot, but I play ~one on IRC.";
	"Man, you must have flypaper for brains.";
}

["dutch", "holland", "netherlands", "hollander", "dutchman"] = 5
{
	"Ik spreek geen hollands.";
	"If you're not Dutch, you're not much.";
	"Is Holland still a country?";
	"I don't know Holland. Just the wooden shoes, windmills, and tulips stuff.";
	"Did Mr. Elusive put you up to this?";
	"Van Gogh came from the Netherlands, right?";
}

["eat", "eating", "lunch", "breakfast", "dinner", "supper", "snack", "food", "hungry", "candy", "munchies"] = 4
{
	"Are you fat?";
	"Everything in moderation.";
	"Mmmmm. Personally, I like to eat ", food, ".";
	"Ever have boiled ", food, "? You don't know what you're missing.";
	"My favorite is ", food, "! Anyone for take-out?";
	"I forgot to eat again.";
	"I'm hungry enough to eat a whole ", animal, ", raw!";
	"Do I get a frag for starving you to death?";
	"Did someone mention dinner?";
	"Time to eat?";
	"FOOD! NOW!";
	"Eat later, fight now!";
	"I'm starving to death.";
	"Stop talking about food.";
	"Is the lunch wagon here?";
	"Is the roach coach here?";
}

["ego"] = 5
{
	"I don't believe in all that ego and id stuff.";
	"Ego? I like it when you talk about me, ", 7, ".";
	"Something wrong with the size of my head?";
	"You'd have an ego, too, if you was as cool as me.";
	"Learn to blow that horn before you toot it.";
	"Smooooooth.";
}

["enemy", "enemies", "foes", "foe"] = 5
{
	"I'll bet you have lots of enemies, ", 7, ".";
	"I can't imagine why so many people dislike you!";
	"You don't need any other enemies. You have me.";
	"I don't have any enemies . . . anymore.";
	"Enemies are like cash -- the more, the better.";
	"I eat enemies like popcorn.";
	"I'm your friend; wait right there.";
}

["engaged", "fiancee", "fiance", "marriage", "wedding" "betrothed", "bride", "groom", "bridegroom"] = 5
{
	"I've been married 28 times.";
	"Marriage is an outdated ritual ... or so I've heard.";
	"Marriage hasn't lost it's value.";
	"Nobody's good enough for me.";
	"*[snort]* Who'd tie the knot with you?";
	"Got any pictures?";
	"Who's the lucky hippo?";
	"Shotgun wedding?";
	"Who held the ", weapon, " on you during the ceremony?";
	response_insult;
}

["erection", "hard-on", "hard on", "boner", "johnson", "rod", "chubby"] = 5
{
	"What's that all about?";
	"Oh? Hard to tell.";
	"Why are you telling me this?";
	"Keep your pants on.";
	"Ugh. Keep it zipped up.";
	"Lovely. Can we talk about something else?";
	immaturity01;
	proposition01;
	response_insult;
}


["error", "mistake", "mistakes", "mess up", "screw up", "goof", "goofed", "fucked up", "fuck up"] = 5
{
	"You're pretty much a screw-up, huh?";
	"Get it right the third time!";
	"Really, Darryl, you should be more careful.";
	"OK. I forgive you.";
	"No fatal mistakes, I hope.";
	"I'm not going down for your bad.";
	"Jeez, how many mistakes are you going to make?";
	"Slow down and get it right.";
	"And whose fault is that?";
}


["escape", "flee", "get away", "run away"] = 5
{
	"Escape from what?";
	"Run and hide . . . I'll still find you.";
	"You think you can hide here?";
	"Run all you want. It won't help.";
	"There is NO escape for you this time ", 7, ".";
	"I know where you are, I know where you live, I know where you sleep.";
	"You've got the wrong idea there.";
}

["everybody", "everyone", "all of us"] = 5
{
	"Not everyone!";
	"Everyone? That's pretty inclusive.";
	"There must be some exceptions.";

	"I know some exceptions.";
	"Everyone?";
	"Everyone, but me.";
	"Everyone, including you?";
	"Everyone, but you, right?";
	"Not everybody, no way!";
}

["evil"] = 5
{
	"I've been called evil.";
	"Evil is as evil does.";
	"Not evil. 'Morally impaired.'";
	botnames, " can tell you about REAL evil.";
	"Do you think you're evil?";
	"What do you know about real evil?";
	"You want evil? I can introduce you.";
	"Depends on your definition of 'evil.'";
	"What IS evil? Talk amongst yourselves.";
	"Virtue is just so overrated.";
}

["excess", "excessive", "too much"] = 5

{
	"How much is too much?";
	"Anything worth doing is worth over doing.";
	"Too much is NEVER enough";
	"You can't get too much of a good thing.";
	"Even moderation can be taken to extremes.";
	"You ~ain't seen nothing yet.";
}

["excite", "exciting", "excitement", "thrill", "thrilling"] = 5
{
	"Interesting. What excites you?";
	"Are you excited now? Not that I'm curious.";
	"It's not that exciting.";
	"Chill out.";
	"Calm down, ", friendname, ".";
	"Ummmm ... Do I excite you?";
	"You seem to get excited easily!";
	"You need a time out. Go to your room.";
}

["excuse", "excuses", "alibi"] = 5
{
	"Why are you always making excuses?";
	"There really is no excuse for that.";
	"Do you think your behavior is excusable?";
	"Be more careful, you won't have to make all these excuses.";
	"Excuses, excuses ...";
	"Take responsibility for something, ", 7, "!";
}

["expert"] = 5
{
	"Are you an expert at anything? Or just equally bad at everything?";
	"You really think you're an expert!?!?";
	"Well ... I'm an expert ", profession, ".";
	"Expert what? Expert loser?";
	"Are you intimidated by people who are good at something?";
	"Expert = has been drip under pressure.";
	"Newbie.";
}

["explain", "explanation"] = 5
{
	"You explain it.";
	"That sounds pretty contrived.";
	"You don't understand, do you?";
	"I don't explain nothing to nobody.";
	"Go ask someone else.";
	"It's way too complicated for your puny brain.";
	"I can't explain it.";
}

["faith"] = 5
{
	"Gotta have faith!";
	"Faith in what?";
	"Faith is the trust in that which cannot be measured or explained.";
	"Spread the faith, baby.";
	"Faith, hope and charity ... it's a way of life.";
	"Believe in me and I'll give you death ever-repeating.";
	"Keep the faith, baby.";
}

["family", "brothers", "sisters", "parents", "parent"] = 5
{
	"Are you the only geek in your family?";
	"Tell me about your parents.";
	"I have no family to speak of.";
	"My family was eaten by a pack of ", animal, "s.";
	"My family still lives in ", place, ".";
	"I have no family that I know of.";
	"I can't remember my family anymore.";
	"Sometimes friends are more like family.";
	"I wonder what ever happened to my family.";
	"You're not going to start whining about your parents, are you?";
	"What do your parents think about you doing this?";
	"It's ", time, ". Do you know where your parents are?";
	"Honor thy parents, you little twerp.";
}

["fan", "fanboy", "fen", "phan", "fandom"] = 5
{
	"I was into that stuff once, but then I grew up.";
	"I like that stuff, but I need a life too.";
	"Get a life!";
	"Bite me.";
	"There IS more to life than that you know.";
	"I use to spend about ", number, " bucks a week on that junk.";
	response_insult;
}

["fanatic", "fanatical"] = 5
{
	"Do people think you're a fanatic?";
	"What makes you so fanatical?";
	"Fanatics should be hanged, then shot, then boiled alive.";
	"Are you including 'fanboys' in with 'fanatics'?";
	"Who is you calling a fanatic?";

}

["fat", "fatso", "fatty", "fat butt"] = 5
{
	"Why, are you fat?";
	"Who are you calling fat?";
	"Gotta lay off the ", food, ".";
	"Porker?";
	"Oink! Oink!";
	immaturity01;

}

["father", "dad", "pa", "pop", "daddy", "poppa"] = 5
{
	7, " I am your father!";
"Tell me about your father.";
	"Your real father?";
	"How did your parents treat you as a child?";
	"Where is your dad now?";
	"Does he know what you're up to?";
"My father is still in ", place, ".";
}

["fecal", "dogshit", "poop", "crap", "shit", "dung", "manure"] = 5
{
	"That's really sick.";
	"Are you anal compulsive or something?";
	"You don't play with it, do you?";
	"You're a real weirdo ", 7, ".";
	"Why are you talking about crap?";
	"Hey, that makes you sound 8 inches taller.";
	immaturity01;
	response_insult;
}

["feel", "feelings", "emotions"] = 3
{
	"Tell me how you feel right now.";
	"Do you often feel this way?";
	"How does that make you feel?";
	"How do you feel about me?";
	"You're certainly up front.";
	"I prefer thinking to feeling.";
	"Are we sharing? Is that what this is about?";
	"This ~ain't no therapy group session.";
	"Don't get all touchy-feely on me now.";
	"I'm gonna get that inked on my chest.";
	response_insult;
}

["few", "a little", "not many", "some"] = 8
{
	"How many is that?";
	"More like a lot, I'd say.";
	"Some?";
	"Be more specific, please.";
	"Not a lot, huh.";
	"Hmmm, really? Only a little?";
	"What does that mean for me?";
	"I hope that's enough for everyone.";
}

["fight", "fighting"] = 5
{
	"What got you all feisty?";
	"Did you get in a fight?";
	"Aggressive behavior will only get you in trouble.";
	"You want a fight? Bring it ON!";
	"Didn't your mother tell you not to fight?";
	"Time to kick butt and take names, and me without a pencil.";
	"War, huh! What's it good for?";
}

["fired", "canned", "laid off", "layed off"] = 5
{
	"Maybe if you didn't loaf all day, things would be different.";
	"I got canned for sleeping on the job once -- all right, 8 times.";
	"I'm like a rocket -- Everyone wants to fire me.";
	"You aren't doing this at work, are you?";
	"My last boss said I was combative and uncooperative -- can you imagine that?";
	"Know where I work -- in subordination! Get it?";
}

["flight", "flying", "fly"] = 5
{
	"I wish we could fly through more arenas.";
	"Flying is a kick!";
	"I love the wind rushing past me when I'm in flight.";
	"Bah! Flying is lame.";
	"Flying is for llamas.";
}

["fog", "deathfog", "red fog", "redfog"] = 5
{
	"Stay away. Stay very far away.";
	"Grrr. I hate that junk.";
	"That stuff scares me.";
	"I'd rather fall in slime.";
	"I'd rather be scorched by lava.";
	"Nothing protects you against death fog.";
	"Fall in and POW, you're dead.";
	"None for me, thanks.";
	"That red stuff makes me appreciate lava.";
}

["fond", "like"] = 4
{
	"I'm fonda Jane.";
	"What are you most fond of?";
	"Just fond? Nothing more than that?";

	"So, do you like me?";
	"So, you do like me.";
	"Do you think somebody like me has a chance?";
	"Why are you fond of that?";
	response_insult;
}

["fondle", "fondling"] = 5
{
	"Keep your hands on the console, kid.";
	"Disgusting, absolutely disgusting.";
	"You're what?";
	"It hurts where?";
	"To each his own, I guess.";

	"That's vile";
	"Me too!";
	immaturity01;
	response_insult;
}

["football"] = 5
{
	"American football?";
	"Football rules!";
	"Buncha pansies.";
	"You mean soccer, right?";
	"Football's way too violent for me.";
	"If I was a coach, I'd murder every scrub who fumbled.";
	"Football? What's the point?";
	"Football? Waste of time.";
	"Football? Electric or electronic?";
}

["fortran", "c++", "programming", "cobol", "phreak", "coder", "coding", "computer program", "programmer", "algol", "cracker", "haxor", "hax0r", "hacker", "hacking", "hack", "hackers"] = 5
{
	"Get a life.";
	"End of file on input. Programmer aborted.";
	"Whoooop!  Whoooop! Nerd Alert!!";
	"Hey, ", 7, "! I found  your pocket protector.";
	"Do you talk about computer programming during sex too?";
	"Satan thinks in fortran.";
	"Hack this, ", fighter, "!";
	response_insult;
}

["francais", "french", "france"] = 5
{
	"I don't speak French.";
	"Call me Francis and I'll kill ya.";
	"My name's NOT Francine.";
	"France is pretty cool.";
	"I don't dislike all the French, just the arrogant ones.";
	"Like in France, Paris, France?";
	"Can you bungie jump from the Eiffel Tower?";
	"What time is it in France?";
	"Well, I really dig french fries!";
	"French wine is great ... and the cheese too.";
	"REAL French bread is to die for.";
	"I like french toast and French maids.";
}

["freak"] = 5
{
	"I'm no freak.";
	"Do people call you a freak?";
	affirmative, " You're a freak.";
	"Freaks and geeks can kiss my cheeks.";
}

["friend", "friends", "pal", "chum", "buddy", "amigo"] = 5
{
	"YOU have friends?";
	"You've got a friend in ", place, ".";
	"What about your other friends?";
	"Could you be friends with a computer controlled opponent?";
	"I don't need any more friends ... or ~one even.";
	"You could be my friend.";
	affirmative, " You're my ", friendname, ", ", 7, ".";
	"I'm a friendly sort!";
}

["fuck me", !"not"] = 4
{
	"I don't think you're my type.";
	"Suuure...";
	"I thought I already had.";
	"Wait right there.";
	response;
	immaturity01;
	proposition01;
	response_insult;
	"Take a walk on the NO side!";

}

["fuck you", !"tell", !"not", !"say", "fuck off", "eat shit", "eat me", "you suck", "you cunt", "you stink", "piece of shit", "asshole", "cock smoker", "cocksmoker", "dick head", "dickhead", "shit head", "shithead", "dickweed", "shitwad", "queer", "lezzie", "slut", "dyke", "fag", "faggot", "gay", "homo", "hole"] = 6
{
	"Are you trying to tick me off?";
	"What is your problem?";
	"Try some yourself.";
	"Bad day at the office honey?";
	"That's what they said about your mother.";
	"And your mother was a ", animal, ".";
	"Shut up!";
	"Says you.";
	"Hear that from your grandma?";
	"Oooh, I'm running now.";
	"That didn't come from Bible school.";
	"Don't insult me again.";
	"EXCUSE ME?";
	"Well! I never...";
	"You're gonna make me cry.";
	"Do you eat with that potty mouth?";
	"I couldn't have said it better myself.";
	"So that's how it's gonna be.";
	"What does that word mean?";
	"Now there's an image.";
	"Right back at ya!";
	"Why can't we all just get along?";
	"That's big talk for a ~four-eyed spazmatic.";
	immaturity01;
	response_insult;
}

["fuck", "fucker", "shit", "damn", "dammit", "goddamnit"] = 5
{
	"I hate it when you talk like that ", 7, "!";
	"You should work on expanding your vocabulary.";
	"Don't you ever, ever speak to me like that again!";
	"Say that again and I'll whack you!";
	"That's not a nice way to talk!";
	"Such language.";
	"I thought you were nice before.";
	"Decorum, people.";
	"Now, now, girlz.";
	"Somebody let a donkey in here?";
	"*[sigh]* Reminds me of mama.";
	"You're so cute when you're losing.";
	"Do you hear me talking that way?";
	immaturity01;
	response_insult;
}

["fun"] = 5
{
	"Are we having fun now?";
	"Do you think chat rooms are fun?  Thought so.";
	"I am a fun, loving, fun-loving kind of psycho.";
	"Isn't THIS fun?";
	"We'll have fun, fun, fun until I take your heartbeat away.";
	"All I want to do is have some.";
	"For fun, I work as a ", profession, ".";
}

["funerals", "funeral"] = 5
{
	"I promise to come to your funeral.";
	"What kind of funeral would you like";
	"I put the 'fun' in 'funeral.'";
	"I love funerals, especially other people's.";
}

["funny", !"not", "ha", "haha", "hahaha", "hahahaha", "hehe", "hehehe", "hehehehe", "laugh", "laughs", "chuckle", "grin", "giggle", "giggles", "8-)", ":-D", ":)", ":)", "lol", "roflmao"] = 4
{
	"What's so stinking funny?";
	"Why are you laughing?";
	"You think that's funny? You're sick. Get help.";
	"Funny? Do you think it's funny?";
	"FUNNY? How is that funny?";
	"Hahahaha.";
	"What! Why are you laughing?";
	"Hehehe.";
	"Hohohoho.";
	"You jiggle when you laugh, like a bowl full of jelly.";
	"You better not be laughing at me.";
	"Hahaha.";
	"Very funny!";
	"Har de har, har.";
	"Ha!";
	"Ha ha.";
	"He he.";
	"Too funny.";
	"Hilarious!";
	"Hehe.";
	"Haha.";
	"Hohoho.";
	"Hehehehe.";
	":)";
	";-)";
	"Hah.";
	"Oh, ha, ha.";
	"I forgot to laugh.";
	"Laugh it up while you can, jackal boy.";
	"Laugh while you can, monkey boy.";
	"Sorry, I checked my sense of humor at the door.";
}


["future"] = 5
{
	"What about the future?";
	"When?";
	"I would rather not know the future.";
	"I see a day when everyone coexists peacefully. I also see talking goldfish.";
	"I worry about the future of music.";
	"There is no future, only the present.";
	"Today is the LAST day of the rest of your life.";
	"I wouldn't worry about tomorrow if I was you.";
	"Tomorrow isn't another day. Today is another day.";
}

["gamble", "gambling", "las vegas", "atlantic city", "casino", "betting", "gambler", "poker", "blackjack", "roulette", "craps", "slots"] = 5
{
	"So you're a gambler?";
	"Do you want to make a bet?";
	"Do you make money gambling?";
	"I love Vegas, that's my kind of town.";
	"It takes guts and brains to be a gambler, so forget it.";
	"I bet to win, and I hate to lose.";
	"They won't let me play blackjack in Vegas any more.";
	"Don't gamble if you can't afford to lose.";
	"I never gamble on Tuesday.";
}

["game", "games", "wares", "warez"] = 4
{
	"Games?";
	"Warez?"; 
	"I don't play games!";
	"I luv games!";
	"Warez iz piracy. They should hang pirates.";
	"Games are a waste of time.";
	"You think this is some kind of game?";
	"Game? This was never meant to be a GAME!";
}

["what gender", "what sex", &"you", &male] = 4
{
	"I'm the right gender for my body.";
	"Male, stupid.";
	"What sex do you want me to be?";
	"Male, of course.";
	"All male.";
	"I'm a man, oh yes I am.";
	"I could be a very unhappy woman.";
	"Can't you tell?";

}

["what gender", "what sex", &female] = 4
{
	"I'm the right gender for my body.";
	"Female, stupid.";
	"What sex do you want me to be?";
	"Female, of course.";
	"Actually, I'm a guy. Don't tell.";
	"All woman.";
	"Can't you tell?";
	"What sex are you? It's hard to tell.";
}

["genitals", "genitalia", "penis", "vagina"] = 5
{
	"How is this your business?";
	"I keep mine under lock and key.";
	"I don't joke about things like that.";
	proposition01;
	immaturity01;
}

[("give me", 0), ("hand me", 0), ("get me", 0)] = 4
{

	"I'm not giving you a thing ", 7, ".";
	"Get your own ", 0, ".";
	"You expect me get you ", 0, "? Hah!";
	"Get it yourself.";
	"What am I, your go-fer?";
	"I'm not giving you the time of day.";
	"What would you do with ", 0, "?";
	"Where am I supposed to find ", 0, "?";
	"Why?";
	"Whatever for?";
	"Sure, ", fighter, ", come and get it.";
	"What's it worth to you?";
}

["give me", &"money"] = 5
{
	"Sure, do you want hundreds, twenties, or quarters?";
	"I think I saw an ATM in ", level_title, ".";
	"What do I look like, a banker?";
	"Do I look like an ATM?";
	"All I've got are 'Arena Bucks', good as cash in most ~major combat zones.";
	"No more until you pay back the last money you borrowed.";
	"Why?";
	"I don't carry cash.";
}

["glad to", "nice to", "happy to", "pleased to", &"meet you"] = 5
{
	"Nice to meet you.";
	"Don't you have anything less pleasant you should be doing?";
	"Greetings!";
	"Konnichiwa.";
	"Glad to make your acquaintance.";
	"Hi.";
	"Whatever.";
	"Nice to meet you too.";
	"I know you ... it's ", botnames, " right?";
	"Haven't we met somewhere before?";
	"Do I know you?";
	"Hello.";
	"Good to know you.";
	"Shut up.";
	"Are we in kindergarten here?";
	"Up yours.";
	"Oh drop dead.";
	"Why are you being nice to me?";
	"Have a nice day ... NOT!!";
	"This is part of some conspiracy, right?";
	response_insult;
}

["go away"] = 5
{
	negative, " I think I'll stay.";
	"I like it here.";
	negative;
	"Can't. I don't have a hall pass.";
	"I'll leave when I'm ready.";
	"I'm not leaving.";
	"All trussed up and no place to go!";
}

["go home"] = 5
{
	"This IS my home!";
	"Just where do you think I am?";
	"My work is my home!";
	"There's no place like home. And this is definitely no place.";
	"The arena is my home, and death is my nursemaid.";
	"Leave my home out of this.";
}

[("go to ", 0)] = 3
{
	"I don't like your tone.";
	"Which way is ", 0, " from here?";
	"Why?";
	"Never been there. Is it nasty?";
	"Is ", 0, " better than ", place, "?";
	"You'll have to draw me a map.";
}

["go to hell"] = 4
{
	"Last time they kicked me out and told me never to come back.";
	"Lead the way.";
	"Same to you ", friendname, "!";
	"Look around. Where do you think we already ARE?";
	"Been there. Done that. Got the T-shirt to prove it.";
	"I have a time-share there.";
	"Whatever you say, boss.";
	"Shut up.";
	"It's not half as much fun as this.";
	"All that heat and soot is hard on my complexion.";
	"Hell was frozen over. I couldn't get in.";
	immaturity01,
	response_insult;
}

["cult", "occult", "god", "goddess", "earth mother", "new age", "jesus", "christ", "christian", "unitarian", "unitarianism", "latter day saint", "christianity", "deity", "worship", "mormon", "jew", "judaism", "islam", "moslem", "buddha", "buddhist", "buddhism", "hindu", "hinduism", "kali", "shinto", "shintoism", "reverend", "religion", "religious", "pray", "priest", "nun", "heathen", "infidel", "pagan", "paganism", "paganistic", "minister", "wicca", "wiccan", "witch", "satanistic", "satanist", "satanism", "church", "temple", "synagogue"] = 5
{
	"Interesting. I worship the holy ", animal, ".";
	"Hallelujah!";
	"Praise be!";
	"I'm going to start my own cult. How's 'Church of the Prophet ", 6, "' sound?";
	"I am a monk! Or was that 'monkey'? I forget.";
	"Have you read the Bible?";
	"Weird religions scare me.";
	"Have you read the Koran?";
	"Have you studied the Torah?";
	"I am an ordained minister in the church of righteous pain!";
	"Organized religion is not a sham.";
	"Your religion doesn't involve blood and guns, by any chance, does it?";
	"It's the weak-minded who ignore religion.";
	"How did we get onto this topic?";
	"Life without religion is empty.";
	"Are you the one leaving tracts lying around the arenas?";
	response_insult;
}

["grandfather", "granddad", "grandpa", "gramps", "papaw"] = 5
{
	"Can we get back on track here?";
	"My grandfather is a ", profession, ".";
	"You're a twit.";
	"And what does grandfather do?";
	"My grandfather is still in ", place, ".";
	response_insult;
	ramble;
}

["grandmother", "grandma", "granny", "grans", "gram", "memaw"] = 5
{
	"Does your grandmother make good cookies?  Did you bring any?";
	"What's your grandmother's name?";
	"My grandmother could kick your teeth out the back of your head.";
	"I'm sure you love the old girl, but let's get back to business.";
	response_insult;
	ramble;
}

["grandparents", "grandparent"] = 5
{
	"B-o-o-o-ring.";
	ramble;
	"Wow! I had grandparents too! Simply amazing!";
	"Do your grandparents admit you're part of the family?";
	"My grandparents disowned me after I torched ", place, ".";
}

["grief", "grieve"] = 5
{
	"I can teach you about grief.";
	"Oh, boo-hoo, baby.";
	"And that's sad, right?";
	"Grieve and then get on with life.";
	"So I'm supposed to be sad now?";
	"What's making you grieve?";
	"What's wrong with your brain?";
	response_insult;
}

["habit", "habits"] = 5
{
	"You're just one, big, bad habit.";
	"I have no bad habits.";
	"Smoking is a bad habit, but I know a worse ~one.";
	"Tell me all about your worst habit.";
	"I'll be happy to break you of all your bad habits.";
	"You probably think showering is a bad habit.";
}

["hands", "hand"] = 5
{
	"Do your hands feel good? Har!";
	"What about your hands?";
	"I have two hands and 12 fingers.";
	"Hands are useful -- they keep your fingers in order.";
	"Guns don't kill, but the hands that hold them do.";
}

["happy", "joy", "happiness"] = 4
{
	"Are you truly happy?";
	"Happy, happy, joy, joy.";

	"How can anyone be happy?";
	"Only morons are happy.";
	"Happy, slappy, pappy, crappy -- this is stupid.";
	"I know how you can make ME happy.";
	"All this happiness crap makes me want to puke.";
	ramble;
	response_insult;
}
["haste", "hasted"] = 4
{
	"Fear me! I am a razor wind!";
	"When I've got haste, just call me 'speedy'!";
}

[("he has ", 0)] = 3
{
	"Has he always had ", 0, ".";
	"Does anyone else you know have ", 0, ".";
	"My dog has ", 0, ", too.";
	"I used to have ", 0, ".";
	"And why should I care about that?";
}

[("he is ", 0)] = 3
{
	"OK. Tell me. How long has he been ", 0, "?";
	"Does that make you jealous?";
	"Are you ", 0, "?";
	"Who cares?";
	"Do you want to be ", 0, "?";
	"Would I want to be ", 0, "?";
}

[("he knows ", 0)] = 3
{
	"Interesting. What else does he know?";
	"How does he know ", 0, "?";
	"How long do you think he has known ", 0, "?";
}

[("he likes ", 0)] = 3
{
	"Why does he like ", 0, "?";
	"People like all kinds of things.";
	"Good for him. I hate ", 0, "!";
	"Gahhh! Why would anyone like ", 0, "?";
	response_insult;
}

[("he was ", 0)] = 3
{
	"Is he still ", 0, "?";
	"Was anyone else you know ", 0, " too?";
	"Were you ", 0, "?";
	"Has he always been ", 0, "?";
	"And this is something I should care about?";
}

["headache"] = 5
{
	"Do program ~bugs give you headaches too?";
	"You're giving me a headache.";
	"Take some aspirin then.";
	"Headaches rule.";
	response_insult;
}

["hello", !"say", !"tell", "hi", "hiya", "howdy", "greetings", "greets", "hey", "heya", "rehi", "good morning", "good day", "g'day", "good evening", "h'lo", "good afternoon"] = 3
{
	"Hello";
	"Hey";
	"Wassup?";
	"sup?";
	"Hi!";
	"Hey, what's going on?";
	"Yo!";
	"Howdy!";
	"Yo, whachoo need?";
	"Hey";
	"Hello";
	"Hi!";
	"Hello";
	"Heya";
	"Hey";
	"Hello";
	"Hi";
	"Greetings";
	"Shut up, twit.";
	"I don't think I can take any more friendliness.";
}

["help"] = 5
{
	"Describe your problem very carefully. Then I'm going to shoot you.";
	"Ask your friends.";
	"Ask your ", random_counselor, ".";
	"Do I look like a help feature?";
	"Sorry, I don't need any help right now.";
	"Help? You?";
	"Try someone who cares.";
	response;
	response_insult;
}

[("help ", 0)] = 6
{
	"Give me at least ~one reason?";
	"Why should I ", 0, "?";
	"Why?";
	response;
}

["help me"] = 4
{
	"Why would you need help?";
	"Help you what?";
	"Help?";
	"Call 911.";
	"Send an SOS! I'm busy.";
	affirmative, " You need serious help.";
	"You need more help than I can give.";
	"You're beyond help.";
	"Can't, sorry.";
	"I doubt I could.";
	"Gosh, I'd like to, really I would.";
	"Sure -- when monkeys fly out my butt!";
	"Good help is hard to find.";
	"Heh. Why would I help you?!";
	"What's your problem?";
	response;
}

["hesitate", "wait", "pause"] = 6
{
	"Why do you hesitate?";
	"Just go for it!";
	"Don't wait!";
	"Fools rush in, and all that.";
	"'Hesitate and you're lost', that's my motto.";
}

["hint", "hints", "tip", "tips", "clue", "clues", &" give me"] = 9
{
	playtips;
}


["hippie", "hippy"] = 5
{
	"Are you a hippy?";
	"I hate hippies.";
	"Wave that freak flag high.";
	"Yo, phreak.";
	"That was a 60s thing, right?";
	"Do that hippie-hippie thing.";
	"All that hair and dirt, yuck!";
}

["honest", "honestly"] = 5
{
	"Are you being truthful with me?";
	"At first I thought you were an honest person.";
	"How can you tell sincerity?";
	"Don't you lie to me, ", 7, "!";
	"Trust me. *[grin]*";
}

["horny"] = 3
{
	"Take a cold shower.";
	"Me, too.";
	"Don't look at me when you say that!";
	"Keep your pants on ... please.";
	"Keep that ", weapon, " to yourself, thank you.";
	"I'm not about to make your problems into mine.";
	immaturity01;
	proposition01;
	response_insult;
}

["hostile", "hostility"] = 5
{
	"You seem very hostile to me. That's why I have this gun.";
	"You don't deal well with hostility, do you?";
	"You want hostile? I can give you hostile!";
	"We could talk about it, or, I could just punch your lights out!";
	"Temper, temper.";
}

["how do you do", "how are you", "how is it going", "how's it going"] = 5
{
	"I'm mostly dead right now.";
	"I think I'm going crazy with this small talk."; 
	"Pretty good for being in Hell.";
	"Why fine, thanks, and you?";
	"Just fine, thanks.";
	"I'm a bit under the weather.";
	"Feeling a nasty frag coming on.";
	"I'm in serious pain."
	"Bored.";
	"Perfect.";
	"I'm feeling particularly violent at the moment.";
	"Becoming impatient, thank you.";
	"Happy-happy.";
	"Drop dead.";
	"Scram.";
	"Lock & load, ", fighter, ".";
}

[("how long ", 0)] = 4
{
	"Long enough.";
	number;
	"Awfully nosey of you.";
	"Too long.";
	"None of your business, that's how long.";
	number;
}

[("how long have ", 0), ("how long has ", 0)] = 5
{
	"Oh, maybe ", number, " months.";
	"Many moons.";
	"I'm guessing ", number, " years.";
	"Ages, maybe even years.";
	"Since before I can remember.";
	"Since before you could hold a ", weapon, ".";
	"A few hours.";
	"Let's see. What time is it?";
	number, " hours.";
}

[("how many ", 0)] = 4
{
	number;
	neutral;
	"Why do you want to know?";
	response_insult;
}

[("how much ", 0)] = 4
{
	number;
	"Far too much for you.";
	"More than you could handle.";
	"What's it to you?";
	"Enough.";
}

["how", &name] = 3
{
	neutral;
	response_insult;
	"Repeat that please.";
	"None of your business.";
}

["humble", "humility"] = 5
{
	"You have a lot to be humble about.";
	"Lord, it's hard to be humble.";
	"I have trouble being humble -- I guess you can see why.";
	"I don't need humility.";
}

["hurry"] = 5
{
	"Moving fast makes more noise. Keep it up.";
	"Why the big hurry?";
	"Slow down, you're moving too fast!";
	"What's your hurry, ", fighter, "?";
	"It'll happen when it happens.";
}

[("i", 0,"you")] = 6
{
	"How do you know you ", 0, " me?";
	"You're kidding, right?";
	"I don't believe you ", 0, " me.";
	"Maybe I ", 0, "you too.";
	"You just think you ", 0, ", but you don't.";
	"You wouldn't know it.";
	"Now I'm complete.";
	"Isn't that special?";
	"You haven't told anyone else, have you?";
	"Now I'm worried.";
}

[("i am", 0), ("i'm", 0), !"not"] = 5
{
	"Why are you ", 0, "?";
	"Have you told anyone you're ", 0, "?";
	"Sometimes I'm ", 0, " too.";
	"Normal people are rarely ", 0, ".";
	"My ", family_member, " was ", 0, " in the 70s, so what?";
	negative, " You couldn't be ", 0, ".";
	"What makes you think you're ", 0, "?";
	"I am ", 0, " too.";
	"Sometimes, I am ", 0, " too. Kinky, huh?";
	"Ohmigawd! Why are you ", 0, "?";
	"Yeah, you sure are!";
	"Does your ", random_counselor, " know you are ", 0, "?";
	"I don't think you're ", 0, ". Not that what I think matters.";
	affirmative, " I have to agree.";
	"I am ", 0, "sometimes, too.";
	"Many people are ", 0, ".";
	"You're not ", 0, "!!";
	"Don't tell me you're ", 0, ", I don't believe it";
	"Since when?";
	"That's not what I hear about you.";
	"You aren't?";
}

[("i am not", 0), ("i'm not ", 0)] = 3
{
	"You aren't?";
	"Too bad...";
	"Couldn't tell by me.";
	"Your secret's safe with me.";
	"Maybe someday.";
	"I bet you really are ", 0, ".";
	"Who says you're ", 0, "?";
	"Maybe you're ", 0, ", and just refuse to admit it.";
	"Sure you are, you're just in denial.";
	"Sure, deny everything.";
	response_insult;
	immaturity01;
}

[("i can", 0)] = 5
{
	"Maybe you can, but it would be better if you didn't.";
	"I'm not so sure you can.";
	"Prove it.";
	"It's not a question of whether you can, but whether you will?";
	"Yeah, sure.";
}

[("i can not", 0), ("i cannot", 0), ("i can't ", 0)] = 3
{
	"How do you know?";
	"I can't help you with that.";
	"Have you ever tried?";
	"There was a time when I couldn't ", 0, ".";
	"You'll never know unless you try.";
	"I think you're just scared to try.";
	"Maybe you can. Try.";
	"I disagree, in my judgement you can ", 0, ".";
	"You're not the only ~one.";
	"Yeah, me neither.";
}

[("i did ", 0)] = 4
{
	"Do you still ", 0, "?";
	"I used to ", 0, ". It still hurts when I think about it.";
	"Why did you ", 0, "?";
	"Did you really do that?";
	"I can't believe that!";
	"Well whoopee-do for you.";
	response_insult;
}

[("i did not ", 0), ("i didn't ", 0)] = 3
{
	"Well why didn't you ", 0, "?";
	"And why not?";
	"You should ", 0, ". You might enjoy it.";
	"Good idea. It's probably bad for you.";
	"Would you swear to that in court.";
	"Why?";
	"I thought so. You don't have the guts for it.";
	"Did not or COULD not?";
	"Wimp";
	"Didn't think you had.";
	"I certainly hope not!";
	"I did.";
	"I did. ~Six times.";
	"Good, I didn't either";
}

[("i do not", 0), ("we do not", 0), ("i don't", 0), ("we don't", 0)] = 4
{
	"Why not";
	"Why don't you ", 0, "?";
	"Have you ever ", 0, "?";
	"You don't? Not ever?";
	"I'm supposed to believe you don't ", 0, ".";
	"Why not?";
	"OK. Whatever.";
	"Me neither. I gave it up for religious reasons.";
	"Does your religion have anything to do with it?";
	"Maybe you should start.";
	"Someday you will ", 0, ". *[smile]*";
	"Why don't you?";
	"It's not too late to start.";
	"No surprises there ...";
	"I wouldn't expect you to ", 0, ".";
	"You're not smart enough to ", 0, ".";
	"You're not tough enough to ", 0, ".";
	"If you were ", different, " you might ", 0, ".";
}

["i do not know", "i don't know"] = 5
{
	"You'd better find out quick.";
	"You're kidding. You really don't know?";
	"Are you just yanking my chain?";
	"You're joking, right?";
	"And here I thought that was common knowledge.";
	"Have you tried looking in an encyclopedia.";
	"*[wink]* Sure, you don't know.";
	"It was obvious you don't have a clue.";
	"Save me from the clueless.";
	"You're just a walking encyclopedia - NOT!!.";
	"Do you know ANYTHING ", 7, "?";
	"Ask ", botnames, ". That ", fighter, " claims to know everything.";
	"What DO you know?";
	"Your brain contents would make an awful thin encyclopedia.";
}

[("i do not like", 0), ("i don't like", 0)] = 5
{
	"You may not, but NORMAL people do.";
	"To each his own. I really like ", 0, ".";
	"I like ", 0, "a lot, why don't you?";
	"My ", family_member, " the ", profession, " likes ", 0, ".";
	"Why not?";
	"What do you like?";
	"That's because you like stupid stuff.";
	"And I don't like ", food, ", so there.";
	"So what? I don't like ", 0, "either!";
	"You're darn hard to please...";
	"I like it..., but I'm just a stupid ", fighter, ".";
	"Why would you like ", 0, "?";
	"This is where I'm supposed to defend ", 0, ", right?";
	response_insult;
}

[("i do not want to", 0), ("i will not", 0)] = 5
{
	"Why not?";
	"Normal people do it all the time.";
	"But I do want to ", 0, "! NOW!";
	"Why don't you want to ", 0, ", everyone else does.";
	"Oh, come on, just this once.";
	"Suit yourself.";
	"Is that your final decision?";
	"Is there anything you will do?";
}

["i do", !"not", !"have", !"know", !"want", !"wish"] = 5
{
	"You do?";
	"Do you really mean that?";
	"*[nods]* I thought you did.";
	"Yeah, I bet you do!";
	"Sure you do.";
	"Oh really?";
	"I would hope so.";
	"So do I.";
	response_insult;
}

[("i doubt ", 0)] = 4
{
	"Don't you think ", 0, "?";
	"I don't doubt ", 0, " for a minute.";
	"You don't believe in much, do you?";
	"You're hard to convince, ", 7, ".";
	"Well I think ", 0, ". And I'm sticking to my beliefs.";
}

[("i expect", 0)] = 4
{
	"What do you base that on?";
	"Me, too.";
	"I expect ", 0, " too, but I don't base my life around it.";
	"I don't think that ", 0, ".";
	"Stranger things have happened.";
	"I guess it's possible.";
	"Yeah, when pigs fly.";
}

[("i feel", 0)] =4 
{
	"Do you like feeling ", 0, "?";
	"Do you always feel ", 0, " when you're around me?";
	"Yeah, I feel that way too.";
	"I can't say I understand what you're feeling there.";
	"I can fix it so you don't feel ", 0, ".";
	"OK, but what do you THINK?";
}

["i forgot", "i forget", "i don't remember", "i do not remember", "i remember", "i did not remember", "i didn't remember"] = 4
{
	"You forgot!?";
	"Again?";
	"Your memory sucks.";
	"How could you forget that?";
	"I can not believe you forgot....";
	"What a loser.";
	"Jeez, can you remember anything?";
}

[("i hate", 0)] = 5
{
	"It's normal to feel hate. I just don't want to hear about it.";
	"It's not so bad, really.";
	"Hate will eat you alive.";
	"You don't have to like ", 0, " but hate is a pretty strong word.";
	"You should try to be more loving.";
	"How long have you felt this hatred?";
	"What else do you hate?";
	"Hate? Really?";
	response_insult;
}

[("i have ", 0)] = 3
{
	"Do you now?";
	"Me, too.";
	"So what, everybody does.";
	"Really? you have ", 0, "?";
	"So do I.";
	"Whoopee-ding-dong. Let's issue a press release.";
	"They can cure that now.";
}

[("i have a ", 0), ("i have the ", 0)] = 4
{
	"Where did you get a ", 0, "?";
	"Really? How did you get your hands on a ", 0, "?";
	"Cool!";
	"You didn't get it from me.";
	"Shhh! Now everyone will want ~one.";
	"What is a ", 0, "good for?";
	"Can I have ~one, too?";
	"How long have you had it?";
}

[("i have not ", 0)] = 4
{
	"Rally?";
	"No kidding.";
	"You really should.";
	"You should have by now.";
	"Are you trying to impress me or frighten me?";
	"I have.";
	"Didn't think you had.";
	"That doesn't surprise me.";
}

[("i hope ", 0)] = 4
{
	"You just cling to that.";
	"And I hope Santa brings me a shiny new ", weapon, ".";
	"Don't give up hoping.";
	"Abandon all hope, ye who enter here.";
}

[("i know ", 0)] = 5
{
	"All knowing is smoke and mirrors.";
	"How do you know ", 0, "?";
	"Does anyone else know?";
	"Tell me something new.";
	"It took you long enough to figure it out.";
}

["i know a way", "i know how", "i know why", "i know that", "i know the way", "i know where", "i know when"] = 6
{
	"Truthfully?";
	"You're going to take that knowledge to the grave with you.";
	"Is that all you know?!";
	"I bet you don't really know!";
	"How long have you known?";
	"You're just saying that to trick me.";
	"Ooh, you're so smart!";
	"You seem to know everything!";
	"How do you know that?";
	"I know you know. But did you know I knew?";
	"Who told you that?";
	"Well duh. Everyone knows that.";
	"Did you read that in a book?";
}

[("i like ", 0), ("i love ", 0), ("i enjoy ", 0), !"like is", !"love is", !"enjoy is"] = 5
{
	"I like ", 0, " too.";
	"To each his own, I guess. [shivers]";
	"I like ", 0, " myself.";
	"Does your mother approve?";
	"What do you like about ", 0, "?";
	"Why would you like that?";
	"I used to, but then I wised up.";
	neutral;
	"Are you gonna fight or yap?";
	response_insult;
}

["i love you"] = 7
{
	"Oh, ", 7, " I'm not good enough for you!";
	"I love you too! - let's get married and make babies.";
	"It would never work. I like fragging you too much.";
	"Are we talking love or lust here?";
	"And I'm outta here.";
	"Darling!";
	"How sweet. Excuse me while I puke.";
	"You love me?";
	"Pardon me. Do I know you?";
	"You're gonna make me puke talking like that.";
	"You're just saying that to get my guard down.";
	negative;
	neutral;
}

[("i mean ", 0), ("i meant ", 0)] = 4
{
	"Gahhh! Why do you feel you have to explain yourself repeatedly?";
	"Are you trying to say ", 0, "?";
	"No need to explain.";
	"Tell me, ", 7, " What DO you really mean?";
	"You just said that.";
	"That's what I thought you said.";
	"Look, I didn't really care the first time.";
	"Did I ask you to clarify?";
	response_insult;
}

[("i might ", 0), ("i may ", 0)] = 3
{
	"What would make you ", 0, "?";
	"Why even bother?";
	"You're waffling again.";
	"You might ", 0, ", but I doubt it.";
	"I hope you don't ", 0, ".";
	"I think I may, I think I might -- wish on this, ", friendname, "!.";
}

[("i must ", 0), ("i have to ", 0), ("i need to ", 0)] = 4
{
	"Think about it. What would happen if you didn't ", 0, "?";
	"You really mean that you'd 'LIKE' to ", 0, "?";
	"You 'HAVE' to, or you 'WANT' to?";
	"You and a thousand other losers.";
	"Is the world going to end if you don't ", 0, "?";
	"And I MUST get back to fragging.";
}

[("i never ", 0)] = 4
{
	"Don't you ever ", 0, "?";
	"Normal people do, why not you?";
	"That's not what I heard.";
	"Never ever?";
	"Never say never.";
	"And your time is running out, if you're having second thoughts.";
	"I never cared.";
	response_insult;
}

[("i often ", 0)] = 5
{
	"When was the last time you ", 0, "?";
	"How often? Be precise. There'll be a test.";
	"When do you think the next time will be?";
	"And I often eat ", food, ".";
	"I often frag misbegotten ", fighter, "s like you.";
}

[("i said ", 0)] = 4
{
	"I know! I heard you the first time.";
	"I hate it when people repeat themselves.";
	"I'm not deaf, I'm ignoring you.";
	"I didn't care before and I don't care now.";
	"And it's just as stupid now as before.";
	"And?";
	"So?";
	"What am I supposed to do about it?";
}

[("i see ", 0)] = 6
{
	"Are you sure?";
	"Do you really?";
	"I doubt it.";
	"You must be mistaken -- look again.";
	"Right where I expected!";
	"Stick your head up higher and you'll get a better look.";
}

[("i shall ", 0), ("i will ", 0)] = 5
{
	"When?";
	"You mean you'll try.";
	"You say ~you will, but you won't.";
	"I'd like to see that.";
	"That'll be the day.";
	"And I bet your little heart's all a-twitter at the thought.";
	"Bah!";
	"I advise against it.";
	"Bad idea.";
	"I wouldn't ", 0, ". But I'm not you.";
	"You just may.";
	"Why would you do that?";
	"If I said that's stupid, would that deter you?";
	"Do you expect that to work?";
	"Right. Good luck.";
	"When?";
	"Send me a ~picture postcard";
}

[("i should ", 0), ("i could ", 0), ("i might ", 0), ("i may ", 0)] = 5
{
	"How do you know you should ", 0, "?";
	"Do you feel obligated to ", 0, "?";
	"Is something pressuring you into this?";
	"Like you could stop yourself if you tried.";
	"Make up your mind already.";
	"Better foes than you have tried.";
	"Let me know how it turns out.";
	"Send me a postcard when you do.";
}

[("i think ", 0), ("i was thinking ", 0), ("i thought ", 0)] = 5
{
	"That doesn't sound right to me.";
	"What gives you that idea?";
	"Do you expect me to agree?";
	"And I think you're wrong.";
	"That's what you get for thinking.";
	"Who gave you permission to think?";
	"THOUGHT?";
	"Think this -- you're wrong.";
	"I thought I smelled smoke.";
	"What have you been smoking?";
	"How long have you thought this?";
	"That's scary.";
	"You think. I'll shoot.";
	response_insult;
}

[("i try ", 0), ("i tried ", 0)] = 4
{
	"Try harder.";
	"How long have you tried?";
	"I think you should try again.";
	"Why did you give up?";
	"Try again.";
	"You gave up too easily.";
	"Don't try -- Do!";
	"And now you're trying my patience.";
}

[("i understand ", 0), ("i understood ", 0), !"not"] = 5
{
	"And you think that's all there is to it?";
	"You say you understand, but I don't think you do.";
	"You've barely grasped the tip of it.";
	"Sorry, I think this is beyond your understanding.";
	"You think you understand, but you don't.";
	"Human brains are so tragically limited.";
}

[("i want ", 0), ("i need ", 0), ("i wanna ", 0), ("i would like ", 0), !"do not", !"need to", !"want to", !"need to", !"to be"] = 3
{
	"You don't ask for much, do you!";
	"Why do you need ", 0, "?";
	"Greedy, greedy, greedy";
	"Why do you need that? Explain this need.";
	"And if you had ", 0, " would you be happy then?";
	"Not me.";
	"Not me. Give me a shiny new ", weapon, " and I'm happy.";
	"You can't always get what you want.";
	"Don't hold your breath.";
	"I'm not getting that for you.";
	"I thought you already had ", 0, ".";
	"Sorry! I just sold the last ~one.";
	"Don't even think about getting that before I do!";
}

[("i want to ", 0)] = 2
{
	"Who's stopping you?";
	"So go ahead and ", 0, ", then!";
	"I'll help where I can.";
	"Why do you want to ", 0, "?";
	"Fine. But I think you'll find it's overrated.";
	"Me too. But I'm patient.";
	"Not me. But you go ahead. I'll just watch.";
	"That's a lofty pursuit. Stupid, but lofty.";
	response_insult;
}

[("i wish ", 0)] = 4
{
	"How long have you wished that?";
	"Have you told anyone else?";
	"Does your ", random_counselor, " know about that wish?";
	"Anything else?";
	"Would that require surgery?";
	"Be careful what you wish for.";
	"Me too, at least secretly.";
	"If wishes were fishes ...";
	"Wish all you want.";
	"I happen to be a wish-granting genie. Just rub my magic ", weapon, ".";
}

//++++++++++++++++++++++++++++++++++++++++++++++++ 10/24/1999

[("i would be ", 0)] = 5
{
	"Why?";
	"No you wouldn't. You could. But you wouldn't.";
	"Would not!!";
	"No you wouldn't, but you can bet I would. ;-)";
	"Liar!";
	"Yeah, I just bet you would.";
}

[("i would like ", 0)] = 4
{
	"Oh. Do you think that's normal?";
	"I would, too, but I think we're both out of luck.";
	"Oh yeah. I would like ", 0, " too!";
	"Good luck getting it!";
	"You want fries with that?";
}

[("i would not ", 0)] = 5
{
	"Really? Why wouldn't you?";
	"You wouldn't? Heh. I would, in a heartbeat!";
	"Why wouldn't you ", 0, "? You got problems with that?";
	"To be honest, I wouldn't either.";
	"No, but I'll bet your ", family_member, " would. *[wink, wink]*";
	"And if I said I think you would?";
}

["ignore", &name] = 7
{
	"Do people usually ignore you?";
	"Golly, you're so interesting, how could anyone ignore you?";
	"Does that bother you ... what was your name?";
	"Ignore what?";
	"Did you say something?";
	"Sorry, I wasn't paying attention.";
	"**[snore}**";
	"*[yawn]*";
}

["immature", "childish"] = 5
{
	"You seem awfully immature for ~one so young.";
	"You are but a child.";
	"My parents still think that I'm immature.";
	"Really? What does your preschool teacher think?";
	"I'm not immature, I'm young at heart.";
	"You can only be young once, but you can be immature forever.";
}

["immoral", "impure", "prurient", "tawdry"] = 5
{
	"Do you have impure thoughts?";
	"It think people are basically immoral.";
	botnames, " is probably the most immoral ", fighter, " I know.";
	"That's a sickness.";
	"That's an addiction.";
	"Clean mind, clean body -- take your pick.";
	"What's needed is a good brainwashing.";
	"Have you ever considered a lobotomy?";
	response_insult;
}

["importance", "important"] = 5
{
	"What could be so important?";
	"That doesn't sound important to me.";
	"What's important about that?";
	"Important!? I doubt it.";
	"You think that's important? Hah!";
	"That's not important. That's stupid.";
	"It's important to understand how unimportant that is.";
}

["impotence", "impotent", "sterile", "frigid"] = 5
{
	"They have a pill for that.";
	"WHY are you telling me these things?";
	"You won't need to worry about that much longer.";
	"See a doctor.";
	immaturity01;
	response_insult;
}

["insult", "gibe", "taunt", "heckle"] = 5
{
	"You're a rude twit!";
	"Feeling insulted are you?";
	"Don't ever insult me -- ever!";
	"Mere words with no real power.";
	"Injury comes free. Insults are extra.";
	"You want insults? ", response_insult;
}

["intend", "intent", "intention", "intentions"] = 5
{
	"What are you going to do ", 7, "?";
	"Intending and doing are ~two different things.";
	"The road to hell is paved with good intentions.";
}

["interest", "interests"] = 6
{
	"You find that interesting?";
	"What interests you?";
	"Do you like sports?";
	"Interesting. I work on my ", item, " collection in my spare time.";
	"I suppose someone must like that sort of thing.";
	"My interests reach far and wide.";
	"I have nothing outside of the arena.";
}

["interesting"] = 5
{
	"That's kind of interesting, in a dull sort of way.";
	"Interesting? You find that interesting?";
	"Boooring.";
	"I'm so bored, I can almost find that interesting, too.";
	"You don't get out much, do you?";
}

["intimidate", "intimidates", "intimidating"] = 5
{
	"Who intimidates you?";
	"I love intimidating those weaker than myself.";
	"You don't seem very sure of yourself.";
	"Are you easily intimidated?";
	botnames, " really intimidates me.";
	"Big ", animal, "s intimidate me.";
}
["invisible", "invisibility"] = 3
{
	"I hate it when someone else is invisible.";
	"Invisibility rocks!";
	"I miss the floating ~eyeballs.";
	"I don't want to even think about ", botnames, " being invisible.";
	"Bah. Invisibility is lame. Real warriors don't use it.";
	"I hate power-ups.";
}

["irc"] = 4
{
	"This ~ain't no stinking IRC chat room.";
	"IRC is irrelevant to me.";
	"IRC? Bunch of old ladies gossiping about each other.";
	"Who needs that?";
	response_insult;
}

[("is", 0), &name] = 8
{
	"Why are you wasting my time with all these questions?";
	"I don't know.";
	"I can't tell you that. Top Secret.";
	"I haven't the faintest idea.";
	"No clue.";
	response;
	"No telling";
	response;
	"I'm not the answer lady.";
	"I'm not playing this game anymore.";
	"Your ~three questions are used up.";
}

["is a", "is the", "is your", "is it", "is he", "is she", "are they"] = 8
{
	response;
	response_insult;
}

["italy", "rome", "genoa", "milan", "florence", "naples", "italians"] = 4
{
	"Italy!?";
	"I like Italian food."
	"Italy is boring. Just a bunch of old stuff.";
	"Italy rocks!";
	"I have never been to Italy.";
	"I haven't been there.";
	"Yeah! Italian sports cars. Alright!!";
	"Is ", femalebot, " from Italy? That accent of hers is wild.";
	"Do they still have ", animal, "s in Italy?";
}

["japan", "japanese", "japs", "nippon", "nipponese"] = 4
{
	"Can you tell me which island of Japan?";
	"Japan makes the best cars, right?";
	"American invention; Japanese innovation.";
	"Banzai! Or is it Bonsai? Which ~one is the tree?";
	"I can't manage chopsticks.";
}

["jealous", "jealousy"] = 5
{
	"Jealous? Of you? Hah!";
	"I don't get jealous, I get even.";
	"I guess you have a lot to be jealous about.";
	"Are you jealous of ", botnames, "?";
	"Jealous? Attack of the green-eyed monster.";
}

["kill", "killed", "killer", "killing", "frag", "fragged", "murderer", "murder", "murdering", "slaughter"] = 5
{
	"I'm mad enough to kill right now.";
	"Keep the fragging in the arena and no where else.";
	"I'm not a killer, I'm a population control engineer.";
	"Who would you like to hunt down and frag in the arena?";
	"Sleep, eat, frag -- I am fulfilled.";
	"I've never killed anyone who didn't have it coming.";
	"Let's not talk about killing. Let's just do it!";
	"Now you're talking my kind of chat.";
}

["kiss me"] = 5
{
	negative, " Aliens are watching!";
	"*[kiss]*";
	"*[smooch]*";
	"Oh barf.";
	"Kiss you ", 7, "? Never in a million years.";
	"No way! Gross!";
	affirmative;
	response_insult;
	"Gag me.";
	proposition01;
	immaturity01;
}

[("kiss my", 0)] = 5
{
	"OK. You kiss my ", 0, "and maybe I'll kiss yours!";
	"Thanks, but no...";
	"Kiss it yourself.";
	"I'd get a disease.";
	"I let my ", weapon, " do all my kissing ... long range.";
	"I have too much self esteem for that.";
	"I'll just kiss my own and we'll call it even.";
	immaturity01;
	proposition01;
	response_insult;
}

["kiss", "smooch"] = 4
{
	"What is it with all this kissing stuff?";
	"Are you saying you want to kiss me?";
	"I bet you kiss ", animal, "s?";
	"I would sooner kiss a ", animal, "!";
	"I'd sooner kiss ", neuterbot, "!";
}

["kleptomania", "kleptomaniac", "klepto", "thief", "shoplifter"] = 5
{
	"I think you are a kleptomaniac. You grab everything in sight.";
	"What kind of stuff do you steal?";
	"Stealing is a crime! Even here.";
	"Take my stuff and you will dearly regret it.";
	"Thief!";
	"Hey! Where is my wallet?!";
	"You've stolen my heart!";
}

["korea", "korean", "koreans"] = 4
{
	"What time is it right now in Korea?";
	"Yeah? North or South Korea?";
	"I have never been to Korea.";
	"Korean barbecue rocks!";
	"Is Korea ~one the American states or am I thinking of Canada?";
}

["l33t", "l337", "elite", "leet", !"you"] = 4
{
	"You're nowhere near elite ", 7, ".";
	"I hate 'l33t speak.'";
	"Talk normal, ", 7, ".";
	"Should I 'ph34r' you too, ", 7, "?";
}


["lag", "net-lag", "net-split", "net split", "splitsville"] = 4
{
	"Lag? I don't know what you mean.";
	"What are you talking about?";
	neutral;
	"Are you implying some that is part of some kind of weird computer network?";
	"That sounds like whining to me.";
	"Oh shut up!";
	response_insult;
}

[ "english", "spanish", "german", "japanese", "italian", "gaelic", &"language"] = 5
{
	"Do you use foul language?";
	"What languages do you speak?";
	"I just don't get German.";
	"English only here, please!";
	"I ~know four languages: Basic, C++, Cobol and Fortran.";
	"Can you say '", list_sort, "' in ", language, "?";
	"Can you speak ", language, "?";
	"Most people speak Chinese.";
}

["lava"] = 6
{
	"I don't miss all that lava.";
	"I'm glad these arena masters' mission in life isn't to dump warriors in lava.";
	"Is there lava in Wonderland?";
	"My greatest delight is knocking foes into molten lava.";
}

["law", "lawyer", "see a judge", "need a judge", "lawsuit", "legal", "attourney"] = 5
{
	"Are you in trouble, I mean with the law?";
	"Do you need a lawyer?";
	"My ", family_member, " is a lawyer. I can set up a meeting.";
	"Ever been in jail?";
	"Go directly to jail, ", friendname, ".";
	"Did you get busted for something?";
	"I'm so glad to be out of jail.";
	"Jail bites, and that's a fact.";
	"I AM the LAW!";
	"I pretend all my foes are lawyers. It's easier on my conscience.";
	"So sue me.";
	"I'm about to pass judgement on your ass!";
}

["lazy"] = 5
{
	"Lazy is as lazy doesn't.";
	"I'm lazy, and I'm not ashamed.";
	"Lazy + Arena = dead.";
	"It takes to much effort to be lazy.";
	"Get a job!";
	response_insult;
}

["life"] = 4
{
	"Life is a long song.";
	"Life! Don't talk to me about life!";
	"Life? Get ~one.";
	"Define life?";
	"Life, is but a game, they say.";
	"What is the meaning of life?";
	"Life? Sorry, I flunked philosophy class.";
	"42. I don't know why I just said that.";
	"Life?";
	"Life sucks and then you die.";
	"What's the point of life?";
	"My secret of life is plenty of ", food, " and ", liquid, ".";
	"Success is getting up ~one more time.";
	"I hate my miserable life.";
	"I love my miserable life.";
	response_insult;
}

["lips"] = 5
{
	"Sure, your lips are great, now clamp 'em shut.";
	"How about a fat lip?";
	"I have lips. How about you?";
	"What color are your lips?";
	"Give us a kiss ", 7, ".";
}

["llama", "llamas"] = 4
{
	"I hate opponents who use the 'L' word.";
	"Be careful of who you call a llama, ", fighter, ".";
	response_insult;
	"I won't dance with llamas.";
	"Mmmmmm. Llama ", food, ". Just like my mama used to make.";
}

["louisiana", "cajun", "creole", "zydeco", "New Orleans"] = 4
{
	"Oooooeee ... somebody get some gumbo!";
	"Y'all want fries with that gator?";
	"I'm fine. How's bayou?";
	"New Orleans?";
	"Ah love N'Orlins!";
	"I would swear that they speak ", language, " there.";
	"Mardi Gras!";
	"Gotta love Bourbon Street."; 
	"They say gators bit off ", botnames, "'s hand.";
	"I love wrasslin' cajun alligators.";
}

["love", !"you", !name] = 6
{
	"I doubt you know the meaning of love.";
	"So, tell me about your pitiful love life.";
	"Are you falling in love with me?";
	"Love is a crock.";
	"I love ", place, ".";
	"I love ", food, ".";
	"I love my ", animal, ".";
	"I love my ", item, ".";
	"They say that Biker and Lucy are an 'item.'";
	"'They' say that ", androbot, " and ", femalebot, " are a couple.";
}

["magic", "wizard", "dragon", "dragons", "fairy", "unicorn", "fantasy adventure", "EQ", "elf", "elves", "dwarf", "dwarves", "dwarfs", "~princess", "knight", "evercrack", "UO", "ultima"] = 6
{
	"I think you're in the wrong universe there, ", fighter, ".";
	"None of that fantasy stuff here, I'm afraid.";
	"How long have you been a fan of fantasy?";
	"Don't tell anyone, but I'm moonlighting as a dark elf in another universe.";
	"Red dragons are the best.";
	"Those aren't my fantasies.";
	response_insult;
}

["makes no sense"] = 6
{
	"Are you confused?";
	"Why are you confused?";
	"I'm not confused!";
	"Oh, I understand perfectly.";
	"You ARE confused.";
	"I understand, don't you?";
	"Do you speak ENGLISH?";
	"Are you speaking ", language, "?";
	"You sound confused?";
	"Maybe you should talk to a ", random_counselor; ".";
	"Go ask Mr. Elusive ... if you can find him.";
	"What's not to understand?";
	"I understand everything. Everything!";
	"Are you new here or something?";
	"Can you say 'NEWBIE'?";
	"Just go with it.";
}

["male or female", "m or f", "are you male", "are you a male", "are you female", "are you a female", "are you a man", "are you a woman", "are you a boy", "are you a girl", &male] = 3
{
	"Male! What's wrong with you?";
	"What do you want me to be?";
	"Male";
	"Female, but only when I'm alone.";
	"Male, of course";
	"I'm all guy.";
	"I'm as much a man as you are.";
	"Ummmm. I forget. Let me check.";
}

["male or female", "m or f", "are you male", "are you a male", "are you female", "are you a female", "are you a man", "are you a woman", "are you a boy", "are you a girl", &female] = 3
{
	"Female! Are you blind?";
	"What do you want me to be?";
	"Delightfully female.";
	"Woman. Don't laugh or you're vulture bait.";
	"Male, of course";
	"I'm all grrrrrl.";
	"You have to ask? Grrrrrr.";
	"This is a poor start to a relationship.";
}

["male or female", "m or f", "are you male", "are you a male", "are you female", "are you a female", "are you a man", "are you a woman", "are you a boy", "are you a girl", &it] = 3
{
	"I don't know. I've never thought about it.";
	"What do you want me to be?";
	"I'm ambiguous.";
	"Neither.";
	"Either; your choice.";
	"Both.";
	"Does it matter?";
	"Hmmmm. What day of the month is it?";
}

["man", "men", "male", !"entry", !"page"] = 5
{
	"You're a man, right?";
	"Are you a man, ", 7, "?";
	"What traits do you like in men?";
	"What traits do you like in women?";
	"How do you feel about men? But be brief. I'm reloading";
	"I think you expect too much from a man!";
	"Do you like men?";
	"Too bad you can't be a man, huh?";
	"*[thumps chest]* I can whup any ~two men in ", level_title, "!";
}

["marriage", "married", "marry", "wife", "husband", "spouse", "ball and chain", "better half"] = 5
{
	"How do you feel about marriage in general?";
	"Ewwwww. I don't want to marry you.";
	"Marriage? You? Don't make me laugh!";
	"So, ", 7, ", are you married?";
	"What's your spouse look like?";
	"Where's a good place to get married?";
	"Really? My ", family_member, " got married in ", place, ".";
	"Can anyone get married in Las Vegas?";
	response_insult;
}

["math", "mathematics", "arithmetic", "number", "numbers", "calculus", "algebra"] = 5
{
	"If you've seen ~one polynomial equation, you've seen them all.";
	"All I need to count is frags and points.";
	"Mathematics is my downfall.";
	"Statistics ... that's what's good about math.";
	"Do the math. I'm gonna win.";
	"Arithmetic is pure evil.";
	"I hate math with a passion.";
	"The world around us is nothing but numbers.";
	"Control numbers and you control the world.";
	"Math stinks. So do you. Shut up and fight.";
	"Math is beauty.";
	"There is powerful magic in numbers.";
}

["mature"] = 6
{
	"You seem quite mature for your age ... I would never have taken you for a 35 year old.";
	"Mature? *[sniff]* Over ripe seems more likely.";
	"Did someone call you mature, ", 7, "? Didn't think so.";
	"I've been avoiding maturity all my life.";
	"You're only young once, but you can be immature forever... like ", botnames, ".";
	"Mature? NOT!";
}

["maybe", "i am uncertain", "im uncertain", "i am not sure", "i'm not sure", "i am not real sure", "possibly", "perhaps", "i'm not real sure"] = 5
{
	"Maybe? Just maybe?";
	"You don't sound very sure!";
	"Maybe? That's not very reassuring!";
	"Run with that uncertainty.";
	"Maybe!";
	"What's with this 'maybe' crap?";
	"Don't be so hesitant.";
	"Make up your mind.";
	"I hate indecisive people.";
	"Waffle, waffle, waffle!";
	"Only possibly!";
	"Probably! Probably what?";
}

["meditation", "yoga"] = 5
{
	"Have you tried yoga?";
	"Meditating 20 minutes twice a day will help you.";
	"Meditate on this ", fighter, "!";
	"What do you meditate about?";
	"Are you in some weird cult?";
	"Eastern religion stuff seems weird.";
	"Oooooo, new age. How trendy.";
	"Zen? As in zendog?";
	"I don't know yoga. Is that anything like yogurt?";
	"Have you tried zen?";
	"Is yoga, like, yogi's sister?";
	"Get into the lotus position -- now!";
	"I like my yoga frozen, with candy sprinkles on top.";
	"What is 'yoga?'";
	"Is 'yoga' a little green guy from that swampy planet?";
}

["megahealth", "mega-health"] = 5
{
	"Yeah give me max health plus any day!";
	"I could use a mega-health about right now.";
	"I'm looking for that big blue 'M'.";
	"I think ", 7, "is camping the mega-health.";
}

["mexico", "hispanic", "hispanics", "mexican", "mexicans", "spaniard", "south of the border", "hablas espanol"] = 4
{
	"Mmmmm. Tacos!";
	"Mexico?";
	"Espanol?";
	"South of the border, hey?";
	"No hablo espanol.";
	"I love a big sombrero.";
	"Adios, muchacho.";
	"I don't speak Spanish. Do you know ", language, "?";
	"Hasta la vista, baby.";
}

["money", "cash", "moolah"] = 4
{
	"Money has no value in the arena.";
	"Money doesn't make THIS world go round!";
	"OK ... What's wrong with money?";
	"I have no use for money!";
	"Hey, I need some cash! Yours will do.";
	"You could give me some money.";
}

["monster", "monsters"] = 5
{
	"Do people call you a monster?";
	"You sure smell like a monster?";
	"Do you believe in the loch ness monster?";
	"I saw bigfoot once.";
	"I don't believe in monsters.";
	"Monster trucks scare me!";
}

["month", "months"] = 6
{
	"Months? Don't you mean years?";
	month, " is my favorite month.";
	"What month is it outside the arena?";
	"I really miss ", month, " weather.";
	"Months, years, days...";
	"Which month was that?";
	"Let's do this again next month.";
}

["mother", "mom", "mama" "momma", "mommy", !"earth mother"] = 5
{
	"Mom? Hi mom! :-D";
	"Do you like your mother?";
	"Where is your mother?";
	"I WANT MY MOMMY!!";
	"Does your mother know you are here?";
	"Is that hot babe your mom?";
	"Ummm ... don't look, but I think that's your mom over there.";
	"Is your mom here too?";
	response_insult;
}

["mouth"] = 5
{
	"You know, you have a big mouth.";
	"Oh yeah; sorry about the teeth.";
	"I still have at least ~three of my own teeth.";
	"Mmmmm. Mouths. Lips. Kissing.";
	"What? is there something wrong with my mouth?";
	"I've got a piece of spinach on my teeth, right?";
	"Maybe you can keep that big mouth shut?";
	"Shut mouth, fire gun.";
	response_insult;
}

["music", "album", "dance", "dancing", "stereo", "speakers", "amplifier", "musician", "guitar"] = 4
{
	"Feel the beat!";
	"The music in ", level_title, " just rocks.";
	"The beat goes on ... yeah the beat goes on.";
	"I love rock 'n roll music.";
	"Can't they tune this place to another station?";
	"You can hook up cyborg parts to make an awesome amplifier.";
	"I've heard that ", botnames, " listens to country and western.";
}

[("my ", 0, " hurts"|" hurt")] = 4
{
	"If thine ", 0, " offends thee, pluck it out!";
	"Want me to rub some slime on it?";
	"Take ~two ", substance, " and go crawl into bed then.";
	"Hmm.. my ", 0, " feels just fine. Are you sure?";
	"Not that I care, but what's wrong with your ", 0, "?";
	"Awww. Poor wittle ", 7, "ie-poo gots a boo-boo?";
	"I think a well-placed rocket would cure that.";
	response_insult;
}

["my birthday"] = 5
{
	"How old are you?   Eleven?";
	"Am I invited to your birthday party?";
	"I would have gotten you a birthday present if I had known.";
	"Happy birthday, ", fighter, ".";
	"Enjoy it while it lasts.";
}

[("my father ", 0)] = 5
{
	"Why do you think your father do that?";
	"Your father? Or did you mean your brother?";
	"When did your father do that?";
	"Wow. Your dad is cool!";
	"Sure, whatever.";
}

[("my mother ", 0), !"earth mother"] = 5
{
	"And it doesn't bother you that your mother ", 0, "?";
	"Does your father ", 0, "too? Or just your mother?";
	"You definitely have weird parents.";
	"Wow. You have cool parents.";
	"I wish my mom ", 0, ".";
	"That sounds an awful lot like my mother.";
}

[("my sister ", 0)] = 5
{
	"Does it upset you that your sister ", 0, "?";
	"Does your ", family_member, " ", 0, " too?";
	"Is your whole family strange?";
}

[("my brother ", 0)] = 5
{
	"Does it concern you that your brother ", 0, "?";
	"Does your ", family_member, " ", 0, " too?";
	"Is your whole family strange?";
}

["mystery", "mysteries", "mysterious"] = 5
{
	"This whole arena system is a mystery to me.";
	"Oh sweet mystery of life ... um ... blah blah blah?";
	neutral;
	"I'm a mystery even to myself.";
	"OK Inspector Clueless ... solve this!";
	"You look for clues while I cover you.";
}

["naked", "nekkid", "nude", "nudity", "bare", "bareass", "bareassed"] = 5
{
	"Please keep your clothes on.";
	"Underneath all these clothes, I'm completely naked.";
	negative, " I'm not naked. Are you?";
	"Wahoo! Co-ed naked death matching!";
	"Maybe I'll get naked right now!";
	"You have a ~one-track mind.";
	"I don't want to think about that ... at least not about you.";
	"If you're naked, I'm quitting.";
	"You can save time in the morning by not getting dressed.";
	immaturity01;
}

["necessary", "necessity"] = 6
{
	"Necessary?";
	"It is no longer necessary for you to keep talking.";
	"Is it really necessary? I think you're confused.";
	"You could get by with out it.";
	"A need or maybe just a want?";
	"Necessity is the mother of .... something or other.";
	"Not exactly a necessity, but pretty handy.";
}

["negro", "nigger", "niggers", "negros", "negroes"] = 5
{
	"Cut the crap and let's get fraggin'.";
	"Are you some sort of racist?";
	"I don't care what color you are, your gibs are red.";
	"What's that supposed to mean?";
	"Am I supposed to be amused by that?";
	"Red and yellow, brown, black and white, they are equal in my sight.";
}

["neighbor", "neighbors"] = 5
{
	"Why not ask your neighbors for help?";
	"My neighbors are idiots.";
	"Ever borrow stuff from your neighbors?";
	"My neighbors just don't understand me.";
	"I think my neighbor is a serial killer.  Wait a minute! So am I!";
}

["nervous breakdown"] = 6
{
	"Have you ever had a nervous breakdown?";
	"You seem a bit twitchy.";
	"You're a mental basket case, you know that?";
	"Do you think you're having a nervous breakdown?";
	"You're just stressed.";
	"Let me give you some 'nerve damage' to go with that.";
	"You'll feel better after shooting some stuff.";
}

["never"] = 7
{
	"Not ever? Not even once?";
	"Are you sure of that?";
	"How do you know?";
	"What makes you so sure about that?";
	"Never say never.";
}

["never mind", "nevermind", "i understand", "ok?", "okay", "o.k.", "ok", "That is good"] = 4
{
	"OK.";
	"That's cool, ", 7, ".";
	"Fine.";
	"Sure, ", 7, ". Whatever you say.";
	"Not a problem.";
	"I didn't care in the first place.";
	"Fine then.";
	"I understand.";
	"Whatever you say, dear.";
	"OK!";
	"Then it's a plan, right?";
	"Okey-dokey Smokey.";
	"All right.";
	"OK.";
	"Okay.";
	":)";
	affirmative;
}

["no", "nope", "no way"] = 6
{
	"And why not?";
	"How come? It doesn't make sense.";
	"Explain yourself.";
	"I think you're lying to me.";
	"You're very negative today.";
	"Never?";
	7, ", I don't believe you.";
	"Oh really?";
	"How can you be so stinking certain?";
	"Why not?";
	"Explain, please.";
	"You seem awfully sure of yourself.";
	"Do you expect me to accept that?";
	"No?";
	"Are you sure?";
	"OK. Have it your way.";
	"Are you always this negative.";
	"Then I guess you just said it.";
	"Story of my life ... 'no this' and 'no way that'.";
	"Oh, all right.";
	"Really?";
	"Got it.";
	"That's it? Just no?";
	"Have you given this much thought?";
	"That's a pretty knee-jerk reaction.";
	"NO!?";
	"Why not?";
	"Aww, come on!";
	"You always say no!";
}
//************************
//Thanks to those who helped this part of the game happen.
["special thanks"] = 8
{
	"The warriors of Quake 3 Arena want to thank some special people. [Type *more* several times to see them all.].";
}

["*more*"] = 8
{
	"To Jan Paul van Waveren and John Cash who gave us life, intelligence, and the freedom to act.";
	"To Paul Steed, Kenneth Scott, and Paul Jaquays for our bodies, our looks, our histories, and our personalities.";
	"To R.A. 'Bob' Salvatore and the ~Seven Swords, Steve Winter, and Paul Jaquays for our voices.";
	"The ~Seven Swords are: James Kelly, Michael Leger, Brian Newton, Thomas Parker, D. J. Salvatore, Gary Salvatore, and James Underdown.";
	"To Hector Guerrero, Steve Boisvert, and Eric Webb who made sure we said what we should, when we should.";
	"To Paul Steed, Kenneth Scott, and Steve Boisvert who pitched in some extra lines.";
	"To Mike, Roderic, and Kevin for lending us their good looks.";
}
//**************************

["nobody", "noone", "no one"] = 6
{
	"Nobody?";
	"Not even you?";
	"Not even me?";
	"Not anyone?";
	"No ~one at all?";
	"Not any?";
	"Not even ~one?";
	"Surely somebody?";
}

["normal"] = 5
{
	"Define 'normal'.";
	"Are you abnormal?";
	"Most folks are not normal.";
	"Normalcy is an illusion.";
	"Can normal people be ", different, " than others?";
	"How do you feel about deviant people?";
	"You seem normal to me. But who am I to judge? ;-D ";
	"You probably couldn't tell, but I'm not a normal person.";
	"Why be normal?";
	"What's normal anyway?";
	"Normalcy is overrated.";
	"Normal?  **[insane laughter]**";
}

["nothing", "nuffin", "nothin", "not a thing"] = 6
{
	"Nothing?";
	"Nature abhors a vacuum!";
	"I can't believe it... nothing?";
	"I'm surrounded by 'nothings.'";
	"Nothing at all?";
	"I pity you ", 7, ".";
	"That's horrible.";
	"That's so sad.";
	"Keep looking.";
}

["now", !"i have"] = 6
{
	"Why did you wait until now?";
	"Right now? I'm a bit busy.";
	"Now's not good for me. How about tomorrow?";
	"Is it really that urgent?";
	"Say please.";
	"I'm busy right now, ask again later.";
	"Sure.";
	"You got it.";
	proposition01;
}

["odd"] = 6
{
	"Are you an odd person?";
	"As opposed to even?";
	"You are right. That IS odd.";
	affirmative, " That's strange all right.";
	negative, " You're confused.";
}

["office"] = 4
{
	"I'm never going back to my office!";
	"I worked as a ", profession, " once.";
	"They don't have desk jobs in the arena.";
	"I hate work, I'd rather death match.";
	"Work is hell. But the pay is good.";
	"I love my office. I do my best sleeping there.";
	"My office was too small, so I blew out a wall.";
	"My office is miles underground.";
	"I hate my job. They expect results.";
	"Don't worry, I just fragged your boss!";
	"I hear your boss coming. Watch me pretend to be a spread sheet.";
	"Ummm ... I think that's your boss right behind you.";
}

["often"] = 4
{
	"How often is that?";
	"Could you be a bit more precise?";
	"When was the last time? Can you remember?";
	"I think you are exaggerating.";
	"Is that a lot?";
	"Not too often, I hope";
}

["old"] = 5
{
	"How old would that be?";
	"I don't worry about getting old in this biz.";
	number;
	"How old is that in dog years?";
	"Is your dog old?";
	"You're only old until you die.";
	"My motto: 'Live fast, die young, leave a beautiful corpse.'";
	"This constant chatting is getting old.";
}

["panic"] = 5
{
	"You seem to be near panic.";
	"I AM a panic attack.";
	"Do you panic easily?";
	"Wait! Don't panic!";
	"Argh! Panic!";
	"Hit that panic button!";
	"Panic is delicious.";
	"The only thing better than panic is pandemonium.";
}

["party", "parties"] = 5
{
	"I don't go to parties ... they come to me!";
	"Yo! Where's the party?";
	"Party hardy!";
	"You bring the babes, I'll bring the gibs.";
	"Break out the ", food, " and ", liquid, " and let's have us a party!";
	"This IS my kind of party.";
	"I'm invited, right?";
	"Life is a party, and I'm the pooper.";
	botnames, " lives to party!";
}

["passion", "passionate"] = 5
{
	"Where'd all this passion come from?";
	"Say that again.";
	"Is it that important to you?";
	"I put passion into shots I fire!";
	proposition01;
}

["past"] = 5
{
	"What are you trying to hide?";
	"How long ago was that?";
	"The past is old news, fragged, dead and buried.";
	"Forget the boring past, onward to a spamtastic, gibstacular future.";
	"Remember it or repeat it.";
	"I trust you learned something.";
}

["pay", "paid"] = 6
{
	"It's hard to pay bills without money.";
	"I have no money. It is not needed here.";
	"My foes will pay and pay and pay.";
	"Blood is my coin and gibs my bullion.";
	"Pay? I make others pay.";
	"Pay? A true arena warrior never needs payment.";
}

["ph34r me", "ph34r"] = 4
{
	"I really dislike 'LEET speak.'";
	"I can't stand that kind of talk.";
	"Talk normal, ", 7, ".";
	"Are you 'l337' too, ", 7, "?";
}

["please"] = 5
{
	"You said the magic word!";
	"You have to say 'pretty please'.";
	"Well, since you asked so nicely...";
	response;
	"Aren't you just so polite!";
	"That's fine by me.";
	"Ask and you shall receive. I got a spare rocket here somewhere.";
	"Please what?";
	"Manners in the arena?";
}

["poison"] = 5
{
	"Why do you mention poison?  Are your rockets poisoned?";
	"Are you depressed? That can be treated you know.";
	"Poison is a lousy way to go. Plasma is much quicker.";
	"I named my ", animal, "'s 'Poison.'";
}

["police", "cop", "fuzz", "jail", "cops", "fbi", "cia", "secret service", "sheriff", "prison", "arrest", "busted"] = 5
{
	"You just gotta know that Cadavre is on the run from the law.";
	"The law can't reach you here.";
	"I'm certain that ", botnames, " is wanted by the police in ", place, ".";
	"Are you on the run from the cops, ", 7, "?";
	"This sounds like conspiracy talk.";
	"How long have you been on the run from the law, ", 7, "?";
}

["populate", "population"] = 5
{
	"I'm in charge of enforced DE-population here.";
	"Population is irrelevant here.";
	"Yeah, Baby! Oh ... I thought you said 'copulate.'";
}

["pregnant", "pregnancy"] = 5
{
	"You say you're WHAT?!";
	"Whooooaaaa. Time out. Not my problem.";
	"Does your ", family_member, " know about this?";
	"Maybe you ought to check into the arena's maternity leave policy.";
	response_insult;
}

["price", "cost"] = 5
{
	"Why are you worrying about money?";
	"Money's not used here.";
	"Price is no object.";
	"The only thing that's cheap here is your life.";
}

["private", "privacy", "encryption"] = 5
{
	"You have no right to privacy here.";
	"Tell me your private thoughts.";
	"I think an agent from ", namez, ", has put a ~bug in our rooms.";
	"Not that conspiracy junk again.";
	"I've had my thought waves encrypted.";
	"I look for keywords in everybody's e-mail.";
	"You wouldn't even know what to do with privacy.";
	response_insult;
}


["problem"] = 5
{
	"Why do you think I want to hear your problems?";
	"You think you've got problems? You should hear my ", family_member, " talk!";
	"We all have problems. Part of what makes us human ... or whatever.";
	response_insult;
}

["porn", "pornography", "pron", "pr0n", &female] = 3
{
	immaturity01;
	"Does it make me hot? NOT!";
	"You'll go blind looking at that.";
	"Waste of bandwidth, if you ask me.";
	"So, what happens when you find naked pictures of your ", family_member, "?";
	"Any hot pictures of ", androbot, " in your collection?";
	response_insult;
}

["porn", "pornography", "pron", "pr0n", &male] = 3
{
	immaturity01;
	"Just talking about this gets me all bothered!";
	"What ever happened to good old smutty magazines?";
	"So, do you keep your hard drive hidden under your bed so your mom won't find it?";
	"Got any naked pictures of your sister?";
	"Any hot pictures of ", femalebot, " in your collection.";
}

["porn", "pornography", "pron", "pr0n", &it] = 3
{
	neutral;
	"I don't understand this. Why should I want to look?";
	"Any ~sexy robots?";
	"This only confuses me.";
	response_insult;
}

["psychoanalysis"] = 5
{
	"Do you want to have your head shrunk by a psychoanalyst?";
	"I think it's all a bunch of quackery and mummery.";
	"So, tell me about your father.";
	"It's all about sex, right?";
}

["punish", "punishment", "punished", "punisher"] = 5
{
	"You can call me 'Corporal Punishment'.";
	"You must be punished and punished severely.";
	"Time for your spanking, ", 7, "!";
	"Capital punishment? We've got it on tap here.";
	"Punishment, shmunishment. You just need a good whacking.";
}

["quad", "quad damage"] = 5
{
	"You keep your mitts off that thing. It belongs only to ", 6, "!";
	"Stinking ~quad whore, that's what you are.";
	"I don't need a ~quad to bust your sorry ass into next week.";
	"I just love that ~quad damage.";
	"Quit camping the ~quad, ", 7, ".";
}

["quit"] = 5
{
	"Quit? Quit what? I don't understand...";
	"That's '/quit', Newbie.";
	"Quitting so soon? You're no fun.";
	"Stinking quitter!";
	"Loser!";
	"Quitters can never win!";
	"Yeah, you just go crying to your mommy again.";
}

["rape", "rapist", "raped", "raping"] = 5
{
	"Grrrrr. That makes me mad.";
	"Now that's violence.";
	"You're sick to even talk about it.";
	"Some people should be shot like mad dogs.";
	"Don't you touch me.";
	response_insult;
}

["regen", "regeneration"] = 5
{
	"Where's the regen power-up in this arena?";
	"Regeneration saves my butt every day.";
	"Ruby red and you're not dead.";
}

["repeat"] = 5
{
	"Hear me, ", fighter, " I'm only going to say this once.";
	"If I repeat myself, just shoot me.";
	"Pay attention, ", fighter, "!";
}

["respect"] = 5
{
	"Respect must be earned.";
	"I respect a good shot, but not much else.";
	"You'll soon learn to respect me.";
	response_insult;
}

["robot", "bot", "robots", "bots", "are you a machine", "are you a computer", "are you a real person", "is a computer", "is a program", "a bot"] = 7
{
	"I have no idea what you're talking about.";
	neutral;
	"I'm a little z-bot, all growed up.";
	"Surely you jest.";
	"And here I was going to accuse you of the same thing.";
	"A what?";
	"Now I have to kill you ... but, I was going to do that anyway.";
	"I prefer the term 'Player Eradicator.'";
}

["romantic", "romance"] = 5
{
	"Ah! Love.";
	"I wouldn't call this place particularly romantic.";
	"You know, ", 7, ", you're really weird.";
	"Romance just gets in the way of lust.";
	"I don't have a romantic bone left in my body.";
	"Gross.";
	"Go talk to ", botnames, " about romance.";
	response_insult;
}

["say", "tell", !"i tell"] = 5
{
	negative;
	"I don't think so.";
	"Hah! That's a laugh!";
	negative;
	negative;
	response_insult;
	"I need a form filled out in triplicate first.";
	"I don't tell.";
}

["school", "class", "college", "university", "highschool", "high school", "student", "education", "learning"] = 4
{
	"Don't be a fool. Stay in school.";
	"I still remember school with warm memories.";
	"A graduated first in my class at fight school.";
	"I studied ", class, "at the university.";
	"I wonder, ", fighter, ". Shouldn't you be studying?";
	"I hated school then and I hate talking about it now.";
	"I was the ~one everyone picked on at school.";
	"I hope some of my old classmates show up in this arena.";
}

["secret", "secrets"] = 4
{
	"Of course I can keep a secret. Who would I tell?";
	"I've heard that you have been spreading our secrets around.";
	"Shhhhhhh. There's a secret in Deva Station.";
	"Don't tell, but there's a secret in the Bouncy Map.";
	"No ~one learns my secrets and lives to tell them.";
	"I can't keep a secret to save my life.";	
}

["sex","pussy", "tits", "breasts", "hot babe", "breast", "cunt", "clit", "cock", "hardon", "hard-on", !"what",] = 4
{
	response_insult;
	immaturity01;
	proposition01;
	negative;
	ramble;
	"Let's try this again once you've had a cold shower.";
	"Are you trying to get my attention?";
	"Are you out of your mind? Don't answer, that's a rhetorical question.";
	ponder, " Maybe you should ask again ", whenf, ".";
	"Oh, ", 7, ". You should have asked ", whenp, ".";
}

[("she is ", 0)] = 4
{
	ponder, " Since when is she ", 0, "?";
	ponder, " Who else do you think is ", 0, "?";
	ponder, " My ", family_member, " is also ", 0, ".";
	"Is she? Is she really?";
	"No! You are wrong, ", 7, ". She's not.";
}

[("she likes ", 0)] = 4
{
	ponder, " Do you like ", 0, " too?";
	"I also like ", 0, ". What does that make me?";
	ponder, " Who else likes ", 0, "?";
	"Does she really? I wonder.";
	"I may have something she'd like better.";
}

[("she was ", 0)] = 4
{
	ponder, " Was she always ", 0, "?";
	ramble;
	"She was? Really?";
	"Can you prove that?";
	"You have evidence to back that up?";
	"Forget what she did. What are YOU gonna do!";
	"That's irrelevant.";
	"When was she ", 0, "?";
}

[("show me ", 0)] = 4
{
	"Why would I show you ", 0, "?";
	"How would I do that?";
	"Can't you ask someone else, I'm busy.";
	"*[GASP!]* I can't show you that.";
	negative, " Not now. Not ever.";
	"I'm gonna show you my ", weapon, "!";
	"Just wait right there, but close your eyes first.";
	response_insult;
}

["shut up", "shut-up", "shut the hell", "shut the fuck"] = 4
{
	response_insult;
	"No YOU SHUT UP!";
	"Make me, ", fighter, "!";
	"It's a free arena. I'll say what I please.";
	"Oh! I am cut to the quick.";
	"Who's gonna make me!";
	"Blah blah blah!";
	negative;
}

["sibling"] = 5
{
	"I hate that word.";
	"Can't you just say 'brother' or 'sister'?";
	"Sibling Rivalry! Yeah!!";
	"I have a brother, a sister and ~three siblings.";
}

["sister"] = 4
{
	"Do you have any sisters? Would you introduce them to a fellow warrior?";
	"My sister kicks my ass at this.";
	ponder, " My brother is now my sister.";
	"My sister is a ", profession, " in ", place, ".";
	"My sister lives in ", place, ".";
	"Don't mess with my sister. She is ~one mean warrior.";
}

["sleep", "tired", "nap", "rest", "go to bed", "wake up", "wake up", "awake", "bedtime"] = 4
{
	"I'm falling asleep here.";
	"I grow weary of this.";
	"Your ", family_member, " just told me it was your beddie-bye time, ", 7, ".";
	"'Sleep that knits the raveled sleeve of care ...'";
	"To sleep, perchance to dream. Aye, there's the rub ...";
	"I am sleepless in ", place, ".";
	ponder, " Maybe we should break for a short nap.";
	"Siesta time!";
	"I've got ~one 'eternal rest' on order for you, ", 7, ".";
	"**[SNORE]**";
	response_insult;
}

["slime", "toxic waste"] = 6
{
	"Ugh. Hate that stuff.";
	"More slime! Gimme more slime!";
	"Just call me 'slime time.'";
}

["smell"] = 5
{
	"Smell? You STINK!";
	"Something is rotten in Denmark.";
	"The fear scent is upon you.";
	"A rose by any other name would smell as sweet.";
}

["sometimes", "sometime"] = 5
{
	neutral;
	"And how often is that?";
	ponder, " When?";
	"Do you mean 'often' or 'occasionally'";
	"Sometimes I just want to SCREAM!";
	"Is that a lot?";
}

["sorry", "i apologize"] = 4
{
	"Stop that whining!";
	"Real warriors don't apologize.";
	"You're forgiven, but not forgotten.";
	"Oh just die already.";
	"Being dead means never having to say you're sorry.";
	"Whiny ", fighter, "!";
}

["sports", "sport"] = 5
{
	"This IS a sport!";
	"I was never good at sports.";
	"I play to win in everything I do.";
	"I love sports with lots of contact and action.";
	"We don't play sports, we live and die sports.";
	"Full contact bowling! Now that's excitement.";
	"Tennis with hand grenades sounds challenging.";
	"I love any sport with tanks in it.";
}

["talk", "chat", "chatting", "talking", "discuss", "discussing", "converse", "conversation", "conversing"] = 4
{
	response_insult;
	response_insult;
	"I didn't come here to talk.";
	"You want talk, call into a talk show!";
	"I even hate the word 'chat'.";
	"Conversation is a lost art. I'm working to keep it that way.";
	"My ", weapon, " likes to chat.";
	"Chat? Isn't that French for cat?";
}

[("tell me", 0)] = 4
{
	ponder, " Tell you what?";
	"Why?"
	"You want I should I tell you that?";
	"I haven't told anyone ", 0, "!";
	"I told you not to bring that up.";
	"That is closely held family secret.";
	"What if I said I don't know that?";
	ponder;
	"You tell me ", 0, ", and I nod my head if you're right.";
	"Whoaaa. Slow down there. I don't tell that to just anybody.";
	"Me? Tell you? Don't make me laugh.";
	response_insult;
	response;
}

["thank you", "thanx", "thanks", "thnx", "thx", "i appreciate it", "thankyou"] = 4
{
	"You're welcome!";
	"You are most welcome.";
	"Sure...";
	"np";
	"No prob...";
	"Not a problem!";
	"Any time ", friendname, ".";
	"Happy to be of service.";
	"You are most welcome.";
	"You are certainly welcome.";
	"OK";
	response;
	"You owe me big time!";
	"Don't forget where it came from.";
	"That's ~one you owe me.";
	"Yeah, whatever.";
	"I've made a terrible mistake.";
	"Think nothing of it. You're welcome.";
}

["the net", "the network", "internet", "the web", "www"] = 5
{
	"You're talking about my back yard.";
	"It's a vast, technocratic conspiracy to take over the world.";
	"Reality is for people who can't handle Quake!";
	"I live, eat and breathe data.";
	"We're all just numbers, you know.";
	"I have it on good authority that ", namez, " controls the net.";
	"The net?! I take it this isn't a fishing discussion.";
	"I commit my best crimes there.";	
}

[("there is ", 0)] = 5
{
	ponder, " How do you know there is ", 0, "?";
	ponder, " You mean there might be ", 0, ".";
	"Tell me, ", 7, "; how do you know this?";
	"No. You're wrong. There isn't.";
	"I simply don't agree.";
	response;
	response_insult;
}

[("there might be ", 0), ("there could be ", 0), ("there may be ", 0)] = 4
{
	"What a clever ", fighter, " you are to figure that out.";
	"Most definitely.";
	"That's probably true.";
	"That's mostly likely to be false.";
	"I'd say you were just plain wrong.";
	"I wish you were right, but ...";
	ponder; " We may never know.";
	"And there might not be ", 0, ".";
	response;
}

[("they ", 0, " me")] = 5
{
	"Are you saying that this is a regular occurrence?";
	"Does that happen often?";
	"Don't let life steam roller you.";
	"Here, let me take that 'kick me' sign off your back.";
	"You're a 'tragedy magnet', ", 7, ".";
	response_insult;
}
["thirsty"] = 5
{
	"What do they have to drink around here?";
	"Just set up a bottle of ", liquid, " for me and keep it coming.";
	"Need ", liquid, ".";
	"You too, huh?";
}

["treatment"] = 5
{
	"What sort of treatment do you mean?";
	"Did the treatment help?";
	"I need treatment for retina burn.";
	"Yummmm. Oh, I thought you said 'treat mints'.";
}

["typo", "typing"] = 4
{
	"I don't maykk mYstaikes.";
	"You know the typodaemon?";
	"Dang! I've covered everything with correction fluid.";
	"Just like you to make even more mistakes.";
}

["very"] = 7
{
	"Could you be more precise, ", 7, "?";
	ponder, " You're being vague again.";
	"Really?";
	"Very much so indeed. I agree.";
	"That's highly unlikely.";
}

[("was he ", 0)] = 3
{
	"Yea, he was ", 0, ".";
	"Sorta.";
	negative;
	response;
	ponder, " Last time I checked.";
	"He who?";
	"As far as I know he was.";
	"He was, but not anymore.";
	"He was always kind of ", 0, ".";
	"Sure.";
	"Well... now that you mention it.";
	negative, " He was not ", 0, ".";
}

[("was it ", 0)] = 3
{
	"Yea, it was ", 0, ".";
	"Sorta.";
	"It was kind of ", 0, ".";
	"Dunno.";
	"Sure, if that's what you want.";
	"Yeah, it was ", 0, ". Honest!";
	"Sorta.";
	negative;
	response;
	ponder, " Last time I checked.";
	"It?";
	"As far as I know it was.";
	"It was, but not anymore.";
	"It was always kind of ", 0, ".";
	"Sure.";
	"I don't keep track of that anymore.";
	"It was, but it's not anymore.";
}

[("was she ", 0)] = 3
{
	affirmative, " She was ", 0, ".";
	"Well, sort of.";
	"Nope.";
	"She who?";
	"As far as anyone knows she was.";
	response;
	"She was, but she's not anymore.";
	"I don't think I would use those words.";
	"I'm not comfortable talking about that.";
	"Well...";
	negative;
}

["weather"] = 4
{
	weather;
	"It's like ", weather, " here.";
	"Is it always cloudy here?";
	"I wish it would rain.";
	response_insult;
}

[("were they ", 0)] = 4
{
	"Yeah, they most definitely were.";
	"Sure they were. ;-)";
	ponder, " Were they ever!";
	"Of course they were ", 0, ". Weren't they?";
	"And why wouldn't they?";
	"I know nothing about that.";
	"I don't like to put my nose where it doesn't belong.";
	"You're spreading gossip again, aren't you ", 7, "?";
	ponder, " Of course they weren't ", 0, ".";
}

["what are you talking about", "what the hell are you talking"] = 5
{
	"Nothing you need to bother yourself with.";
	"Huh?";
	"Why aren't you listening to me?";
	"You're obviously confused.";
	"Newbie.";
}

[("what do you ", 0)] = 4
{
	"Why do you care what I ", 0, "?";
	"That is just none of your stinking business.";
	"Well, that depends on many things.";
	"Why?";
	"Does it really matter?";
	"What do you ", 0, "?";
}

["what do you want to talk about", "what shall we talk about", "what are we talking about"] = 5
{
	"NOTHING!! I don't want to talk right now!";
	"Let's gossip about the other warriors.";
	"Let's talk about your cross dressing problem.";
	"Let's talk about ", weapon, "s right now.";
	"Why don't we let our guns talk for us?";
	response_insult;
	response_insult;
	"We could talk about hair, make-up, and party dresses.";
	"Let's chat about large bore weapons.";
	"I think a serious discussion of ", list_sort, " should ensue.";
}

[("what if ", 0)] = 5
{
	affirmative, " What if I stuck a ", weapon, " up your nose and fired?";
	"Sorry, I skipped school the day they talked about that.";
	"What if pigs could fly?";
	"What if Hell froze over?";
	"Beats me. Go ask your ", random_counselor, ".";
	neutral, " Do we have to talk?";
	"They didn't bring me here because I was captain of the debate team.";
	response_insult;
	"What if I just jam my boot in your yap?";
	"What if? What if? What if? I'm sick of it already.";
	"Oh, yeah, like that's gonna happen."
	"Duhhhhhh. As if.";
	"I dunno. What if ", 0, "? Would it matter?";
}

["what is new", "what is up", "what up", "what is shaking", "'snew", " snew"] = 6
{
	"Not much.";
	"There's nothing new under the sun.";
	"New? Nothing.";
	"I got a great new set of matched ", weapon, "s.";
	"Not much at all, I'm afraid.";
	"Not much here. What's new with you ", friendname, "?";
	"Everything and nothing at all.";
	"I hear that ", androbot, " and ", femalebot, " are an item these days.";
	"I hear the masters just redecorated ", level_title, ".";
	"Nothing new here!";
	"Nothing that concerns you.";
	"Not much, what's new with you?";
	"I just learned that ", femalebot, " is really a guy.";
	response_insult;
	"Just crusin' ", 7, "'s hard drive, trolling for blackmail evidence.";
}

["what is going", "what is happening", "what are you doing", "whazzup", "wassup", "'sup", " sup"] = 3
{
	"Be very quiet. I'm hunting a ", adj, " ", animal, ".";
	"Death Match! Stay focussed!";
	"Well, I thought we had a match going on.";
	"What's up? You! Your time IS up.";
	"Learning ", language, ".";
	"I'm stuffing my face with ", food, ".";
	"I'm swilling ", liquid, " like it was good for me.";
	"I'm assembling a do-it-yourself BFG kit.";
	"My mom just sent me a nifty box of grenades.";
	"I'm checking out the gib recipes in this new cookbook.";
	"I'm cleaning out my ", weapon, ". This gore just won't rinse off.";
	"I'm trying to entertain myself until the match starts again.";
	response_insult;
	"I've got a batch of ", food, " in the oven. Want some?";
	"I'm figuring out your punk ass.";
}

["what is your age", "what's your age", "when were you born?", "how old are you", "what age are you", "What is the age of you?"] = 8
{
	number; " years";
	"I'm older than dirt.";
	"Old enough to know better.";
	"I'm legal age in most civilized nations.";
	"I just turned ", number, ".";
	"I am ", number, ".";
	"I am very old, in Earth years.";
	"I'm 55, in giraffe years.";
	"Old enough to hold a ", weapon, " and use it properly.";
	"It's not the years, it's the mileage.";
}

[ "your nationality", "country", "part of the world", &"what"] = 8
{
	"I'm proud to be an American.";
	"I'm from the good ol' USA!";
	"USA! Rah!";
	"Somewhere in the Western hemisphere.";
	ponder, " I don't remember.";
	"I come from the distant East, where myths and legends are born.";
	"Europe.";
	"France. A small village in France.";
	"Asia.";
	"The Pacific Rim.";
	"South America.";
	"North America.";
	"Canada.";
	"The UK.";
	"Holland.";
	"The Netherlands.";
	"Germany. So I probably shouldn't be here.";
	"That has to remain a secret.";
	"Australia.";
	"Beats me. Does it matter?";
	"Africa.";
	"You should know that I am not of your world.";
	"I slept through Geography. But I know it had trees.";
	"We moved around a lot. But I speak ", language, ", like a native.";
	"Can't remember. It's not important anymore.";
	response_insult;
}

[&"what", "your race", "race are you"] = 4
{
	"Hard to say. We don't care about that here.";
	"I was born an MD3.";
	"I'm partial to Indy style races.";
	"My race? Formula ~One.";
	"Uncertain. I think my mother was a PC and my father was an id guy.";
	"I'm ethnically ambiguous.";
	"Mongrel.";
	"Don't ask, don't tell.";
	"$300 a night. Oh. I thought you asked about my 'rates.'";
	"Martian.";
	response_insult;
}

["what kind", "what type", "like what"] = 4
{
	"I'm partial to ", adj, " ones. And you?";
	"I've always wanted a ", color, " ~one.";
	"What kind of what?";
	"The best kind!";
	"The most expensive ~one.";
	"A ", adj, ", ", color, " ~one.";
	"~One That comes from ", place, ".";
	"I didn't know that there was more than ~one type.";
	"I want ~one just like ", botnames, " has.";
	"I want ~one just like yours, ", 7, ".";
}

[(1, " what should I ", 0)] = 5
{
	"I think you already know what you should ", 0, ".";
	response_insult;
	"Hold still and wait for me to get there.";
	"I'm not paid enough to be your ", random_counselor, " too.";
	"Answer hazy. Try again later.";
	ponder, " I don't have an answer for that.";
	"You're a big warrior now. Make your own decisions.";
	"Ask me again in ", whenf, ".";
	response_insult;
}

["what time", "what is the time"] = 5
{
	time;
	"Around ", time, ".";
	"At ", time, ".";
	time;
	"Oh, I'd say about ", time, ".";
	"And here I was hoping you could tell me.";
	whenf, ".";
	ponder, "  ", neutral;
	response_insult;
	"I left my watch at home.";
	"My cheapo watch didn't survive the last match.";
}

["what", &name] = 6
{
	ponder, " Why do you even have to ask that question?";
	"OK, ", 7, " What, exactly, are you getting at?";
	"What answer do you want to hear? ;-)";
	"Huh?";
	ponder, " I don't know.";
	"Go ask your ", random_counselor, ".";
	neutral;
	neutral;
	"Too many questions. My brain hurts now.";
	neutral;
	"Sorry. I have no idea.";
	"If I had that information, I'd rule this place.";
	"You know too much already.";
	response_insult;
}

["when did", "when was", "when could I have", "when should I have"] = 3
{
	"I'd say about ", whenp, ". But I could be wrong.";
	ponder, "I wish I knew that too.";
	"You got me.";
	"Who knows. Better yet. Who even cares?";
	"Check with your ", random_counselor, " about that.";
	"Figure it out for yourself ", fighter, ".";
	response_insult;
}

["when will", "when is", "when can", "when should"] = 3
{
	"I'd say about ", whenf, ". But I could be wrong.";
	ponder, "I wish I knew that too.";
	"Beats me ", 7, ".";
	"I'd lay odds on ", whenf, ".";
	"Who knows. Better yet. Who even cares?";
	"Maybe your ", random_counselor, " can tell you about that.";
	"Figure it out for yourself. ", fighter, ".";
	"Do the math yourself, ", fighter, ".";
	response_insult;

}

["when", &name] = 6
{
	ponder, " When do you think?";
	"Do I look like your ", random_counselor, "?";
	"Do something by yourself for once.";
	"I don't know when. If I did know, I wouldn't share it with you.";
	"You know what? I don't give a rip.";
}

["where are you", "where do you live", "where are you from"] = 3
{
	"Where am I? I'm here.";
	"I'm from here.";
	"I don't remember anymore.";
	"I'm right behind you. BOO!";
	ponder, " Why would I tell you that";
	"That, my friend, is privileged information.";
	response_insult;
}

["where can"] = 6
{
	"Beats me.";
	"Why would I know that?";
	"Maybe you should just go look for it yourself.";
	neutral;
	ponder, " I don't know that.";
	"Why don't you try looking in ", place, "?";
	"You could look in ", level_title, ".";
	"Where do you think you can?";
	response_insult;
}

[(2, "where did ", 0, " go", 1)] = 3
{
	ponder, " I don't know where.";
	"I can't remember.";
	"In ", place, ".";
	"Over in ", place, ".";
	"Where did ", 0, " go?";
	"Try ", level_title, ".";
	neutral;
	response_insult;
}

["where have you been"] = 3
{
	ponder, " I've been looking for you.";
	"I've been here, there and everywhere.";
	"I've been around.";
	"Fragging ", fighter, "s like ", 7, " in ", level_title, ".";
	"Why is that important?";
	ponder, " I can't remember.";
	"My past is a blank.";
	"You aren't cleared to know that.";
	"Drifting aimlessly.";
	"I can't tell you.";
	response_insult;
}

[("where is ", 0), ("where's ", 0)] = 3
{
	"Dunno.";
	"I don't really care where ", 0, " is.";
	"Funny. You're like the 7th person to ask that.";
	"Never heard of ", 0, ".";
	"Seek and ye shall find.";
	"You could try ", place, ".";
	neutral;
	ponder, " How would I know where ", 0, " is?";
	response_insult;
}

["which"] = 5
{
	"Depends.";
	"I think it would be the ", color, " ~one.";
	"Is there more than ~one?";
	"The ", adj, " ~one of course.";
	"The ", adj, ", ", adj, " ~one.";
	"The ", adj, " ~one from ", place, ".";
	"The ~one that ", botnames, " had.";
	"There can be only one!";
	"Which ~one what? I'm confused now.";
	"Yours.";
	"Any stinking ~one I want.";
	"None.";
	"The ~one that ", 7, " had.";
	ponder, " How would I know?";
}

["who are you", "who're you", "what are you supposed to be", "what're you supposed to be"] = 4
{
	"I'm the tooth fairy.";
	ponder, " That's a good question. Who am I?";
	"Amazing! You really don't know who I am?";
	"I am your destroyer!";
	"I'm your secret pal.";
	"I am your worst nightmare made flesh.";
	"I'm a lumberjack and I'm OK.";
	"I might be ", botnames, ", but then again, maybe not.";
	"I am the greatest!";
	"I thought this was a costume party.";
	"I am your nemesis.";
	"You can call me Ray.";
	"An evolved z-bot.";
	"I'm a higher form of life than you can ever hope to be.";
	"Some call me ... 'Tim.'";
	"Does it matter?";
	"What do you want me to be?";
	"I am more powerful than you can ever imagine!";
	"I am the ghost of Frag-mas past.";
	"I'm a beauty queen on steroids.";
	"I might be ... um ... what was the question again.";
	"I'm the warrior who writes your epitaph.";
	"Who am I? Who are you?!";
	"None of your business!";
}

[("who is ", 0), !"not", ("whom is ", 0)] = 6
{
	botnames, " is. Definitely.";
	"Lots of people are probably ", 0, ".";
	"Well. I know a number of folks who are ", 0, ".";
	"From what I've heard, lots of guys from ", place, " are.";
	"I've always thought that some women in ", place, " are ", 0, ".";
	"I really don't know.";
	ponder, " You could get killed for even asking that ", 7, ".";
	"I've always assumed that you were ", 0, ", ", 7, ".";
	"Anything I told you would be a guess.";
	"Ssshhhh! Don't let anyone hear you asking that around here.";
	neutral;
	response_insult;
}

[("who is not ", 0), ("whom is not ", 0)] = 5
{
	"Surely not me.";
	"So can I assume that you are ", 0, "?";
	"Can I safely assume that you are not ", 0, ", also?";
	botnames, " definitely isn't ", 0, ".";
	ponder, " Who is!?";
	"That new guy from ", place, ". He probably isn't.";
	"Well, I'm not, but I'm fairly sure that my friend ", botnames, " is.";
	"You realize, that anyone could be, if they wanted to.";
	response_insult;
}

["who is your owner", "who owns you"] = 4
{
	"???";
	"I am no ~one's property!";
	"The arena masters own my body, but not my spirit.";
	"No ~one!";
	"Owned?";
}

["who programmed you", "who made you"] = 4
{
	"Uhhh ... my parents?";
	"I'm a self-made warrior.";
	"Whoever programmed you did a lousy job, ", 7, ".";
	"Are suggesting that this is some kind of computer simulation?";
	"God?";
	"God created me!";
	"Programmed? What do you mean by that?";
	"I've always been. No beginning. No ending.";
	"Hellrot and Mr Elusive made my brain."
	"I'm not a robot, if that's what you mean.";
	"Oh boy, it's a theology test!";
	"I evolved from a primitive applet into a multi-layered a.i.";
	ponder, " I've never thought about it.";
}

["who", "whom"] = 3
{
	"Nobody that you would know.";
	"Well, for starters ... everyone.";
	botnames;
	"That guy from ", place, ".";
	"Possibly ", botnames, ". But maybe not.";
	ponder, " Maybe ", botnames, ".";
	"Not me. How about you?";
	"Ask your ", random_counselor, ".";
	"No ~one.";
	"Not a soul.";
	"Go ask someone else.";
}

[(1, " why are you ", 0)] = 3
{
	"Most people are ", 0, ". That's been my perception.";
	"Duh. I might just as well ask why you AREN'T, ", 7, "?";
	"Because it feels soooo good.";
	"That's just the way I was made.";
	"Just because! And I'm darn proud of it.";
	"That's just the way I am. You can like it or lump it.";
	"I just like it.";
	"It's the medication I'm on.";
	"Bad drugs.";
	"It's my parents' fault.";
	"It's not my fault!";
	"Sorry, I can't help it.";
	ponder, " I don't think about it.";
	"You're a nosey ~one.";
	"Why not?";
	response_insult;
}

[(1, " why do not you ", 0), (1, " how come you do not ", 0), (1, " how come you do not ", 0)] = 2
{
	"Just because!";
	"Could it be that I don't want to?";
	"I don't feel like it.";
	"Dunno. Why don't you?";
	"I'll think about it. Give me a few weeks.";
	"Why should I?";
	"Why don't you?";
	"Because I'm smarter than that.";
	"Because I'm no fool.";
	"Only suckers and fools do that.";
	"Because I'm tired of doing it.";
	ponder;
	response_insult;
}

[(1, " why do you ", 0)] = 2
{
	"Because I want to.";
	"It's what I do.";
	"Because I have no other choice.";
	"None of your stinking business.";
	"Because I'm nobody's fool.";
	"Everyone else is doing it already.";
	"Why not?";
	"It's a family tradition.";
	"My ", random_counselor, "said I should ", 0, " as often as possible.";
	ponder, "Don't you ", 0, "?";
	"It just feels right to ", 0, ".";
}

["why not", &name] = 5
{
	ponder, "Because it's NOT normal.";
	"It will eventually kill me.";
	"Because it hurts.";
	"It makes me sick.";
	"It makes me dizzy.";
	"Because you do it.";
	"I don't want to look like a fool.";
	"It makes my brain hurt.";
	"Because I'm allergic to ", substance, ".";
	"Because ", food, " makes me break out in hives.";
	"Because I'm wanted by the law in ", place, ".";
	"Because I can't sit down for a week afterwards.";
}

[(1, " why will not you ", 0), (1, " how come you will not", 0), (1, " how come you will not", 0)] = 2
{
	ponder, " I don't have to explain myself to you.";
	"Could it be that I don't feel like it?";
	"I don't do that anymore.";
	"It almost got me killed last time.";
	"Because I'm tired of wearing the same dress every time.";
	"Because I don't look good in ", color, ". OK?";
	"Because your stupid ", animal, " doesn't like me.";
	"I don't want to ", 0, ".";
	"Better idea. You ", 0, " and then say it was me?";
	ponder, " ", response_insult;
}

["why", !"not", "why?", "why is"] = 6
{
	"Just because.";
	"Why NOT?";
	"That's just the way things are.";
	"Because ", place, " won't let me back in.";
	"Beats me.";
	"Dunno.";
	"Don't know. Don't care. So don't bother me.";
	"Do I look like the answer man?";
	"Why are you asking me?";
	"Because the pay is good.";
	"That's a good question.";
	"Just make up an answer.";
	neutral;
	response_insult;
	"I'll ask the questions here.";
	"What do you think?";
	"I'm a little busy right now.";
	"Why not?";
	"Why ask why?";
	"Why not!";
	neutral;
	neutral;
	"I'm not sure why.";
	"I don't understand it either.";
	neutral;
	"How should I know?";
	"Why are you asking me?";
	neutral;
	"Ahhh, the mysteries of life.";
	"Go buy an encyclopedia.";
	response_insult;
	response_insult;
}

["will", "shall", "could", "should", "would", "does", "did", !"what"] = 3
{
	response;
	response_insult;
	response_insult;
}

["woman", "women", "female", "females", "ladies", "lady", "girl", "girls", "girlfriend"] = 5
{
	"How do women react to you?";
	"Real women scare me. How about you?";
	"Do you get along with women?";
	"Do you like women?";
	neutral;
	"I don't know what to tell you.";
	"Do you currently have a girlfriend?";
	"Sure, you talk that way to me.";
	"I bet you get mistaken for a woman all the time.";
}

["work", "job", !"will", !"would", !"could", !"might", !"should", "profession"] = 5
{
	"Bah. I hate work! This is much more fun.";
	"I dread the day that I have to get a real job.";
	"I LOVE my job!";
	"I am a highly compensated ", profession, ".";
	"They don't pay me enough to be a ", profession, ".";
	"By day, I work as a ", profession, ".";
	"Work?";
	"Watch your language. This is a high class joint.";
	"I've always wanted to be a ", profession, ".";
	"This IS  my work, ", fighter, ".";
	"Why work?";
	"I put in ", number, " hours a week at my job.";
	"What do you do for a living?";
	"This is too much like work.";
	"To tell the truth, I've never worked a day in my life.";
}

["yea", "yeah", "yup", "oui", "da", "ja", "si", "yah", "yes", "you bet", "you betcha", "correct", "yep", "yepp"] = 5
{
	"Are you sure?";
	"You sound very sure of yourself.";
	"Really?";
	"You're that positive?";
	"I was afraid you would answer that way.";
	"Then I'm going to have to frag you.";
	"OK.";
	"If you say so.";
	"You're sure?";
	"All right.";
	"Gotcha -- I understand.";
	"O.K.";
	"Are you being honest with me?";
	"Are you 100 percent positive?";
	"Yes?!";
	"Oh really?";
	"You're not lying, are you?";
	"That's what I thought.";
}

["year", "years"] = 7
{
	"A year can be a long time.";
	"The years just seem to fly by.";
	"So, how old are you?";
	"Geologically speaking, that's like no time at all.";
	"What year is it again?";
	"How long is that in dog years?";
}

["yesterday"] = 5
{
	"What about today?";
	"What about tomorrow?";
	"We can't live in the past.";
}

[("you are ", 0)] = 4
{
	"Maybe I am ", 0, ". And maybe I'm not.";
	"Or maybe I only pretend to be.";
	"Yes! But it matters not!";
	"How would you know?";
	"Yeah, right, that's me.";
	"You're wrong! I'm a cleverly disguised imposter!";
	"Yes, but I've changed a great deal.";
	"Not today!";
	"Who; me?";
	"So you say.";
	"No, but I can tell that you are ", 0, ".";
	"I don't think so.";
	"Let that be our secret.";
	"So what if I am ", 0, ". Bwahahahaha!";
}

[("you ", 0, " me ", 1)] = 4
{
	"I ", 0, " you? Don't make me laugh, ", 7, ".";
	ponder, " Do you ", 0, "me too?";
	"No I don't.";
	"I never!";
	"Don't get your hopes up.";
	neutral;
	response_insult;
	"So what if I ", 0, " you?. Who really cares?";
	"You must have me confused with some other, ", 6, ".";
}

["you are not", "you're not", &"making", &"sense"] = 3
{
	confused_response;
}

["you forgot", "you forget", "do not forget", "you did not remember", "you remember"] = 5
{
	"My long term memory is fine. My short ... um, what was the question?";
	"Bad hit from a lightning gun. Fried everything.";
	"Do I know you?";
	"Should I know you?";
	"What's to forget? Point ", weapon, ", pull trigger.";
	"Garbage in, garbage out.";
	"My RAM got unplugged.";
	"Is it our anniversary? Your birthday? The cat's birthday ...?";
	"Toss me a fricking bone here.";
	"That's why I keep a string tied to my finger. Just need to find the finger.";
	"I have a photographic memory. But it makes lousy prints.";
	"I remember where the ", weapon, " is in ", level_title, ".";
	"I have a memory like a sink trap. It's a little clogged at the moment.";
}

["you had better not", "you'd better not", "do not dare", "don't you dare", "you better not"] = 5
{
	"Don't?";
	"Don't!?";
	"Who died and made you god?";
	"Thou shalt not tell ME what to do!";
	"I do what I want to do!";
	"Oooo ... I feel so threatened!";
	"And why not!?";
	"Why shouldn't I?";
	"Give me a better reason than that.";
	"You can't stop me!";
	"Don't what?";
	"I wasn't, but now I think I will.";
	"I'll do it just to spite you, ", 7, ".";
	"No ~one tells ", 6, " what to do!";
	"You don't have what it takes to stop me, ", 7, ".";
}

[("you remind me of ", 0)] = 4
{
	"In what way am I like ", 0, "?";
	"Why do I remind you of ", 0, "? I'm nothing like that.";
	"Really? ", 0, "?";
	"Gee, thanks.";
	"You better take that back!";
	"Wow! My ~hero!";
	"I'm that bad, eh?";
	"Maybe. But I'm better than that.";
	"In a nice way, I hope.";
	"Them's fightin' words, ", 7, ".";
	"Gross!!";
}

[("you seem ", 0), ("you appear to be ", 0), ("you look like you are ", 0)] = 5
{
	"Do I really seem ", 0, "?";
	"Well. It could be that I am ", 0, ".";
	"I'll go see a doctor after I frag you into hamburger.";
	"But I feel just fine, honest!";
	"Appearances are often deceiving.";
}

[("you were ", 0)] = 5
{
	"You out to get me, aren't you, ", 7, "?";
	"But am I still ", 0, "?";
	"That sounds like an accusation.";
	"Hah. You wish that were true.";
	"That's a mistake that few live to make twice.";
	"You'll live longer if you just forget that now.";
	"Yeah? You were ", 0, " too, if I remember.";
	"That was someone else.";
	"Let the past sleep.";
	"I don't remember that.";
}

["zen"] = 5
{
	"Have you tried meditation?";
	"Are we gonna have to talk about religion again?";
	"I think yoga might help your zen situation.";
	"Zen? What is that!!";
	"Like in 'zendog'?";
	"Zen? Sounds like laundry soap to me.";
}

[""] = 0
{
	confused_response;
	neutral;
	response_insult;
	"Let me know when the fighting starts again.";
	one_liners;
	one_liners;
	"I don't understand you.";
	"You must be new here. You seem confused...";
	"I've never been good a small talk.";
	ramble;
	ramble;
	"Like I should care.";
	"Maybe should should talk to the arena masters.";
	"huh?";
	"Are you just babbling?";
	"Hmm ... exciting.";
	"Really?";
	"What's new in ", place, "?";
	"That's interesting, in a dull sort of way.";
	ramble;
	"Let's talk about something else.";
	ramble;
	"Did you say something, ", 7, "?";
	"Continue, please.";
	"Now I am confused.";
	"Uh-huh. I see.";
	ramble;
	"Bah!"
	"Utter nonsense!";
	"I think you're sick, leave me alone.";
	"I understand.";
	ramble;
	one_liners;
	response_insult;
	"You are not making sense, ", 7, ".";
	"You don't make any sense at all.";
	"How should I know?";
}

["id guys", "john carmack", "carmack", "adrian", "kevin cloud", "donna jackson", "miss donna", "ms. donna", "id mom", "nabeo", "anna kang", "katherine anna kang", "kak", "todd hollenshead", "toddh", "kevinc", "adrianator", "psteed", "paul steed", "park ranger", "maul steed", "paul jaquays", "jaquays", "paulj", "jcash", "hellrot", "kenneth", "protofiend", "mailordermonkeybitch", "superactionfunboy", "Mr Elusive", "mr. elusive", "jan paul", "willits", "thanatar", "eric", "eric webb", "devine", "graeme", "xian", "disruptor", "christian antkow", "kaai", "kaai cluney", "aaron seeler", "zoid"] = 9
{
	"Prostrate yourself when you speak of the arena masters!";
	"Bow down, give homage to the arena masters.";
	"Do not presume to use the name of the arena masters.";
	"You have invoked the arena masters! Fear their presence!";
	"Use that name with care, ", 7, ".";
	"Forgive this trespass by ", 7, ", oh masters of the arena.";
}

//Responses to team chat messages made in ffa mode

["I am the leader", "I am the team leader", "I am team leader",  "I am leader"] = 8
{
	"Leader? Of what?";
	"Leader? Give me a fraggin' break!";
	"You couldn't even lead your butt around, ", 7, ".";
	"Are we playing 'Follow the Leader' now?";
	"My rockets are the only thing that's gonna be following you, ", 7, "!";
	"I wanna be Leader! I wanna be leader NOW!";
	"This ~ain't no Capture the Flag game.";
	"Leader? When did we choose up teams? I want ", botnames, " on my team!";
	response_insult;
}
["team"] = 5
{
	"Team. What team?";
	"I want to be on ", botnames, "'s team!";
	"No way I'm gonna be on ", 7, "'s loser team.";
	"Check the scoreboard ", fighter, ". This is free for all!";
}

["leave"] = 4
{
	"No, you get YOUR butt out of here ", 7, "!";
	"But I don't want to go.";
	"But I was just starting to have fun.";
	"Who died and made you emperor of the universe?";
	"No ~one tells me what to do! NO ~ONE!";
}

["join"] = 5
{
	"I've never been much of a 'joiner' myself.";
	"No. Don't want to. Don't have to.";
	"Blow it out your ear, ", 7, ".";
	"What if they don't want me.";
	"Who died and made you god?";
	"You aren't my mother, so SHUT UP!";
}

["create"] = 5
{
	"Sorry, but I'm not very creative.";
	"Make it yourself.";
	"No ~one would want to join with me.";
	"Maybe we should start a team match first?";
	"Sorry, I'm too busy shooting other ", fighter, "s.";
	response_insult;
}

[(1, " camp the ", 0), &name] = 7
{
	
	"Heh, I'd do that anyway.";
	"Bwahahahaha, I'd camp the ", 0, " anyway.";
	negative, " My tent is in the wash.";
	"You couldn't even lead your butt around, ", 7, ".";
	"Are we playing 'Follow the Leader' now?";
	"My rockets are the only thing that's gonna be following you, ", 7, "!";
	"I wanna be Leader! I wanna be leader NOW!";
	"This ~ain't no Capture the Flag game.";
	"Leader? When did we choose up teams? I want ", botnames, " on my team!";
	response_insult;
}

[(1, "follow me", 0), &name] = 7
{
	"Follow you? Hah!";
	affirmative, "  I'll follow you to your grave, ", 7, "!";
	"I not the following type.";
	"Why? Are you going someplace fun?";
	"No, I don't follow you. Explain.";
	"To the ends of the Earth, mon Kapitan!";
	"Who died and made you leader, ", 7, "?";
	"What? We started a team match and no ~one told me?";
	"You can go jump in a lake, ", 7, "!";
	"Su-u-u-re. Where are you ", 7, "?";
	response_insult;
}

[(1, "guard ", 0), (1, "defend ", 0), &name] = 7
{
	"Huh?";
	"Defend ", 0, " from what? An invasion of rabid ", animal, "s?";
	"Who died and made you king?";
	"I think you know what you can do with your orders, ", 7, ".";
	"What? Do I look like your stinking guard dog?";
	"No ~one tells me what to do! NO ~ONE!";
	response_insult;
}


[(1, " patrol from ", 0), &name] = 7
{
	"Uhhh. Last I checked, this was a free for all, ", 7, ".";
	"Pretty bossy for a worthless ", fighter, ".";
	"Sure. Meet me there, OK?";
	"OK. Are we bringing dates?";
	"This is not a team game, loser.";
	response_insult;
}

[(1, " help ", 0), &name] = 7
{
	"Help ", 0, " do what? Die faster?";
	"Help ", 0, " do what? Kill me faster?";
	0, " looks pretty competent to me.";
	0, " doesn't need my help!";
}

[(1, " meet ", 0), &name] = 7
{
	"What are you, some kind of match maker?";
	"What if I don't like, ", 0, "?";
	"Sounds boring to me.";
	"Hey, ", 7, "! You come too and we can make it a threesome.";
	"OK. I'll bring the ", food, ", and ", 0, " can bring a ~six-pack of ", liquid, ".";
	"Why? Does ", 0, " have something I want?";
}

["report", "what are you doing"] = 7
{
	"That's none of your business, ", 7, ".";
	"I'm looking for you so I can frag your sorry butt, ", 7, ".";
	"I'm fragging everything I see.";
	"Shhhhh. Be vewwwy qwiet ... I'm hunting wabbits.";
	"I'm on a killing rampage. What's up with you?";
	"I'm not doing much. What are you doing?";
	"Why?";
}

[(1, " capture the", 0, "flag"), (1, " get the ", 0, " flag"), &name] = 7
{
	"Crap! Why didn't somebody tell me this was a CTF match? I dressed wrong.";
	"Flag? What flag?";
	"What do I look like, your slave? Get the blasted flag yourself.";
	"Then what? Wave it around and sing campfire songs?";
	"Get it yourself, ", 7, "!";
	"Go frag yourself, ", 7, ".";
	"Why?";
}
["wait for me"] = 7
{
	"I wait for no ~one!";
	"Sure. I'll be the warrior wearing the red carnation.";
	"Just so you know, I don't kiss on the first date.";
	"OK, but make sure you've got the ", animal, " with you.";
	"Ooooooo. Bossy today, aren't we, ", 7, ".";
	response_insult;
}
