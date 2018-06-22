scriptName "functions_processSpeed_3";
/*--------------------------------------------------------------------
	Author: Maverick (ofpectag: MAV)
    File: functions_processSpeed_3.sqf

	<Maverick Applications>
    Written by Maverick Applications (www.maverick-apps.de)
    You're not allowed to use this file without permission from the author!
--------------------------------------------------------------------*/
#define __filename "functions_processSpeed_3.sqf"

_ownsDependency1 = [life_currentExpPerks, "perk_processing_4"] call mav_ttm_fnc_hasPerk;
_ownsDependency2 = [life_currentExpPerks, "perk_processing_5"] call mav_ttm_fnc_hasPerk;
_ownsDependency3 = [life_currentExpPerks, "perk_processing_6"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency1 && !_ownsDependency2 && !_ownsDependency3) then {
    mav_ttm_var_processMultiplier = 1.25;
};