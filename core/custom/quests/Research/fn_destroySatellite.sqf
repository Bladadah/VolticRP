#include "..\..\..\script_macros.hpp"

/*
Author: Repentz 
Description: research to reward a new skill!
*/

if ((missionNamespace getVariable ['mav_ttm_var_satellite',0]) == 1) exitwith {["You have already started and or completed the quest!",true,"slow"] call life_fnc_notificationSystem;}; 
if (life_inv_satellite == 1) exitWith { hint "You have already taken the required part out of the satellite!" };

[true,"satellite",1] call life_fnc_handleInv;
[player,"satelliteOff"] remoteexeccall ["say3D",0];

hint "you have collected the proper satellite part! Bring it to the ??????";