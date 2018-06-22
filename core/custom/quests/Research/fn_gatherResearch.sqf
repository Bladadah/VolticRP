#include "..\..\..\script_macros.hpp"

/*
Author: Repentz 
Description: research to reward a new skill!
*/
if (life_inv_unknown == 1) exitWith { hint "You cannot possibly gather any more of this... shit. Try and find out who needs it and bring it to them." };
if ((missionNamespace getVariable ['mav_ttm_var_satellite',0]) == 0) exitwith {["You need to complete the first quest before completing this!",true,"slow"] call life_fnc_notificationSystem;}; 

[true,"unknown",1] call life_fnc_handleInv;

hint "you have collected some sort of odd substance...";
