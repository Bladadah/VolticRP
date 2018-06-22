#include "..\..\script_macros.hpp"

private ["_linkToIconsVar","_iconsPath","_display","_controlDefine","_safeZone1","_safeZone2"];

_safeZone1 = (1 *(((safezoneW / safezoneH) min 1.2) / 40) +(safezoneX));
_safeZone2 = (15 *(((safezoneW / safezoneH) min 1.2) / 40));
_iconsPath = "<t size=4 ><a href='%1'><img image='VOLTICRP\images\textures\HUD\%2'/></a></t>"; 
disableSerialization;

_linkToIconsVar = [
	["https://volticrp.com/forums/","website.paa", 
	"Visit Our Website!"],
	
	["ts3server://ts.volticrp.com","teamspeak.paa",
	"Chat with us on TeamSpeak?"],
	
	["https://volticrp.com/forums/index.php?/topic/155-malden-server-rules/","rules.paa",
	"Server Rules!"],
	
	["https://volticrp.com/forums/index.php?/support/","supportTicket.paa",
	"Create a support thread!"],
	
	["https://volticrp.com/forums/index.php?/clients/donations/","donate.paa",
	"Donate!"]
];


_display = findDisplay 49;

	{
		_controlDefine = _display ctrlCreate ["RscStructuredText",-1];
		_controlDefine ctrlSetStructuredText parseText format [_iconsPath,_x select 0,_x select 1];
		_controlDefine ctrlSetTooltip (_x select 2);
		_controlDefine ctrlSetTooltipColorShade [0,0,0,0.6];
		_controlDefine ctrlSetPosition [((_safeZone1 + (1.05*_safeZone2))) + ((3/4*ctrltextHeight _controlDefine) * _forEachindex),(safezoney + safezoneh) - 
			(1.75*ctrltextHeight _controlDefine),3/4*ctrltextHeight _controlDefine,ctrltextHeight _controlDefine];
		
		_controlDefine ctrlcommit 0;
	} 

forEach _linkToIconsVar;