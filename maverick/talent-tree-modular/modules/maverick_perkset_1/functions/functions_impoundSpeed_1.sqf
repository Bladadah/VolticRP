scriptName "functions_impoundSpeed_1";

#define __filename "functions_impoundSpeed_1.sqf"

_ownsDependency1 = [life_currentExpPerks, "perk_impoundspeed_2"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency1) then {
	mav_ttm_var_impoundMultiplier = 1.5;
};