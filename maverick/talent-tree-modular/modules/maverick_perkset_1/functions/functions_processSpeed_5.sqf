scriptName "functions_processSpeed_5";
/*--------------------------------------------------------------------
	Author: Maverick (ofpectag: MAV)
    File: functions_processSpeed_3.sqf

	<Maverick Applications>
    Written by Maverick Applications (www.maverick-apps.de)
    You're not allowed to use this file without permission from the author!
--------------------------------------------------------------------*/
#define __filename "functions_processSpeed_5.sqf"

_ownsDependency1 = [life_currentExpPerks, "perk_processing_6"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency1) then {
    mav_ttm_var_processMultiplier = 1.55;
};