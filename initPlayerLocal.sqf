#include "script_macros.hpp"
/*
    File: initPlayerLocal.sqf
    Author:

    Description:
    Starts the initialization of the player.
*/
if (!hasInterface && !isServer) exitWith {
    [] call compile preprocessFileLineNumbers "\life_hc\initHC.sqf";
}; //This is a headless client.

#define CONST(var1,var2) var1 = compileFinal (if (var2 isEqualType "") then {var2} else {str(var2)})
#define LIFE_SETTINGS(TYPE,SETTING) TYPE(missionConfigFile >> "Life_Settings" >> SETTING)

CONST(BIS_fnc_endMission,BIS_fnc_endMission);
//[] execVM "AH\AntiH.sqf";

if (hasInterface) then {
    player addEventHandler ["GetOutMan", {
        life_seatbelt = false;
        [] call life_fnc_hudUpdate; //--Enable if you are putting a hud option to display when your seatbelt is on
    }];
};

if (hasInterface) then {
    player addEventHandler ["GetInMan", {
        life_seatbelt = false;
        [] call life_fnc_hudUpdate; //--Enable if you are putting a hud option to display when your seatbelt is on
    }];
};

//disables removal of static launchers
if (hasInterface) then {
	inGameUISetEventHandler ["Action", "
		if (_this select 3 == 'DisAssemble') exitWith {
			hint 'Nope Cx';
			true
		};
		_unit = _this select 1;
		_closest = 4000;
		{
			if ((_unit distance _x) < _closest ) then {_closest = (_unit distance _x)};
		} forEach ((playableUnits + switchableUnits) - [_unit]);
		if (((_this select 3) == 'TakeItem') and (_closest <= 8)) then {
			if ((count((getbackpackCargo (_this select 0) select 0))) > 0) exitWith {true};
			_case = '';
			{
				_case = switch(getNumber(configFile >> 'CfgWeapons' >> _x >> 'ItemInfo' >> 'type')) do {
					case 801: {'Uniform'};
					case 701: {'Vest'};
					default {'None'};
				};
				if (_case != 'None') exitWith {true};
			} forEach ((getItemCargo (_this select 0) select 0));

			
		};
	"];
};

[] execVM "core\init.sqf";
