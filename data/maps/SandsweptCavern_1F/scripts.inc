# 1 "data/maps/SandsweptCavern_1F/scripts.pory"

# 2 "data/maps/SandsweptCavern_1F/scripts.pory"

# 3 "data/maps/SandsweptCavern_1F/scripts.pory"
SandsweptCavern_1F_MapScripts::
# 4 "data/maps/SandsweptCavern_1F/scripts.pory"
	.byte 0

SandsweptCavern_EventScript_Heath::
# 9 "data/maps/SandsweptCavern_1F/scripts.pory"
	trainerbattle_single TRAINER_RUIN_MANIAC_HEATH, Heath_Intro, Heath_Outro
# 10 "data/maps/SandsweptCavern_1F/scripts.pory"
	msgbox Heath_Postbattle, MSGBOX_AUTOCLOSE
# 11 "data/maps/SandsweptCavern_1F/scripts.pory"
	waitmessage
# 12 "data/maps/SandsweptCavern_1F/scripts.pory"
	releaseall
	return


SandsweptCavern_EventScript_Miley::
# 28 "data/maps/SandsweptCavern_1F/scripts.pory"
	trainerbattle_single TRAINER_CRUSH_GIRL_MILEY, Miley_Intro, Miley_Outro
# 29 "data/maps/SandsweptCavern_1F/scripts.pory"
	msgbox Miley_Postbattle, MSGBOX_AUTOCLOSE
# 30 "data/maps/SandsweptCavern_1F/scripts.pory"
	waitmessage
# 31 "data/maps/SandsweptCavern_1F/scripts.pory"
	releaseall
	return


SandsweptCavern_EventScript_Layne::
# 47 "data/maps/SandsweptCavern_1F/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_LAYNE, Layne_Intro, Layne_Outro
# 48 "data/maps/SandsweptCavern_1F/scripts.pory"
	msgbox Layne_Postbattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/SandsweptCavern_1F/scripts.pory"
	waitmessage
# 50 "data/maps/SandsweptCavern_1F/scripts.pory"
	releaseall
	return


SandsweptCavern_EventScript_Lincoln::
# 66 "data/maps/SandsweptCavern_1F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_LINCOLN, Lincoln_Intro, Lincoln_Outro
# 67 "data/maps/SandsweptCavern_1F/scripts.pory"
	msgbox Lincoln_Postbattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/SandsweptCavern_1F/scripts.pory"
	waitmessage
# 69 "data/maps/SandsweptCavern_1F/scripts.pory"
	releaseall
	return


SandsweptCavern_EventScript_Sullivan::
# 85 "data/maps/SandsweptCavern_1F/scripts.pory"
	trainerbattle_single TRAINER_RUIN_MANIAC_SULLIVAN, Sullivan_Intro, Sullivan_Outro
# 86 "data/maps/SandsweptCavern_1F/scripts.pory"
	msgbox Sullivan_Postbattle, MSGBOX_AUTOCLOSE
# 87 "data/maps/SandsweptCavern_1F/scripts.pory"
	waitmessage
# 88 "data/maps/SandsweptCavern_1F/scripts.pory"
	releaseall
	return


SandsweptCavern_EventScript_Hadley::
# 104 "data/maps/SandsweptCavern_1F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_HADLEY, Hadley_Intro, Hadley_Outro
# 105 "data/maps/SandsweptCavern_1F/scripts.pory"
	msgbox Hadley_Postbattle, MSGBOX_AUTOCLOSE
# 106 "data/maps/SandsweptCavern_1F/scripts.pory"
	waitmessage
# 107 "data/maps/SandsweptCavern_1F/scripts.pory"
	releaseall
	return


SandsweptCavern_EventScript_Ramsey::
# 123 "data/maps/SandsweptCavern_1F/scripts.pory"
	trainerbattle_single TRAINER_HIKER_RAMSEY, Ramsey_Intro, Ramsey_Outro
# 124 "data/maps/SandsweptCavern_1F/scripts.pory"
	msgbox Ramsey_Postbattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/SandsweptCavern_1F/scripts.pory"
	waitmessage
# 126 "data/maps/SandsweptCavern_1F/scripts.pory"
	releaseall
	return


SandsweptCavern_EventScript_Scientist::
# 142 "data/maps/SandsweptCavern_1F/scripts.pory"
	lockall
# 143 "data/maps/SandsweptCavern_1F/scripts.pory"
	faceplayer
# 144 "data/maps/SandsweptCavern_1F/scripts.pory"
	msgbox SandsweptCavern_EventScript_Scientist_Text_0
# 146 "data/maps/SandsweptCavern_1F/scripts.pory"
	releaseall
	return


SandsweptCavern_EventScript_Camper::
# 150 "data/maps/SandsweptCavern_1F/scripts.pory"
	lockall
# 151 "data/maps/SandsweptCavern_1F/scripts.pory"
	faceplayer
# 152 "data/maps/SandsweptCavern_1F/scripts.pory"
	msgbox SandsweptCavern_EventScript_Camper_Text_0
# 153 "data/maps/SandsweptCavern_1F/scripts.pory"
	releaseall
	return


