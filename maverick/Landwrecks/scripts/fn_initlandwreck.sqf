/*
	Author: Maverick Applications
	Desc: Altis Life landwreck
*/

//Do not touch below
if(!isServer) exitWith {};
[] spawn {
	private["_positions","_position","_land","_land2","_createNewWreck","_deleteOldWreck","_lastCreateTime","_marker","_markerZone","_radius"];
	sleep 360;
	_positions = getArray(missionConfigFile >> "Maverick_landwrecks" >> "Positions");
	_land = objNull;
	_land2 = objNull;
	_lastCreateTime = time - 360;
	_radius = getNumber(missionConfigFile >> "Maverick_landwrecks" >> "Radius");

	_createNewWreck = {
		_position = selectRandom _positions;

		_marker = createMarker ["landwreck",_position];
		_marker setMarkerColor "ColorRed";
		_marker setMarkerType "mil_warning";
		_marker setMarkerText "Crash Site";
		_marker setMarkerAlpha 0.95;

		_markerZone = createMarker ["landwreckzone",_position];
		_markerZone setMarkerColor "ColorBlack";
		_markerZone setMarkerType "Empty";
		_markerZone setMarkerShape "ELLIPSE";
		_markerZone setMarkerSize [_radius,_radius];

		_position = [((_position select 0) - _radius) + random(_radius*2),((_position select 1) - _radius) + random(_radius*2),0];
		_land = "Land_UWreck_MV22_F" createVehicle _position;
		_land allowDamage false;
		_land setDamage 0;
		_land setPosATL _position;
		_land enableSimulationGlobal false;
		_land setVariable ["wrecktime", time];
		_land setVariable ["wreckloot", selectRandom(getArray(missionConfigFile >> "Maverick_landwrecks" >> "landLoot")), true];

		
		_land2 = "Land_PaperBox_closed_F" createVehicle _position;
		_land2 allowDamage false;
		_land2 setDamage 0;
		_land2 setPosATL [(_position select 0) + random(50), (_position select 1) + random(50), 0];
		_land2 enableSimulationGlobal false;
		_land2 setVariable ["wrecktime", time];

		getText(missionConfigFile >> "Maverick_landwrecks" >> "SpawnMSG") remoteExecCall ["hint",0];
	};

	_deleteOldWreck = {
		if(!isNull _land) then {
			getText(missionConfigFile >> "Maverick_landwrecks" >> "DeleteMSG") remoteExecCall ["hint",0];
			sleep 5;
			deleteVehicle _land;
			deleteVehicle _land2;
			deleteMarker "landwreck";
			deleteMarker "landwreckzone";
		};
		_land = objNull;
		_land2 = objNull;
		_lastCreateTime = time;
	};

	while {true} do {
		if(isNull _land) then {
			if((time - _lastCreateTime) >= (getNumber(missionConfigFile >> "Maverick_landwrecks" >> "landwreckInterval"))) then {
				[] call _deleteOldWreck;
				[] call _createNewWreck;
				_lastCreateTime = time + (getNumber(missionConfigFile >> "Maverick_landwrecks" >> "landwreckInterval"));
			};
		} else {
			if((_land getVariable ["wreckloot", []]) isEqualTo []) then {
				[] call _deleteOldWreck;
			};
		};

		sleep 45;
	};
};