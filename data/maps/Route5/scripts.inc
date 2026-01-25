# 1 "data/maps/Route5/scripts.pory"

# 2 "data/maps/Route5/scripts.pory"

# 3 "data/maps/Route5/scripts.pory"
Route5_MapScripts::
# 4 "data/maps/Route5/scripts.pory"
	.byte 0
# 5 "data/maps/Route5/scripts.pory"

# 6 "data/maps/Route5/scripts.pory"
Route5_EventScript_UndergroundPathSign::
# 7 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_UndergroundPathSign, MSGBOX_SIGN
# 8 "data/maps/Route5/scripts.pory"
	end

Route5_EventScript_Aubrey::
# 13 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_AROMA_LADY_AUBREY, Aubrey_Intro, Aubrey_Outro
# 14 "data/maps/Route5/scripts.pory"
	msgbox Aubrey_Postbattle, MSGBOX_AUTOCLOSE
# 15 "data/maps/Route5/scripts.pory"
	waitmessage
	end


Route5_EventScript_Weston::
# 32 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_WESTON, Weston_Intro, Weston_Outro
# 33 "data/maps/Route5/scripts.pory"
	msgbox Weston_Postbattle, MSGBOX_AUTOCLOSE
# 34 "data/maps/Route5/scripts.pory"
	waitmessage
	end


Route5_EventScript_Camper::
# 51 "data/maps/Route5/scripts.pory"
	lockall
# 52 "data/maps/Route5/scripts.pory"
	faceplayer
# 53 "data/maps/Route5/scripts.pory"
	msgbox Route5_EventScript_Camper_Text_0
# 54 "data/maps/Route5/scripts.pory"
	releaseall
	return


Route5_EventScript_Lass::
# 58 "data/maps/Route5/scripts.pory"
	lockall
# 59 "data/maps/Route5/scripts.pory"
	faceplayer
# 60 "data/maps/Route5/scripts.pory"
	msgbox Route5_EventScript_Lass_Text_0
# 61 "data/maps/Route5/scripts.pory"
	releaseall
	return


Route5_EventScript_ToCloudedWood::
# 65 "data/maps/Route5/scripts.pory"
	lockall
# 66 "data/maps/Route5/scripts.pory"
	msgbox Route5_EventScript_ToCloudedWood_Text_0, MSGBOX_SIGN
# 67 "data/maps/Route5/scripts.pory"
	releaseall
	return


Route5_EventScript_UndergroundDoor::
# 71 "data/maps/Route5/scripts.pory"
	lockall
# 72 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_BASEMENT_KEY, Route5_EventScript_UseKey
# 73 "data/maps/Route5/scripts.pory"
	call Route5_EventScript_DoorLocked
# 74 "data/maps/Route5/scripts.pory"
	releaseall
	return


Route5_EventScript_DoorLocked::
# 78 "data/maps/Route5/scripts.pory"
	lockall
# 79 "data/maps/Route5/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 80 "data/maps/Route5/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 81 "data/maps/Route5/scripts.pory"
	waitmovement
# 82 "data/maps/Route5/scripts.pory"
	delay 10
# 83 "data/maps/Route5/scripts.pory"
	msgbox Route5_EventScript_DoorLocked_Text_0
# 84 "data/maps/Route5/scripts.pory"
	waitmessage
# 85 "data/maps/Route5/scripts.pory"
	delay 8
# 86 "data/maps/Route5/scripts.pory"
	closemessage
# 87 "data/maps/Route5/scripts.pory"
	applymovement LOCALID_PLAYER, WalkDownward
# 88 "data/maps/Route5/scripts.pory"
	waitmovement
# 89 "data/maps/Route5/scripts.pory"
	setobjectmovementtype LOCALID_PLAYER, MOVEMENT_TYPE_FACE_DOWN
# 90 "data/maps/Route5/scripts.pory"
	releaseall
	return


# 93 "data/maps/Route5/scripts.pory"
WalkDownward:
# 94 "data/maps/Route5/scripts.pory"
	face_down
# 95 "data/maps/Route5/scripts.pory"
	walk_down
# 96 "data/maps/Route5/scripts.pory"
	face_down
	step_end

Route5_EventScript_UseKey::
# 100 "data/maps/Route5/scripts.pory"
	lockall
# 101 "data/maps/Route5/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 102 "data/maps/Route5/scripts.pory"
	msgbox Route5_EventScript_UseKey_Text_0, MSGBOX_YESNO
# 103 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route5_EventScript_Unlock_Underground
# 104 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route5_EventScript_DoorStillLocked
# 105 "data/maps/Route5/scripts.pory"
	releaseall
	return


Route5_EventScript_Unlock_Underground::
# 109 "data/maps/Route5/scripts.pory"
	lockall
# 110 "data/maps/Route5/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 111 "data/maps/Route5/scripts.pory"
	msgbox Route5_EventScript_Unlock_Underground_Text_0
# 112 "data/maps/Route5/scripts.pory"
	waitmessage
# 113 "data/maps/Route5/scripts.pory"
	setvar VAR_UNLOCK_UNDERGROUND, 1
# 114 "data/maps/Route5/scripts.pory"
	releaseall
	return


Route5_EventScript_DoorStillLocked::
# 118 "data/maps/Route5/scripts.pory"
	lockall
# 119 "data/maps/Route5/scripts.pory"
	applymovement LOCALID_PLAYER, WalkDownward
# 120 "data/maps/Route5/scripts.pory"
	waitmovement
# 121 "data/maps/Route5/scripts.pory"
	releaseall
	return


Route5_EventScript_Camper_Text_0:
# 53 "data/maps/Route5/scripts.pory"
	.string "It's much less busy here on this\n"
	.string "side of the DAYCARE.$"

Route5_EventScript_Lass_Text_0:
# 60 "data/maps/Route5/scripts.pory"
	.string "I left my PONYTA at the daycare\n"
	.string "for a while and now it knows\l"
	.string "different MOVES!$"

Route5_EventScript_ToCloudedWood_Text_0:
# 66 "data/maps/Route5/scripts.pory"
	.string "To CLOUDED WOOD.$"

Route5_EventScript_DoorLocked_Text_0:
# 83 "data/maps/Route5/scripts.pory"
	.string "The door appears to be locked.$"

Route5_EventScript_UseKey_Text_0:
# 102 "data/maps/Route5/scripts.pory"
	.string "Use the UNDERGROUND KEY?$"

Route5_EventScript_Unlock_Underground_Text_0:
# 111 "data/maps/Route5/scripts.pory"
	.string "{PLAYER} used the UNDERGROUND\n"
	.string "KEY.$"

Aubrey_Intro::
# 19 "data/maps/Route5/scripts.pory"
	.string "POKéMON battles are a thing of\n"
	.string "beauty!$"

Aubrey_Outro::
# 23 "data/maps/Route5/scripts.pory"
	.string "Your POKéMON were gorgeous.$"

Aubrey_Postbattle::
# 27 "data/maps/Route5/scripts.pory"
	.string "Ahead is CLOUDED WOOD. I'd go\n"
	.string "there to train my POKéMON, but the\l"
	.string "vibe is always so gloomy.$"

Weston_Intro::
# 38 "data/maps/Route5/scripts.pory"
	.string "You're about to become another\n"
	.string "feather in my cap!$"

Weston_Outro::
# 42 "data/maps/Route5/scripts.pory"
	.string "What a downer.$"

Weston_Postbattle::
# 46 "data/maps/Route5/scripts.pory"
	.string "CLOUDED WOOD is too dreary for my\n"
	.string "taste. I prefer to battle under\l"
	.string "clear skies.$"
