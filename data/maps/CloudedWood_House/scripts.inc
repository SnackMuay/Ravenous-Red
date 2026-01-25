# 1 "data/maps/CloudedWood_House/scripts.pory"

# 2 "data/maps/CloudedWood_House/scripts.pory"

# 3 "data/maps/CloudedWood_House/scripts.pory"
CloudedWood_House_MapScripts::
# 4 "data/maps/CloudedWood_House/scripts.pory"
	.byte 0

Universal_EventScript_Bed::
# 9 "data/maps/CloudedWood_House/scripts.pory"
	lockall
# 10 "data/maps/CloudedWood_House/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 11 "data/maps/CloudedWood_House/scripts.pory"
	msgbox Universal_EventScript_Bed_Text_0, MSGBOX_YESNO
# 12 "data/maps/CloudedWood_House/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Universal_EventScript_TakeANap
# 13 "data/maps/CloudedWood_House/scripts.pory"
	releaseall
	return


Universal_EventScript_TakeANap::
# 17 "data/maps/CloudedWood_House/scripts.pory"
	lockall
# 18 "data/maps/CloudedWood_House/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 19 "data/maps/CloudedWood_House/scripts.pory"
	msgbox Universal_EventScript_TakeANap_Text_0
# 20 "data/maps/CloudedWood_House/scripts.pory"
	releaseall
	return


Universal_EventScript_Bed_Text_0:
# 11 "data/maps/CloudedWood_House/scripts.pory"
	.string "Take a nap?$"

Universal_EventScript_TakeANap_Text_0:
# 19 "data/maps/CloudedWood_House/scripts.pory"
	.string "Your POKéMON are feeling\n"
	.string "refreshed.$"
