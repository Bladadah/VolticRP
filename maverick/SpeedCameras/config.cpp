/*
	Author: Maverick Applications
	Desc: Altis Life SpeedCameras
*/

//Customize your settings, to fit your server setup!
class Maverick_SpeedCameras {

    //Define the possible locations for your speed cameras.
    //position -> Get the position via: diag_log(getPosATL player) -> replace the [] with {}
    //direction -> Get the position via: diag_log((getDir player) - 90)
    //speedlimit -> Choose any value you like. In a zone where people should drive 50, make set it to 55 or 60, to catch those speeders!
	SpeedCameras[] = {
	  //{{<position>}, <direction>, <speedlimit>},
        {{7926.804,4079.105,0}, 261.876, 70}, //Kavalla Martketplace Hauptstraße Norden
        {{6533.232,3548.498,0}, 20.085, 90} //Kavalla Martketplace Hauptstraße Süden
	};

    //Shall the user get its driver licenses revoked? (Truck and Car license)
    RemoveDriverLicense    = 0;   // 0 = No | 1 = yes
    RemoveTruckLicense     = 0;   // 0 = No | 1 = yes

    //Shall the player be added to the wanted list with a speeding entry?
    AddPlayerToWanted      = 1;   // 0 = No | 1 = yes
	WantedCase			   = "4"; //The number/numbers+charaters that describe the crime you want the player to be added for

    //Let the player pay a fine from his bank account
    SpeedingFee            = 1000; // 0 = No fine payed | Any value over 0 $ will be then subtracted from the bank account

    //Define the messages, which will be shown to the player, when he was driving too fast
	InfoMSG                = "You have been driving %1 km/h to fast!";
	RemoveDriverLicenseMSG = "Your drivers license has been removed!";
	RemoveTruckLicenseMSG  = "Your truck license has been removed!";
	AddPlayerToWantedMSG   = "A wanted record about you has been created!";
	SpeedingFeeMSG         = "You have been fined with %1$ for speeding!";
};