SandsweptCavern_EventScript_Black_Belt::
# 157 "data/maps/SandsweptCavern_1F/scripts.pory"
	lockall
# 158 "data/maps/SandsweptCavern_1F/scripts.pory"
	faceplayer
# 159 "data/maps/SandsweptCavern_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_FOCUS_BAND_SANDSWEPT, SandsweptCavern_EventScript_GetFocusBand
# 160 "data/maps/SandsweptCavern_1F/scripts.pory"
	msgbox SandsweptCavern_EventScript_Black_Belt_Text_0
# 161 "data/maps/SandsweptCavern_1F/scripts.pory"
	releaseall
	return


SandsweptCavern_EventScript_GetFocusBand::
# 165 "data/maps/SandsweptCavern_1F/scripts.pory"
	msgbox SandsweptCavern_EventScript_GetFocusBand_Text_0
# 167 "data/maps/SandsweptCavern_1F/scripts.pory"
	giveitem ITEM_FOCUS_BAND, amount = 1
# 168 "data/maps/SandsweptCavern_1F/scripts.pory"
	setflag FLAG_RECEIVED_FOCUS_BAND_SANDSWEPT
# 169 "data/maps/SandsweptCavern_1F/scripts.pory"
	releaseall
	return


SandsweptCavern_EventScript_Scientist_Text_0:
# 144 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "The fluctuating magnetic field\n"
	.string "here in SANDSWEPT CAVERN\l"
	.string "agitates the ferromagnetic\l"
	.string "minerals in the sand. It's a\l"
	.string "bizarre thing to experience, but\l"
	.string "he result is a SANDSTORM without\l"
	.string "any wind.$"

SandsweptCavern_EventScript_Camper_Text_0:
# 152 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "This remote area has far less\n"
	.string "sand. It's a reprieve from the\l"
	.string "constant barrage out there.$"

SandsweptCavern_EventScript_Black_Belt_Text_0:
# 160 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "I have my POKéMON hold a FOCUS\n"
	.string "BAND to help them focus on\l"
	.string "incoming attacks.$"

SandsweptCavern_EventScript_GetFocusBand_Text_0:
# 165 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "If a POKéMON is able to perfectly\n"
	.string "focus on an incoming attack, they\l"
	.string "can sometimes survive a hit that\l"
	.string "would otherwise cause them to\l"
	.string "faint. I have my POKéMON hold this\l"
	.string "ITEM to help them focus.$"

Heath_Intro::
# 15 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "Wait just moment, there.$"

Heath_Outro::
# 19 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "We've been swept away.$"

Heath_Postbattle::
# 23 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "There are so many fascinating\n"
	.string "GROUND and ROCK-type POKéMON\l"
	.string "here in SANDSWEPT CAVERN.$"

Miley_Intro::
# 34 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "Square up!$"

Miley_Outro::
# 38 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "That was quite a bout.$"

Miley_Postbattle::
# 42 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "The violent sands in this cave\n"
	.string "system are perfect for training\l"
	.string "my POKéMON to have a thicker skin.\l"
	.string "They will be prepared for anything\l"
	.string "after I'm done.$"

Layne_Intro::
# 53 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "Excuse me...$"

Layne_Outro::
# 57 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "My apologies. I wasn't much of a\n"
	.string "challenge for you.$"

Layne_Postbattle::
# 61 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "I'd like to learn more about the\n"
	.string "mysterious POKéMON that appear\l"
	.string "here, but traveling deeper into\l"
	.string "SANDSWEPT CAVERN is daunting.$"

Lincoln_Intro::
# 72 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "Yo!$"

Lincoln_Outro::
# 76 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "Ho Boy! What a battle!$"

Lincoln_Postbattle::
# 80 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "You're pretty cool, yourself.$"

Sullivan_Intro::
# 91 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "I'm hunting for signs of ancient\n"
	.string "civilization. But a POKéMON BATTLE\l"
	.string "makes for a perfect respite.$"

Sullivan_Outro::
# 95 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "Back to work for me.$"

Sullivan_Postbattle::
# 99 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "From what we know, ancient\n"
	.string "peoples had POKéMON by their side\l"
	.string "as well. Perhaps even more\l"
	.string "intertwined with their lives than\l"
	.string "ours are today.$"

Hadley_Intro::
# 110 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "You think you've got the skills to\n"
	.string "defeat me?$"

Hadley_Outro::
# 114 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "Your POKéMON were unfazed.$"

Hadley_Postbattle::
# 118 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "Some POKéMON shine more than\n"
	.string "others in these WEATHER\l"
	.string "conditions.$"

Ramsey_Intro::
# 129 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "I'm ashamed to say I've misplaced\n"
	.string "my MAP. In the meantime, care to\l"
	.string "engage in a POKéMON BATTLE?$"

Ramsey_Outro::
# 133 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "What fun!$"

Ramsey_Postbattle::
# 137 "data/maps/SandsweptCavern_1F/scripts.pory"
	.string "I've reached what appears to be a\n"
	.string "dead end on my trek. There's\l"
	.string "nothing here except an ominous\l"
	.string "hole in the ground.$"
