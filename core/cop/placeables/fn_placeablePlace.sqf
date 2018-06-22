/*
	Author: Maximum
	Description: Placeables for the cop\medic sides.
*/
disableSerialization;
if (count life_bar_placey >= life_bar_limit) exitWith { ["You've reached the limit of objects you can place.",false,"slow"] call life_fnc_notificationSystem; };
_display = findDisplay 20000;
_placeables = _display displayCtrl 20001;
_className = lbData[20001, lbCurSel (20001)];
closeDialog 0;
life_barrier_active = true;
_allowMoveDistance = 50;
_object = _className createVehicle (position player);
life_barrier_activeObj = _object;
_attachPos = [0, 3, 0.5];
_object attachTo[player, _attachPos];
_object enableSimulationGlobal false;
_object allowDamage false;
_originalPos = position _object;
_playerOriginalPos = position player;

waitUntil{
	if (life_barrier_activeObj distance _originalPos > _allowMoveDistance || player distance _playerOriginalPos > _allowMoveDistance) then {
		[true] call life_fnc_placeableCancel;
    };
    sleep 1;
    !life_barrier_active;
};
