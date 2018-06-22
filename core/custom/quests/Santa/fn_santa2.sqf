#include "..\..\..\script_macros.hpp"

/*
Author: Repentz 
Description: Santa
*/

if ((missionNamespace getVariable ['mav_ttm_var_rebel',0]) isEqualTo 0) exitwith {["You must unlock the rebel perk before doing this!",true,"slow"] call life_fnc_notificationSystem;}; 
if ((missionNamespace getVariable ['mav_ttm_var_rebelA',0]) isEqualTo 1) exitwith {["You have already completed this quest!",true,"slow"] call life_fnc_notificationSystem;}; 

life_santa2 = true;

["You have found one of the locations of santa! there are 5 in total, check on your skill menu under the [Advanced Rebel Training Quest] for more information, good luck!",true,"slow"] call life_fnc_notificationSystem; 
