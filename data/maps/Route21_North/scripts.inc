# 1 "data/maps/Route21_North/scripts.pory"

# 2 "data/maps/Route21_North/scripts.pory"
Route21_North_MapScripts::
# 3 "data/maps/Route21_North/scripts.pory"
	.byte 0

Route21_EventScript_Fisherman::
# 8 "data/maps/Route21_North/scripts.pory"
	lockall
# 9 "data/maps/Route21_North/scripts.pory"
	faceplayer
# 10 "data/maps/Route21_North/scripts.pory"
	msgbox Route21_EventScript_Fisherman_Text_0
# 11 "data/maps/Route21_North/scripts.pory"
	closemessage
# 12 "data/maps/Route21_North/scripts.pory"
	delay 10
# 13 "data/maps/Route21_North/scripts.pory"
	face_left
# 14 "data/maps/Route21_North/scripts.pory"
	releaseall
	return


Route21_EventScript_Fisherman_Text_0:
# 10 "data/maps/Route21_North/scripts.pory"
	.string "Shhh! you'll scare away the POKéMON.$"
