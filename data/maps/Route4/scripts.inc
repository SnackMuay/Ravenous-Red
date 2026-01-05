Route4_MapScripts::
# 2 "data/maps/Route4/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route4_OnTransition
	.byte 0


Route4_OnTransition::
# 6 "data/maps/Route4/scripts.pory"
	setflag FLAG_HIDE_MAY_ROUTE_4
	return


# 9 "data/maps/Route4/scripts.pory"

# 10 "data/maps/Route4/scripts.pory"
Route4_EventScript_Unused::
# 11 "data/maps/Route4/scripts.pory"
	end
# 12 "data/maps/Route4/scripts.pory"

# 13 "data/maps/Route4/scripts.pory"
Route4_EventScript_Woman::
# 14 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_TrippedOverGeodude, MSGBOX_NPC
# 15 "data/maps/Route4/scripts.pory"
	end
# 16 "data/maps/Route4/scripts.pory"

# 17 "data/maps/Route4/scripts.pory"
Route4_EventScript_MtMoonSign::
# 18 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_MtMoonEntrance, MSGBOX_SIGN
# 19 "data/maps/Route4/scripts.pory"
	end
# 20 "data/maps/Route4/scripts.pory"

# 21 "data/maps/Route4/scripts.pory"
Route4_EventScript_RouteSign::
# 22 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_RouteSign, MSGBOX_SIGN
# 23 "data/maps/Route4/scripts.pory"
	end

Route4_Trigger_May::
# 27 "data/maps/Route4/scripts.pory"
	lockall
# 28 "data/maps/Route4/scripts.pory"
	opendoor 12, 5
# 29 "data/maps/Route4/scripts.pory"
	waitdooranim
# 30 "data/maps/Route4/scripts.pory"
	addobject LOCALID_MAY_2
# 31 "data/maps/Route4/scripts.pory"
	clearflag FLAG_HIDE_MAY_ROUTE_4
# 32 "data/maps/Route4/scripts.pory"
	applymovement LOCALID_MAY_2, May_ExitPC
# 33 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route4/scripts.pory"
	closedoor 12, 5
# 35 "data/maps/Route4/scripts.pory"
	waitdooranim
# 36 "data/maps/Route4/scripts.pory"
	applymovement LOCALID_MAY_2, May_Approach
# 37 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route4/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, Route4_EventScript_May_Charmander
# 39 "data/maps/Route4/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, Route4_EventScript_May_Piplup
# 40 "data/maps/Route4/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, Route4_EventScript_May_Chikorita
# 41 "data/maps/Route4/scripts.pory"
	releaseall
	return


Route4_EventScript_May_Chikorita::
# 45 "data/maps/Route4/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 46 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE_4_MAY_CHIKORITA, May_2_Intro, May_2_Outro, May_2_Defeat
# 47 "data/maps/Route4/scripts.pory"
	releaseall
	return


Route4_EventScript_May_Piplup::
# 51 "data/maps/Route4/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 52 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE_4_MAY_PIPLUP, May_2_Intro, May_2_Outro, May_2_Defeat
# 53 "data/maps/Route4/scripts.pory"
	releaseall
	return


Route4_EventScript_May_Charmander::
# 57 "data/maps/Route4/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 58 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE_4_MAY_CHARMANDER, May_2_Intro, May_2_Outro, May_2_Defeat
# 59 "data/maps/Route4/scripts.pory"
	releaseall
	return


May_2_Defeat::
# 63 "data/maps/Route4/scripts.pory"
	lockall
# 64 "data/maps/Route4/scripts.pory"
	applymovement LOCALID_MAY_2, May_Depart
# 65 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route4/scripts.pory"
	removeobject LOCALID_MAY_2
# 67 "data/maps/Route4/scripts.pory"
	setvar VAR_ROUTE_4_MAY, 1
# 68 "data/maps/Route4/scripts.pory"
	setflag FLAG_MAY_DEFEATED_ROUTE_4
# 69 "data/maps/Route4/scripts.pory"
	setflag FLAG_HIDE_MAY_ROUTE_4
# 70 "data/maps/Route4/scripts.pory"
	releaseall
	return


# 81 "data/maps/Route4/scripts.pory"
May_Appear:
# 82 "data/maps/Route4/scripts.pory"
	walk_down
# 82 "data/maps/Route4/scripts.pory"
	walk_down
# 82 "data/maps/Route4/scripts.pory"
	walk_down
# 82 "data/maps/Route4/scripts.pory"
	walk_down
# 82 "data/maps/Route4/scripts.pory"
	walk_down
# 82 "data/maps/Route4/scripts.pory"
	walk_down
# 82 "data/maps/Route4/scripts.pory"
	walk_down
	step_end

# 85 "data/maps/Route4/scripts.pory"
May_ExitPC:
# 86 "data/maps/Route4/scripts.pory"
	walk_down
	step_end

# 89 "data/maps/Route4/scripts.pory"
May_Approach:
# 90 "data/maps/Route4/scripts.pory"
	walk_right
# 90 "data/maps/Route4/scripts.pory"
	walk_right
# 90 "data/maps/Route4/scripts.pory"
	walk_right
# 90 "data/maps/Route4/scripts.pory"
	walk_right
# 90 "data/maps/Route4/scripts.pory"
	walk_right
# 90 "data/maps/Route4/scripts.pory"
	walk_right
	step_end

# 93 "data/maps/Route4/scripts.pory"
May_Depart:
# 94 "data/maps/Route4/scripts.pory"
	walk_left
# 94 "data/maps/Route4/scripts.pory"
	walk_left
# 94 "data/maps/Route4/scripts.pory"
	walk_left
# 94 "data/maps/Route4/scripts.pory"
	walk_left
# 94 "data/maps/Route4/scripts.pory"
	walk_left
# 95 "data/maps/Route4/scripts.pory"
	walk_down
# 95 "data/maps/Route4/scripts.pory"
	walk_down
# 95 "data/maps/Route4/scripts.pory"
	walk_down
# 95 "data/maps/Route4/scripts.pory"
	walk_down
# 95 "data/maps/Route4/scripts.pory"
	walk_down
# 95 "data/maps/Route4/scripts.pory"
	walk_down
# 95 "data/maps/Route4/scripts.pory"
	walk_down
	step_end

May_2_Intro::
# 73 "data/maps/Route4/scripts.pory"
	.string "You're here too? That's impressive for\n"
	.string "someone like you. Let's see if you've\l"
	.string "improved at all.$"

May_2_Outro::
# 77 "data/maps/Route4/scripts.pory"
	.string "Still as lucky as ever.$"
