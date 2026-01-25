# 1 "data/maps/SandsweptCavern_North/scripts.pory"

# 2 "data/maps/SandsweptCavern_North/scripts.pory"

# 3 "data/maps/SandsweptCavern_North/scripts.pory"
SandsweptCavern_North_MapScripts::
# 4 "data/maps/SandsweptCavern_North/scripts.pory"
	.byte 0

SandsweptCavern_EventScript_Melody::
# 9 "data/maps/SandsweptCavern_North/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_MELODY, Melody_Intro, Melody_Outro
# 10 "data/maps/SandsweptCavern_North/scripts.pory"
	msgbox Melody_Postbattle, MSGBOX_AUTOCLOSE
# 11 "data/maps/SandsweptCavern_North/scripts.pory"
	waitmessage
# 12 "data/maps/SandsweptCavern_North/scripts.pory"
	releaseall
	return


SandsweptCavern_EventScript_Benji::
# 28 "data/maps/SandsweptCavern_North/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_BENJI, Benji_Intro, Benji_Outro
# 29 "data/maps/SandsweptCavern_North/scripts.pory"
	msgbox Benji_Postbattle, MSGBOX_AUTOCLOSE
# 30 "data/maps/SandsweptCavern_North/scripts.pory"
	waitmessage
# 31 "data/maps/SandsweptCavern_North/scripts.pory"
	releaseall
	return


SandsweptCavern_EventScript_Cedric::
# 47 "data/maps/SandsweptCavern_North/scripts.pory"
	trainerbattle_single TRAINER_RUIN_MANIAC_CEDRIC, Cedric_Intro, Cedric_Outro
# 48 "data/maps/SandsweptCavern_North/scripts.pory"
	msgbox Cedric_Postbattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/SandsweptCavern_North/scripts.pory"
	waitmessage
# 50 "data/maps/SandsweptCavern_North/scripts.pory"
	releaseall
	return


SandsweptCavern_EventScript_Selena::
# 66 "data/maps/SandsweptCavern_North/scripts.pory"
	trainerbattle_single TRAINER_CRUSH_GIRL_SELENA, Selena_Intro, Selena_Outro
# 67 "data/maps/SandsweptCavern_North/scripts.pory"
	msgbox Selena_Postbattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/SandsweptCavern_North/scripts.pory"
	waitmessage
# 69 "data/maps/SandsweptCavern_North/scripts.pory"
	releaseall
	return


SandsweptCavern_EventScript_Wren::
# 85 "data/maps/SandsweptCavern_North/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_WREN, Wren_Intro, Wren_Outro
# 86 "data/maps/SandsweptCavern_North/scripts.pory"
	msgbox Wren_Postbattle, MSGBOX_AUTOCLOSE
# 87 "data/maps/SandsweptCavern_North/scripts.pory"
	waitmessage
# 88 "data/maps/SandsweptCavern_North/scripts.pory"
	releaseall
	return


SandsweptCavern_EventScript_Zane::
# 104 "data/maps/SandsweptCavern_North/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_ZANE, Zane_Intro, Zane_Outro
# 105 "data/maps/SandsweptCavern_North/scripts.pory"
	msgbox Zane_Postbattle, MSGBOX_AUTOCLOSE
# 106 "data/maps/SandsweptCavern_North/scripts.pory"
	waitmessage
# 107 "data/maps/SandsweptCavern_North/scripts.pory"
	releaseall
	return


SandsweptCavern_EventScript_Ilia::
# 123 "data/maps/SandsweptCavern_North/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_ILIA, Ilia_Intro, Ilia_Outro
# 124 "data/maps/SandsweptCavern_North/scripts.pory"
	msgbox Ilia_Postbattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/SandsweptCavern_North/scripts.pory"
	waitmessage
# 126 "data/maps/SandsweptCavern_North/scripts.pory"
	releaseall
	return


SandsweptCavern_EventScript_OldMan::
# 142 "data/maps/SandsweptCavern_North/scripts.pory"
	lockall
# 143 "data/maps/SandsweptCavern_North/scripts.pory"
	faceplayer
