scriptName "functions_weaponSway_3";
/*--------------------------------------------------------------------
	Author: Maverick (ofpectag: MAV)
    File: functions_recoilCompensation_1.sqf

	<Maverick Applications>
    Written by Maverick Applications (www.maverick-apps.de)
    You're not allowed to use this file without permission from the author!
--------------------------------------------------------------------*/
#define __filename "functions_weaponSway_3.sqf"

_ownsDependency4 = [life_currentExpPerks, "perk_weaponSway_4"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency4) then {
	player setCustomAimCoef 0.70;

	player addEventHandler ["Respawn", {
		player setCustomAimCoef 0.70;
	}];
};