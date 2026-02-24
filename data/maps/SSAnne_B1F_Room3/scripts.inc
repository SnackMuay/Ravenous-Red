# 1 "data/maps/SSAnne_B1F_Room3/scripts.pory"

# 2 "data/maps/SSAnne_B1F_Room3/scripts.pory"

# 3 "data/maps/SSAnne_B1F_Room3/scripts.pory"
SSAnne_B1F_Room3_MapScripts::
# 4 "data/maps/SSAnne_B1F_Room3/scripts.pory"
	.byte 0

SSAnne_B1F_Room3_EventScript_NewDylan::
# 9 "data/maps/SSAnne_B1F_Room3/scripts.pory"
	lockall
# 10 "data/maps/SSAnne_B1F_Room3/scripts.pory"
	faceplayer
# 11 "data/maps/SSAnne_B1F_Room3/scripts.pory"
	msgbox SSAnne_B1F_Room3_EventScript_NewDylan_Text_0
# 12 "data/maps/SSAnne_B1F_Room3/scripts.pory"
	waitmessage
# 13 "data/maps/SSAnne_B1F_Room3/scripts.pory"
	releaseall
	return


SSAnne_B1F_Room3_EventScript_NewDylan_Text_0:
# 11 "data/maps/SSAnne_B1F_Room3/scripts.pory"
	.string "What's that? You wanted to battle\n"
	.string "me? I'm trying to have a relaxing\l"
	.string "vacation!$"
