/*
    File: fn_gagged.sqf
    Author: Lowheartrate & Panda
*/
private["_gagger"];
_gagger = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
hint format["You have been gagged by %1.", _gagger getVariable["realname",_gagger]];
titleText ["You have a gag over your mouth, you can no longer talk!", "PLAIN"];
player setVariable ["tf_globalVolume", 0];
waitUntil{!(player getVariable ["gagged",false]) OR !(player getVariable ["tied",false])};
hint format["The gag was removed, you can again speak!"];
titleText ["You're not gagged", "PLAIN"];
player setVariable ["tf_globalVolume", 1];