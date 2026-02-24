SandsweptCavern_2F_MapScripts::
# 2 "data/maps/SandsweptCavern_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SandsweptCavern_2F_OnTransition
	.byte 0


SandsweptCavern_2F_OnTransition::
# 6 "data/maps/SandsweptCavern_2F/scripts.pory"
	goto_if_set FLAG_BRENDAN_1, SandsweptCavern_RemoveBrendan
# 7 "data/maps/SandsweptCavern_2F/scripts.pory"
	releaseall
	return


SandsweptCavern_RemoveBrendan::
# 11 "data/maps/SandsweptCavern_2F/scripts.pory"
	removeobject LOCALID_BRENDAN1
# 12 "data/maps/SandsweptCavern_2F/scripts.pory"
	releaseall
	return


Sandswept_EventScript_RightBrendan::
# 16 "data/maps/SandsweptCavern_2F/scripts.pory"
	lockall
# 17 "data/maps/SandsweptCavern_2F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 18 "data/maps/SandsweptCavern_2F/scripts.pory"
	applymovement LOCALID_BRENDAN1, Common_Movement_WalkInPlaceFasterRight
# 19 "data/maps/SandsweptCavern_2F/scripts.pory"
	waitmovement 0
# 20 "data/maps/SandsweptCavern_2F/scripts.pory"
	msgbox Sandswept_EventScript_RightBrendan_Text_0
# 22 "data/maps/SandsweptCavern_2F/scripts.pory"
	goto_if_unset FLAG_BRENDAN_1, SandSwept_EventScript_FightBrendan
# 23 "data/maps/SandsweptCavern_2F/scripts.pory"
	releaseall
	return


Sandswept_EventScript_LeftBrendan::
# 27 "data/maps/SandsweptCavern_2F/scripts.pory"
	lockall
# 28 "data/maps/SandsweptCavern_2F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 29 "data/maps/SandsweptCavern_2F/scripts.pory"
	applymovement LOCALID_BRENDAN1, Common_Movement_WalkInPlaceFasterLeft
# 30 "data/maps/SandsweptCavern_2F/scripts.pory"
	waitmovement 0
# 31 "data/maps/SandsweptCavern_2F/scripts.pory"
	msgbox Sandswept_EventScript_RightBrendan_Text_0
# 33 "data/maps/SandsweptCavern_2F/scripts.pory"
	goto_if_unset FLAG_BRENDAN_1, SandSwept_EventScript_FightBrendan
# 34 "data/maps/SandsweptCavern_2F/scripts.pory"
	releaseall
	return


# 37 "data/maps/SandsweptCavern_2F/scripts.pory"
Brendan_FaceRight:
# 38 "data/maps/SandsweptCavern_2F/scripts.pory"
	face_right
# 39 "data/maps/SandsweptCavern_2F/scripts.pory"
	end
	step_end

# 42 "data/maps/SandsweptCavern_2F/scripts.pory"
Brendan_FaceLeft:
# 43 "data/maps/SandsweptCavern_2F/scripts.pory"
	face_left
# 44 "data/maps/SandsweptCavern_2F/scripts.pory"
	end
	step_end

SandSwept_EventScript_FightBrendan::
# 48 "data/maps/SandsweptCavern_2F/scripts.pory"
	lockall
# 49 "data/maps/SandsweptCavern_2F/scripts.pory"
	trainerbattle_single TRAINER_SANDSWEPT_BRENDAN, Brendan_1_Intro, Brendan_1_Outro, Sandswept_Brendan_Defeat
# 50 "data/maps/SandsweptCavern_2F/scripts.pory"
	releaseall
	return


Sandswept_Brendan_Defeat::
# 62 "data/maps/SandsweptCavern_2F/scripts.pory"
	lockall
# 63 "data/maps/SandsweptCavern_2F/scripts.pory"
	msgbox Sandswept_Brendan_Defeat_Text_0
# 64 "data/maps/SandsweptCavern_2F/scripts.pory"
	waitmessage
# 65 "data/maps/SandsweptCavern_2F/scripts.pory"
	giveitem ITEM_BASEMENT_KEY, amount = 1
# 66 "data/maps/SandsweptCavern_2F/scripts.pory"
	setflag FLAG_BASEMENT_KEY
# 67 "data/maps/SandsweptCavern_2F/scripts.pory"
	setvar VAR_BRENDAN_1, 1
# 68 "data/maps/SandsweptCavern_2F/scripts.pory"
	msgbox Sandswept_Brendan_Defeat_Text_1
# 69 "data/maps/SandsweptCavern_2F/scripts.pory"
	waitmessage
# 70 "data/maps/SandsweptCavern_2F/scripts.pory"
	applymovement LOCALID_BRENDAN1, Sandswept_BrendanExit
# 71 "data/maps/SandsweptCavern_2F/scripts.pory"
	waitmovement
# 72 "data/maps/SandsweptCavern_2F/scripts.pory"
	removeobject LOCALID_BRENDAN1
# 73 "data/maps/SandsweptCavern_2F/scripts.pory"
	playse SE_EXIT
# 74 "data/maps/SandsweptCavern_2F/scripts.pory"
	waitse
# 75 "data/maps/SandsweptCavern_2F/scripts.pory"
	setflag FLAG_BRENDAN_1
# 76 "data/maps/SandsweptCavern_2F/scripts.pory"
	releaseall
	return


# 79 "data/maps/SandsweptCavern_2F/scripts.pory"
Sandswept_BrendanExit:
# 80 "data/maps/SandsweptCavern_2F/scripts.pory"
	face_down
# 81 "data/maps/SandsweptCavern_2F/scripts.pory"
	walk_down
# 81 "data/maps/SandsweptCavern_2F/scripts.pory"
	walk_down
# 81 "data/maps/SandsweptCavern_2F/scripts.pory"
	walk_down
	step_end

Sandswept_EventScript_RightBrendan_Text_0:
# 20 "data/maps/SandsweptCavern_2F/scripts.pory"
	.string "It appears that this room is the\n"
	.string "center of the magnetic field\l"
	.string "here... Sorry, I forgot to\l"
	.string "introduce myself. I'm BRENDAN. I\l"
	.string "could explain more about myself,\l"
	.string "but I find that there's no better\l"
	.string "way to learn about someone than a\l"
	.string "POKéMON BATTLE.$"

Sandswept_Brendan_Defeat_Text_0:
# 63 "data/maps/SandsweptCavern_2F/scripts.pory"
	.string "I can tell that you're a virtuous\n"
	.string "TRAINER. You should take this:$"

Sandswept_Brendan_Defeat_Text_1:
# 68 "data/maps/SandsweptCavern_2F/scripts.pory"
	.string "That will allow you to access the\n"
	.string "UNDERGROUND PATH. There's an\l"
	.string "entrance south of CERULEAN CITY.$"

Brendan_1_Intro::
# 53 "data/maps/SandsweptCavern_2F/scripts.pory"
	.string "Let's get to know each other,\n"
	.string "whattaya say?$"

Brendan_1_Outro::
# 57 "data/maps/SandsweptCavern_2F/scripts.pory"
	.string "I understand you now.$"