# 144 "data/maps/SandsweptCavern_North/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM21_SANDSWEPT, SandsweptCavern_EventScript_GivePerishSong
# 145 "data/maps/SandsweptCavern_North/scripts.pory"
	msgbox SandsweptCavern_EventScript_OldMan_Text_0
# 146 "data/maps/SandsweptCavern_North/scripts.pory"
	releaseall
	return


SandsweptCavern_EventScript_GivePerishSong::
# 150 "data/maps/SandsweptCavern_North/scripts.pory"
	msgbox SandsweptCavern_EventScript_GivePerishSong_Text_0
# 155 "data/maps/SandsweptCavern_North/scripts.pory"
	giveitem ITEM_TM21, amount = 1
# 156 "data/maps/SandsweptCavern_North/scripts.pory"
	setflag FLAG_RECEIVED_TM21_SANDSWEPT
# 157 "data/maps/SandsweptCavern_North/scripts.pory"
	msgbox SandsweptCavern_EventScript_GivePerishSong_Text_1
# 158 "data/maps/SandsweptCavern_North/scripts.pory"
	releaseall
	return


SandsweptCavern_EventScript_OldMan_Text_0:
# 145 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "Remember; our time is always\n"
	.string "limited, even when we don't realize\l"
	.string "it.$"

SandsweptCavern_EventScript_GivePerishSong_Text_0:
# 150 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "The falling sand here in SANDSWEPT\n"
	.string "CAVERN always leaves me\l"
	.string "breathless. I can't help but\l"
	.string "imagine the grains of sand in an\l"
	.string "hourglass slowly dwindling as time\l"
	.string "marches forward. Sooner than you\l"
	.string "realize, you'll be my age. My\l"
	.string "favorite POKéMON MOVE perfectly\l"
	.string "encapsulates this theme as well.\l"
	.string "You ought to try it yourself.$"

SandsweptCavern_EventScript_GivePerishSong_Text_1:
# 157 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "That TM contains PERISH SONG.\n"
	.string "Remember; our time is always\l"
	.string "limited, even when we don't realize\l"
	.string "it.$"

Melody_Intro::
# 15 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "I keep getting sand in my shoes...$"

Melody_Outro::
# 19 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "I would've won if it weren't for\n"
	.string "this sand distracting me.$"

Melody_Postbattle::
# 23 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "I come here to train my POKéMON,\n"
	.string "but I have to constantly replace\l"
	.string "my wardrobe.$"

Benji_Intro::
# 34 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "Guten tag.$"

Benji_Outro::
# 38 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "Auf Wiedersehen.$"

Benji_Postbattle::
# 42 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "Ich habe verloren. Wie tragisch...$"

Cedric_Intro::
# 53 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "Now there's a new face!$"

Cedric_Outro::
# 57 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "How pleasant it was so meet a\n"
	.string "talented TRAINER like you!$"

Cedric_Postbattle::
# 61 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "I can't understand what the guy\n"
	.string "across from me is saying.$"

Selena_Intro::
# 72 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "Fight me!$"

Selena_Outro::
# 76 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "Battered and bruised...$"

Selena_Postbattle::
# 80 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "You've got tremendous knockout\n"
	.string "power.$"

Wren_Intro::
# 91 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "Maybe I can focus on a BATTLE\n"
	.string "instead of this awful weather.$"

Wren_Outro::
# 95 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "I don't really like this place.$"

Wren_Postbattle::
# 99 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "I've gotta get out of here.$"

Zane_Intro::
# 110 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "Let me stop you right there.$"

Zane_Outro::
# 114 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "I'm stunned.$"

Zane_Postbattle::
# 118 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "I need to study more. I can't get\n"
	.string "caught off guard like that again.$"

Ilia_Intro::
# 129 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "Let's spar!$"

Ilia_Outro::
# 133 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "I didn't anticipate that I'd clash\n"
	.string "with such a skilled combatant.$"

Ilia_Postbattle::
# 137 "data/maps/SandsweptCavern_North/scripts.pory"
	.string "A true martial artist uses the\n"
	.string "environment to their advantage.$"
