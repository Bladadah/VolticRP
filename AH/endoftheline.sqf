
[profileName,getPlayerUID player,(configName _patchEntry)];
[profileName,format [ hint "Unknown Addon Patch: %1",(configName _patchEntry)]];
_message =  "A player:<br/> <t color='#e32828' size='1.5'>www.dreamlife.fr/dons</t>" 

hint parseText format["<t color='#ffffff' size='2'>VOLTICRP</t><t color='#c45454' size='2'> ANTICHEAT</t><br/><br/>%1", _message];   




[profileName,getPlayerUID player,(configName _patchEntry)];
[profileName,hint parseText format["<t color='#ffffff' size='2'>VOLTICRP</t><t color='#c45454' size='2'> ANTICHEAT</t><br/> Unknown Addon Patch: %1",(configName _patchEntry)]];

[format["%1 - %2 bought a house for $%3.",profileName,(getPlayerUID player),[(_houseCfg select 0)] call life_fnc_numberText], "MoneyLogs"] remoteExecCall ["A3Log", 2];


private ["_binConfigPatches","_cfgPatches","_endM"];
_patchList =
["dssdsd"];

_binConfigPatches = configFile >> "CfgPatches";
for "_i" from 0 to count (_binConfigPatches)-1 do {
    _patchEntry = _binConfigPatches select _i;
    if (isClass _patchEntry) then {
        if (!((configName _patchEntry) in _patchList)) exitWith {
            [profileName,getPlayerUID player,(configName _patchEntry)];
            [profileName,hint parseText format["<t color='#ffffff' size='2'>VOLTICRP</t><t color='#c45454' size='2'> ANTICHEAT</t><br/><br/>Player with unknown addon detected!<br/> Player Name: %2<br/><br/> Unknown Addon Patch: %1",(configName _patchEntry),profileName,(getPlayerUID player)]];
        };
    };
};

,profileName,(getPlayerUID player),[(_houseCfg select 0)]
,profileName,(getPlayerUID player),(configName _patchEntry)]];



disableUserInput true;
            sleep 0.5;
            failMission "SpyGlass";