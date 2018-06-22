/*
	Author: Maverick Applications
	Desc: Altis Life ServerRestartEvent
*/

//Customize your settings, to fit your server setup!
class Maverick_ServerRestartEvent {

    //Should the automatic activation be enabled?
    AutoRestart            = 1;   // 0 = No | 1 = yes

    //How many seconds does it take until the server restarts
    ServerRestartTime      = 14400;// 14400 = 4 hour restarts

    //If you want to play a music enter the name you defined in the description.ext here (playSound is used!)
    //The restart/event is around 85 seconds, so maybe make the sound the same length
    RestartSound           = "";

    //Messages shown as hint in-game to inform the players [Can be formatted]
	MessageRestartAnnounce = "<t size='1.4'>Server Restart</t><br/><br/><t size='1.25'>The Server will restart in 5 minutes!</t>";
	MessageRestartInit     = "<t size='1.4'>Server Restart</t><br/><br/><t size='1.25'>We will be back in a moment!</t>";
	MessageEventInit       = "<t size='1.4'>Event</t><br/><br/><t size='1.25'>Search for some cover!</t>";
};