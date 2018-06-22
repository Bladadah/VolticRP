private ["_eh1","_inArea","_zone1","_zone2","_zone3","_zone4","_zone5","_zone6","_zone7","_zone1dis","_zone2dis","_zone3dis","_zone4dis","_zone5dis","_zone6dis","_zone7dis","_dis"];

_zone1 = getMarkerPos "safezone_reb1";
_zone2 = getMarkerPos "safezone_Don";
_zone3 = getMarkerPos "safezone_Spawn";
_zone4 = getMarkerPos "safezone_air";
_zone5 = getMarkerPos "safezone_Leport";
_zone6 = getMarkerPos "safezone_Passagne";
_zone7 = getMarkerPos "safezone_Trinite";


_zone1dis = 200;
_zone2dis = 100;
_zone3dis = 100;
_zone4dis = 100;
_zone5dis = 100;
_zone6dis = 100;
_zone7dis = 100;

_dis = 350;
_inArea = false;

_enterText = "You are entering a safezone!";
_leaveText = "You are leaving a safezone!";

switch (playerSide) do
{
	case west:
	{
		while {true} do
		{
			if (alive player) then
			{
				if (((_zone1 distance player < _zone1dis) || (_zone2 distance player < _zone2dis) || (_zone3 distance player < _zone3dis) || (_zone4 distance player < _zone4dis) || (_zone5 distance player < _zone6dis) || (_zone3 distance player < _zone6dis) || (_zone7 distance player < _zone7dis)) && (!_inArea)) then
				{
					_inArea = true;
					["You are Entering a Safezone, you must now follow our safezone rules",false,"slow"] call life_fnc_notificationSystem;
					safezone = true;
				};
				if (((_zone1 distance player > _zone1dis) && (_zone2 distance player > _zone2dis) && (_zone3 distance player > _zone3dis) && (_zone4 distance player > _zone4dis) && (_zone5 distance player > _zone5dis) && (_zone6 distance player > _zone6dis) && (_zone7 distance player > _zone7dis)) && (_inArea)) then
				{
					_inArea = false;
					safezone = false;
				};

			};
		};
	};

	case civilian:
	{
		while {true} do
		{
			if (alive player) then
			{
				if (((_zone1 distance player < _zone1dis) || (_zone2 distance player < _zone2dis) || (_zone3 distance player < _zone3dis) || (_zone4 distance player < _zone4dis) || (_zone5 distance player < _zone6dis) || (_zone3 distance player < _zone6dis) || (_zone7 distance player < _zone7dis)) && (!_inArea)) then
				{
					_inArea = true;
					["You are Entering a Safezone, you must now follow our safezone rules",false,"slow"] call life_fnc_notificationSystem;
					safezone = true;
				};
				if (((_zone1 distance player > _zone1dis) && (_zone2 distance player > _zone2dis) && (_zone3 distance player > _zone3dis) && (_zone4 distance player > _zone4dis) && (_zone5 distance player > _zone5dis) && (_zone6 distance player > _zone6dis) && (_zone7 distance player > _zone7dis)) && (_inArea)) then
				{
					_inArea = false;
					safezone = false;
				};

			};
		};
	};

	case independent:
	{
		while {true} do
		{
			if (alive player) then
			{
				if (((_zone1 distance player < _zone1dis) || (_zone2 distance player < _zone2dis) || (_zone3 distance player < _zone3dis) || (_zone4 distance player < _zone4dis) || (_zone5 distance player < _zone6dis) || (_zone3 distance player < _zone6dis) || (_zone7 distance player < _zone7dis)) && (!_inArea)) then
				{
					_inArea = true;
					["You are Entering a Safezone, you must now follow our safezone rules",false,"slow"] call life_fnc_notificationSystem;
					safezone = true;
					imAuto = false;
				};
				if (((_zone1 distance player > _zone1dis) && (_zone2 distance player > _zone2dis) && (_zone3 distance player > _zone3dis) && (_zone4 distance player > _zone4dis) && (_zone5 distance player > _zone5dis) && (_zone6 distance player > _zone6dis) && (_zone7 distance player > _zone7dis)) && (_inArea)) then
				{
					_inArea = false;
					safezone = false;
					imAuto = true;
				};

			};
		};
	};
	sleep 3;
};
