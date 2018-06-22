scriptName "functions_weaponSway_1";
/*--------------------------------------------------------------------
	Author: Maverick (ofpectag: MAV)
    File: functions_recoilCompensation_1.sqf

	<Maverick Applications>
    Written by Maverick Applications (www.maverick-apps.de)
    You're not allowed to use this file without permission from the author!
--------------------------------------------------------------------*/
#define __filename "functions_weaponSway_1.sqf"

_ownsDependency2 = [life_currentExpPerks, "perk_weaponSway_2"] call mav_ttm_fnc_hasPerk;
_ownsDependency3 = [life_currentExpPerks, "perk_weaponSway_3"] call mav_ttm_fnc_hasPerk;
_ownsDependency4 = [life_currentExpPerks, "perk_weaponSway_4"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency2 && !_ownsDependency3 && !_ownsDependency4) then {
	player setCustomAimCoef 0.85;

	player addEventHandler ["Respawn", {
		player setCustomAimCoef 0.85;
	}];
};