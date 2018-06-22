scriptName "functions_weaponSway_2";
/*--------------------------------------------------------------------
	Author: Maverick (ofpectag: MAV)
    File: functions_recoilCompensation_1.sqf

	<Maverick Applications>
    Written by Maverick Applications (www.maverick-apps.de)
    You're not allowed to use this file without permission from the author!
--------------------------------------------------------------------*/
#define __filename "functions_weaponSway_2.sqf"

_ownsDependency3 = [life_currentExpPerks, "perk_weaponSway_3"] call mav_ttm_fnc_hasPerk;
_ownsDependency4 = [life_currentExpPerks, "perk_weaponSway_4"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency3 && !_ownsDependency4) then {
	player setCustomAimCoef 0.75;

	player addEventHandler ["Respawn", {
		player setCustomAimCoef 0.75;
	}];
};