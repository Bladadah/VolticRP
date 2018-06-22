private["_explosion","_ply","_bombs"];
if(!(vest player in ["V_HarnessOGL_gry"])) exitWith {};

if (life_suicidedeadman ) exitWith {
life_suicidedeadman = false; 
	["Deadman switch disengaged.",false,"slow"] call life_fnc_notificationSystem;
};

life_suicidedeadman = true; 

["Deadman switch engaged.",false,"slow"] call life_fnc_notificationSystem;	

waitUntil {!(alive player) or !life_suicidedeadman or (!(vest player in ["V_HarnessOGL_gry"]))};
if (life_suicidedeadman) exitWith {
	life_suicidedeadman = false;
	removeVest player;
	removeHeadgear player;
	removeGoggles player;
	removeBackpack player;
	removeUniform player;
	removeAllWeapons player;
	removeAllAssignedItems player;
	[] call SOCK_fnc_updateRequest;
	_explosion = "Bo_Mk82" createVehicle [0,0,9999];
	_explosion setPosATL (getPosATL player);
	_explosion setDamage 1;
	if(alive player) then {
		player setDamage 1;
	};
	life_save_gear = [];
};
[] call SOCK_fnc_updateRequest;
