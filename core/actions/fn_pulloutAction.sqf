#include "..\..\script_macros.hpp"
/*
    File: fn_pulloutAction.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Pulls civilians out of a car if it's stopped.
*/
params [
	["_veh", objNull, [objNull]]
];
private ["_crew"];
_crew = crew cursorObject;

switch playerSide do {
	case west : {
		{
			if (isPlayer _x) then {
				_x setVariable ["transporting",false,true]; _x setVariable ["Escorting",false,true];
				[_x] remoteExecCall ["life_fnc_pulloutVeh",_x];
			};
		} forEach _crew;
	};
	case civilian : {
			if (_veh in life_vehicles) then {
				{
					if (isPlayer _x) then {
						_x setVariable ["transporting",false,true]; _x setVariable ["Escorting",false,true];
						[_x] remoteExecCall ["life_fnc_pulloutVeh",_x];
					};
				} forEach _crew;			
			} else {
				hint "You cannot pull players out. This is not your vehicle!!";
			};
	};
	case independent : {
		{
			if (isPlayer _x) then {
				_x setVariable ["transporting",false,true]; _x setVariable ["Escorting",false,true];
				[_x] remoteExecCall ["life_fnc_pulloutVeh",_x];
			};
		} forEach _crew;
	};
};