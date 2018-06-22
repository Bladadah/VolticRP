#include "..\..\script_macros.hpp"
/*
    File: fn_dropItems.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Called on death, player drops any 'virtual' items they may be carrying.
*/
private ["_obj","_unit","_item","_value"];
_unit = _this select 0;

{
    if (_x isEqualType "") then {_item = _x;} else {_item = configName _x};
    _value = ITEM_VALUE(_item);
    _itemName = ITEM_VARNAME(_item);

    switch (_item) do {
        //nodrop
        case "relic1": {
            if (_value > 0) then {
                missionNamespace setVariable [_itemName,0];
            };
        };
        case "relic2": {
            if (_value > 0) then {
                missionNamespace setVariable [_itemName,0];
            };
        };
        case "relic3": {
            if (_value > 0) then {
                missionNamespace setVariable [_itemName,0];
            };
        };
        case "relic4": {
            if (_value > 0) then {
                missionNamespace setVariable [_itemName,0];
            };
        };
        case "relicTransport": {
            if (_value > 0) then {
                missionNamespace setVariable [_itemName,0];
            };
        };
        case "relicFed": {
            if (_value > 0) then {
                missionNamespace setVariable [_itemName,0];
            };
        };
        case "excavator": {
            if (_value > 0) then {
                missionNamespace setVariable [_itemName,0];
            };
        };
		case "Satellite": {
            if (_value > 0) then {
                missionNamespace setVariable [_itemName,0];
            };
        };
		case "unknown": {
            if (_value > 0) then {
                missionNamespace setVariable [_itemName,0];
            };
        };
		case "effigy": {
            if (_value > 0) then {
                missionNamespace setVariable [_itemName,0];
            };
        };
        //endnodrop
        case "waterBottle": {
            if (_value > 0) then {
                _pos = _unit modelToWorld[0,3,0];
                _pos = [(_pos select 0),(_pos select 1),0];
                _obj = "Land_BottlePlastic_V1_F" createVehicle _pos;
                //_obj setVariable ["water",_value,true];
                [_obj] remoteExecCall ["life_fnc_simDisable",RANY];
                _obj setPos _pos;
                _obj setVariable ["item",[_item,_value],true];
                missionNamespace setVariable [_itemName,0];
            };
        };

        case "tbacon": {
            if (_value > 0) then {
                _pos = _unit modelToWorld[0,3,0];
                _pos = [(_pos select 0),(_pos select 1),0];
                _obj = "Land_TacticalBacon_F" createVehicle _pos;
                [_obj] remoteExecCall ["life_fnc_simDisable",RANY];
                _obj setPos _pos;
                _obj setVariable ["item",[_item,_value],true];
                missionNamespace setVariable [_itemName,0];
            };
        };

        case "redgull": {
            if (_value > 0) then {
                _pos = _unit modelToWorld[0,3,0];
                _pos = [(_pos select 0),(_pos select 1),0];
                _obj = "Land_Can_V3_F" createVehicle _pos;
                [_obj] remoteExecCall ["life_fnc_simDisable",RANY];
                _obj setPos _pos;
                _obj setVariable ["item",[_item,_value],true];
                missionNamespace setVariable [_itemName,0];
            };
        };

        case "fuelEmpty": {
            if (_value > 0) then {
                _pos = _unit modelToWorld[0,3,0];
                _pos = [(_pos select 0),(_pos select 1),0];
                _obj = "Land_CanisterFuel_F" createVehicle _pos;
                [_obj] remoteExecCall ["life_fnc_simDisable",RANY];
                _obj setPos _pos;
                _obj setVariable ["item",[_item,_value],true];
                missionNamespace setVariable [_itemName,0];
            };
        };

        case "fuelFull": {
            if (_value > 0) then {
                _pos = _unit modelToWorld[0,3,0];
                _pos = [(_pos select 0),(_pos select 1),0];
                _obj = "Land_CanisterFuel_F" createVehicle _pos;
                [_obj] remoteExecCall ["life_fnc_simDisable",RANY];
                _obj setPos _pos;
                _obj setVariable ["item",[_item,_value],true];
                missionNamespace setVariable [_itemName,0];
            };
        };

        case "coffee": {
            if (_value > 0) then {
                _pos = _unit modelToWorld[0,3,0];
                _pos = [(_pos select 0),(_pos select 1),0];
                _obj = "Land_Can_V3_F" createVehicle _pos;
                [_obj] remoteExecCall ["life_fnc_simDisable",RANY];
                _obj setPos _pos;
                _obj setVariable ["item",[_item,_value],true];
                missionNamespace setVariable [_itemName,0];
            };
        };

        case "life_houseProtect": {
            if (civRDM > 0) then {
                _pos = _unit modelToWorld[0,3,0];
                _pos = [(_pos select 0),(_pos select 1),0];
                _obj = "Land_Money_F" createVehicle _pos;
                _obj setVariable ["item",["money",missionNamespace getVariable [_item,0]],true];
                _obj setPos _pos;
                [_obj] remoteExecCall ["life_fnc_simDisable",RANY];
                missionNamespace setVariable ["civRDM",0];
            };
        };

         case "life_inv_tent1": {
            if (_value > 0) then {
                _pos = _unit modelToWorld[0,3,0];
                _pos = [(_pos select 0), (_pos select 1), 0];
                _obj = "Land_Sleeping_bag_folded_F" createVehicle _pos;
                [_obj] remoteExecCall ["life_fnc_simDisable",RANY];
                _obj setPos _pos;
                _obj setVariable ["item",[_item,_value],true];
                missionNamespace setVariable [_itemName,0];
            };
        };

        default {
            if (_value > 0) then {
                _pos = _unit modelToWorld[0,3,0];
                _pos = [(_pos select 0),(_pos select 1),0];
                _obj = "Land_LuggageHeap_02_F" createVehicle _pos;
                [_obj] remoteExecCall ["life_fnc_simDisable",RANY];
                _obj setPos _pos;
                _obj setVariable ["item",[_item,_value],true];
                missionNamespace setVariable [_itemName,0];
            };
        };
    };
} forEach (("true" configClasses (missionConfigFile >> "VirtualItems")) + ["life_houseProtect"]);
