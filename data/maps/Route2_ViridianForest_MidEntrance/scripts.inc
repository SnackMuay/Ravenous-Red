# 1 "data/maps/Route2_ViridianForest_MidEntrance/scripts.pory"

# 2 "data/maps/Route2_ViridianForest_MidEntrance/scripts.pory"
Route2_ViridianForest_MidEntrance_MapScripts::
# 3 "data/maps/Route2_ViridianForest_MidEntrance/scripts.pory"
	.byte 0

Route2_MidEntrance_EventScript_Nerd::
# 7 "data/maps/Route2_ViridianForest_MidEntrance/scripts.pory"
	lockall
# 8 "data/maps/Route2_ViridianForest_MidEntrance/scripts.pory"
	faceplayer
# 9 "data/maps/Route2_ViridianForest_MidEntrance/scripts.pory"
	msgbox Route2_MidEntrance_EventScript_Nerd_Text_0
# 10 "data/maps/Route2_ViridianForest_MidEntrance/scripts.pory"
	releaseall
	return


Route2_MidEntrance_EventScript_Old_Woman::
# 14 "data/maps/Route2_ViridianForest_MidEntrance/scripts.pory"
	lockall
# 15 "data/maps/Route2_ViridianForest_MidEntrance/scripts.pory"
	faceplayer
# 16 "data/maps/Route2_ViridianForest_MidEntrance/scripts.pory"
	msgbox Route2_MidEntrance_EventScript_Old_Woman_Text_0
# 17 "data/maps/Route2_ViridianForest_MidEntrance/scripts.pory"
	releaseall
	return


Route2_MidEntrance_EventScript_Nerd_Text_0:
# 9 "data/maps/Route2_ViridianForest_MidEntrance/scripts.pory"
	.string "I'm cataloging the many species of\n"
	.string "POKéMON here in VIRIDIAN FOREST.\l"
	.string "There are a great variety, perhaps as\l"
	.string "many as 10 different species!$"

Route2_MidEntrance_EventScript_Old_Woman_Text_0:
# 16 "data/maps/Route2_ViridianForest_MidEntrance/scripts.pory"
	.string "I'm too old to be catching POKéMON\n"
	.string "anymore, but I still enjoy watching\l"
	.string "them in the wild.$"
