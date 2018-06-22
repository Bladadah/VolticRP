scriptName "functions_weaponSway_4";
/*--------------------------------------------------------------------
	Author: Maverick (ofpectag: MAV)
    File: functions_recoilCompensation_1.sqf

	<Maverick Applications>
    Written by Maverick Applications (www.maverick-apps.de)
    You're not allowed to use this file without permission from the author!
--------------------------------------------------------------------*/
#define __filename "functions_weaponSway_4.sqf"



player setCustomAimCoef 0.60;

player addEventHandler ["Respawn", {
	player setCustomAimCoef 0.60;
}];
