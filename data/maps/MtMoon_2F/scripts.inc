# 1 "data/maps/MtMoon_2F/scripts.pory"
 
# 2 "data/maps/MtMoon_2F/scripts.pory"
MtMoon_2F_MapScripts::
# 3 "data/maps/MtMoon_2F/scripts.pory"
	.byte 0

MtMoon_2F_EventScript_Hiker::
# 6 "data/maps/MtMoon_2F/scripts.pory"
	lockall
# 7 "data/maps/MtMoon_2F/scripts.pory"
	msgbox MtMoon_2F_EventScript_Hiker_Text_0
# 8 "data/maps/MtMoon_2F/scripts.pory"
	waitmessage
# 9 "data/maps/MtMoon_2F/scripts.pory"
	closemessage
# 10 "data/maps/MtMoon_2F/scripts.pory"
	releaseall
	return


MtMoon_2F_EventScript_Hiker_Text_0:
# 7 "data/maps/MtMoon_2F/scripts.pory"
	.string "This part of MT. MOON is the best place\n"
	.string "to search for ancient POKéMON.$"
