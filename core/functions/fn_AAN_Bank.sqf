#include "..\..\script_macros.hpp"
/*
	File: fn_AAN.sqf
	Author: Karel Moricky
	Modified: Jesse "tkcjesse" Schultz

	Description:
	It's showtime!

	Parameter(s):
	_this select 0: STRUCTURED TEXT: Header text
	_this select 1: STRUCTURED TEXT: Bottom text (moving)
	_this select 2: PROFILENAME: Below Header text
*/
private ["_header","_line","_sender","_display","_textHeader","_textLine","_textLinePos","_textClock","_robType"];

_robType = _this select 0;

_header = "";
_line = "";
_sender = ""; 

switch (_robType) do {
    case 1: {
    	_header = "Federal Reserve Robbery";
		_line = "The Federal Reserve is being robbed! The police have urged calmness as they respond to the matter, any civilians are to evacuate the area as police will kill on sight";
		_sender = "The AAN, in co-operation with the APF"; 
	};
    case 2: { 
		_header = "Bank Robbery";
		_line = "The Bank is being robbed! The police have urged calmness as they respond to the matter, any civilians are to evacuate the area as police will be setting up a parimeter and detaining anyone close";
		_sender = "The AAN, in co-operation with the APF";
	};
    case 3: { 
		_header = "Underwater Treasury";
		_line = "The Underwater Treasury is being robbed! The police have urged calmness as they respond to the matter, any civilians are to evacuate the area as police will be setting up a parimeter and detaining anyone close";
		_sender = "The AAN, in co-operation with the APF";
	};
};
disableSerialization;

if (!life_settings_enableNewsBroadcast || isStreamFriendlyUIEnabled) exitWith {};

30 cutRsc ["rscAAN","plain"];
_display = uiNamespace getVariable "BIS_AAN";
_textHeader = _display displayCtrl 3001;
_textHeader ctrlSetStructuredText parseText format [localize "STR_News_BroadcastedBy",_header,_sender];
_textHeader ctrlCommit 0;

_textLine = _display displayCtrl 3002;
_textLine ctrlSetStructuredText parseText format ["                         %1                         %1                         %1                         %1",_line];
_textLine ctrlCommit 0;
_textLinePos = ctrlPosition _textLine;
_textLinePos set [0,-100];
_textLine ctrlSetPosition _textLinePos;
_textLine ctrlCommit 1500;

_textClock = _display displayctrl 3003;
_textClock ctrlSetText ([daytime,"HH:MM"] call bis_fnc_timetostring);
_textClock ctrlCommit 0;

sleep 30;
30 cutText ["","plain"];
