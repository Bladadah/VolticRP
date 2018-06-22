/*
	EffigyReward
	Repentz
*/
if (playerside != civilian) exitWith { ["Nothing Interesting happens!",true,"slow"] call life_fnc_notificationSystem;};
if (mysterypossibleReward == 1) exitWith {  ["You must wait before placing another effigy",true,"slow"] call life_fnc_notificationSystem;};
if (!(life_inv_effigy > 0)) exitWith {["Nothing Interesting Happens!",true,"slow"] call life_fnc_notificationSystem; };

[false,"effigy",1] call life_fnc_handleInv;

[3] call SOCK_fnc_updatePartial;

mysterypossibleReward = 1;

possibleReward = [
"RH_Deagles",
"RH_uspm",
"hlc_rifle_M14",
"RH_M16a1",
"bnae_mk1_virtual",
"RH_tec9",
"RH_bull",
"RH_gsh18",
"bnae_m97_virtual"
];

rand = count possibleReward;
_randnum = round (random rand);
_MysteryWeapon = possibleReward select _randnum;

_ammoamt = 2 + (round random 7);
_MysteryAmmo = (getarray (configFile >> "CFGWeapons" >> _MysteryWeapon >> "magazines") select 0);  

["The Ground starts to shake, a crate appears out of nowhere!",true,"slow"] call life_fnc_notificationSystem;
uiSleep 1;
crate = "RHpistammobox" createVehicleLocal (getpos player); 
player disablecollisionwith crate;
[player,"effigy"] remoteexeccall ["say3D",0]; 
crate setpos (getposATL player);	
crate allowDamage false;
clearWeaponCargoGlobal crate;
clearMagazineCargoGlobal crate;
clearItemCargoGlobal crate;
crate addWeaponCargo [_MysteryWeapon,1];
crate addMagazineCargo [_MysteryAmmo,_ammoamt];
["<t size='3.2' color='#04EE4A'>The crate appears to be fading quickly...Somehow. Hurry and collect the weapons!</t>"] call life_fnc_alerttwo;
_time = 25;
while {_time > 0} do {
	uiSleep 1;
	_time = _time - 1;
	if (!alive player) exitWith { mysterypossibleReward = 0; deleteVehicle crate;};
	if (_time == 0) exitWith { deleteVehicle crate; mysterypossibleReward = 0; };
};