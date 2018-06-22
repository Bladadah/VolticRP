scriptName "functions_lockpickSpeed_4";
/*--------------------------------------------------------------------
	Author: Maverick (ofpectag: MAV)
    File: functions_lockpickSpeed_3.sqf

	<Maverick Applications>
    Written by Maverick Applications (www.maverick-apps.de)
    You're not allowed to use this file without permission from the author!
--------------------------------------------------------------------*/
#define __filename "functions_lockpickSpeed_4.sqf"
_ownsDependency1 = [life_currentExpPerks, "perk_locksmith_5"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency1) then {
    mav_ttm_var_lockpickMultiplier = 1.45;
};