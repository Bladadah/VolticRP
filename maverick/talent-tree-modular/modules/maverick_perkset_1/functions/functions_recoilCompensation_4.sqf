scriptName "functions_recoilCompensation_4";
/*--------------------------------------------------------------------
	Author: Maverick (ofpectag: MAV)
    File: functions_recoilCompensation_4.sqf

	<Maverick Applications>
    Written by Maverick Applications (www.maverick-apps.de)
    You're not allowed to use this file without permission from the author!
--------------------------------------------------------------------*/
#define __filename "functions_recoilCompensation_4.sqf"

_ownsDependency1 = [life_currentExpPerks, "perk_gunsspecialist_lessRecoil_5"] call mav_ttm_fnc_hasPerk;

player setUnitRecoilCoefficient .75;
if (!_ownsDependency1) then {
	player addEventHandler ["Respawn", {
		player setUnitRecoilCoefficient .75;
	}];
};