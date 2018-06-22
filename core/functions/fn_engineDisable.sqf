#include "..\..\script_macros.hpp"
private["_unit"];
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _unit) exitWith {};
if(_unit in allUnits) exitWith {["Needs to be a car.",false,"slow"] call life_fnc_notificationSystem;};
if(!(_unit isKindOf "AllVehicles")) exitWith {["Needs to be a car.",false,"slow"] call life_fnc_notificationSystem;};
if(life_inv_enginedisable isEqualTo 0) exitWith {["You need a Engine Disabler.",false,"slow"] call life_fnc_notificationSystem;};
if(player distance _unit > 7) exitWith {["You have to be closer",false,"slow"] call life_fnc_notificationSystem;};
if(!([false,"enginedisable",1] call life_fnc_handleInv)) exitWith {};
[0] call SOCK_fnc_updatePartial;
closeDialog 0;
life_action_inUse = true;
_displayName = getText (configFile >> "CfgVehicles" >>typeof _unit>> "displayName");
_upp = format["Adding Engine Disabler (%1)",_displayName];
//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_cP = 0.01;
_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
_progress progressSetPosition _cP;

while{true} do {
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",-2];
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};

	sleep 0.27;
	_cP = _cP + 0.01;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
	if(_cP >= 1) exitWith {};
	if(!alive player || !alive _unit) exitWith {life_interrupted = true;};
	if(player != vehicle player) exitWith { life_interrupted = true;};
	if(life_interrupted) exitWith {};
	if(player distance _unit > 7) exitWith {life_interrupted = true;};
};
[0] call SOCK_fnc_updatePartial;
life_action_inUse = false;
5 cutText ["","PLAIN"];
player playActionNow "stop";

if(life_interrupted) exitWith {
	life_interrupted = false;
	titleText[localize "STR_NOTF_ActionCancel","PLAIN"];
	[true,"enginedisable",1] call life_fnc_handleInv;
};
[player,"gps"] remoteexeccall ["say3D",0];
["You have placed the Engine Disabler",false,"slow"] call life_fnc_notificationSystem;

player addAction [format["<t color='#4DB0E2'>Disable Engine (%1)",_displayName], {_veh = (_this select 3); if(!isNull _veh && alive _veh) then {[_veh] remoteExec ["life_fnc_setEngineHit",-2]; }; (_this select 0) removeAction (_this select 2);}, _unit,0,true,true];
