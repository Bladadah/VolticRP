/*
	Konfig für Perso	
*/
class Personalausweis {
	// Körpergröße von-bis in cm # Bodysize from-to in cm
	koerpergroesse[] = {145,205};
	// Geburtsjahre von-bis # year of birth from-to
	// Wird mit dem Missionsdatum gegengerechnet # would be calculate with mission date
	jahre[] = {1940,2000};
	// Körpergewicht in kg von-bis # body weight from-to in kg
	gewicht[] = {120,235};
	// Geschlecht M=Männlich, W=Weiblich # sex 'M'=man, change 'W' to 'F' for female
	geschlecht[] = {"M","F"};
	// Polizeimarke o. Logo (Pfad) # police badge destination
	logoWest = "#(rgb,8,8,3)color(0,0,1,0.5)";
	// Sanitäter-Logo (Pfad) # medical badge destination
	logoIndep = "#(rgb,8,8,3)color(0,1,0,0.5)";
	// Zivilisten-Logo (Pfad), ja Farben können angegeben werden # civilian badge destination, yes you can use color
	logoCiv = "#(rgb,8,8,3)color(0.49,0.06,0.44,0.5)";
	// Opfor-Logo (Pfad)/Unbekannte Fraktion # opfor badge destination/unkown side
	logoOpfor = "#(rgb,8,8,3)color(1,0,0,0.5)";
	// Unknown side
	logoUnkn = "#(rgb,8,8,3)color(1,1,1,0.5)";
	// Blutgruppen # bloodtypes
	blutgr[] = {"A","B","AB","0"};
	// taste zum Ausblenden des Persos als Zahl angeben. 68=F10
	tasteAusblenden = 15; // Key as number
	zeichen_n_max = 16; // Maximale Zeichen (mit Leerzeichen) des Spielers # maximum characters of players name
	zeichen_n_min = 3; // Minimale Zeichen (mit Leerzeichen) des Spielers # minimum characters of players name
	aenderungspreis = 10000; // Preis zum Ändern des Persos # price to change your id card
	// Personalausweis_altis_de
	// Personalausweis_altis_en
	// Personalausweis_german_de
	/*
		Mehrere Staatsbürgerschaften verwenden
		{{"Staatsname","Pfad\zum\Persobild"}}
		Nur der Index (Platz des Elements in einem Array) wird in der DB gespeichert und am Ende ausgewertet und via select ausgewählt.
		Die Staatszugehörigkeit muss in dem Bild selber hinterlegt werden, in der uiPerso.hpp wird/wurde dafür kein extra Feld erstellt
	*/
	staatsbuergerschaften[] = {
		{"State of Le Port","VOLTICRP\persobilder\IDCard_Eng.paa"},
		{"State of Trinite","VOLTICRP\persobilder\IDCard_Eng.paa"},
		{"State of Sofia","VOLTICRP\persobilder\IDCard_Eng.paa"},
		{"State of Pygros","VOLTICRP\persobilder\IDCard_Eng.paa"}
	};
	erlaube_Indp_aendern = 1; // Fraktion erlauben Persodaten zu ändern
	erlaube_East_aendern = 1;
	erlaube_West_aendern = 1;
	erlaube_Civ_aendern = 1;
	persoNeu_wann = 1; // 0=vor dem Spawnbildschirm erscheint Dialog # dialog to create a new id card befor spawn menu, 1=neuen Perso nach dem Spawnmenü erstellen/prüfen # create/check id card after spawn menu
	erlaubeMehrereNamen_indep = 1; // 1=Erlaube Nutzung anderer Namen, als im Perso hinterlegt # allow player to use different names as in database, 0=verbieten, disallow
	erlaubeMehrereNamen_west = 1; // 1=Erlaube Nutzung anderer Namen, als im Perso hinterlegt # allow player to use different names as in database, 0=verbieten, disallow
	erlaubeMehrereNamen_east = 1; // 1=Erlaube Nutzung anderer Namen, als im Perso hinterlegt # allow player to use different names as in database, 0=verbieten, disallow
	erlaubeMehrereNamen_civ = 1; // 1=Erlaube Nutzung anderer Namen, als im Perso hinterlegt # allow player to use different names as in database, 0=verbieten, disallow
	erlaubteZeichen[] = { 
		/*
			case-SenSiTive, if you are using pre-defined SQL-Statements, do not allow ":",
			abcdefghijklmnopqrstuvwxyzßüäö -_&ABCDEFGHIJKLMNOPQRSTUVWXYZÄÜÖ1234567890.,;?!'"
			hint str (toArray "a") => "97"
			hint toString [97] => a
		*/
		97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,223,252,
		228,246,32,45,95,38,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,196,220,214,
		49,50,51,52,53,54,55,56,57,48,46,44,59,63,33,39,34
	};
	class tasten { // QUERTZ layout, möglicherweise nicht korrekt
		1 = "Escape"; 59 = "F1"; 60 = "F2"; 61 = "F3"; 62 = "F4"; 63 = "F5"; 64 = "F6"; 65 = "F7"; 66 = "F8"; 67 = "F9"; 68 = "F10"; 87 = "F11"; 88 = "F12"; 183 = "Druck";
		70 = "Rollen"; 197 = "Pause"; 41 = "~`"; 2 = "1"; 3 = "2"; 4 = "3"; 5 = "4"; 6 = "5"; 7 = "6"; 8 = "7"; 9 = "8"; 10 = "9"; 11 = "0"; 12 = "ß"; 13 = "` ´";
		14 = "<- Zurück"; 15 = "Tab"; 16 = "Q"; 17 = "W"; 18 = "E"; 19 = "R"; 20 = "T"; 21 = "Z"; 22 = "U"; 23 = "I"; 24 = "O"; 25 = "P"; 26 = "Ü"; 27 = " + * ~"; 28 = "Enter";
		58 = "Capslock"; 30 = "A"; 31 = "S"; 32 = "D"; 33 = "F"; 34 = "G"; 35 = "H"; 36 = "J"; 37 = "K"; 38 = "L"; 39 = "Ö"; 40 = "Ä"; 43 = "#"; 42 = "L Shift"; 86 = "< >";
		44 = "Y"; 45 = "X"; 46 = "C"; 47 = "V"; 48 = "B"; 49 = "N"; 50 = "M"; 51 = ","; 52 = "."; 53 = "- _"; 54 = "R Shift"; 29 = "L STRG"; 219 = "L Windows"; 56 = "Alt";
		57 = "Leerstaste"; 184 = "Alt Gr"; 220 = "R Windows"; 221 = "Dropdown (Rechtsklick)"; 203 = "L Pfeil <-"; 205 = "R Pfeil ->"; 200 = "O Pfeil"; 208 = "U Pfeil";
		210 = "Einfügen"; 199 = "Pos1"; 201 = "Bild Hoch"; 209 = "Bild Runter"; 211 = "Entf"; 207 = "Ende"; 69 = "Num Ein/Aus"; 181 = "Num /"; 55 = "Num *"; 74 = "Num -";
		71 = "Num 7"; 72 = "Num 8"; 73 = "Num 9"; 75 = "Num 4"; 76 = "Num 5"; 77 = "Num 6"; 79 = "Num 1"; 80 = "Num 2"; 81 = "Num 3"; 82 = "Num 0"; 83 = "Num Entf"; 
		156 = "Num Enter"; 78 = "Num +";
	};
	/*
		Der Reihenfolge nach, {"1","2",x}, order from rank 1 to x (left - right)
		Muss der Reihenfolge genau der staatsbuergerschaften entsprechen, für die Level!
		cop_lvl[] = {{"Private Staat Altis","Private Staat BRD","Private xxx"},....}; // Neu
	*/
	cop_lvl[] = {{"Polizeianwärter","Polizeianwärter 1"},{"Polizeimeister","Polizeimeister 2"},{"Polizeiobermeister","Polizeiobermeister 3"},{"Polizeikommissar","Polizeikommissar 4"},{"Polizeioberkommissar","Polizeioberkommissar 5"},{"Polizeihauptkommissar", "Polizeihauptkommissar 6"},{"Stellv. Polizeidirektor", "Stellv. Polizeidirektor 7"},{"SEK","SEK 8"},{"Polizeidirektor", "Polizeidirektor 9"}}; // Neu
	med_lvl[] = {{"Private","Private 1"},{"Corporal","Corporal 2"},{"Sergeant","Sergeant 3"},{"Lieutenant","Lieutenant 4"},{"Captain", "Captain 5"},{"Major", "Major 6"},{"Colonel", "Colonel 7"}}; // Neu
	// Wohnort # living city
	class persoOrt {
		class 39071 {
			id = 1;
			name = "Malden";
			plz = 39071;
			str[] = { {"Le Port", 5},{"Le Pessagne",3},{"La Trinite",2} };
		};	
		class 34142 {
			id = 2;
			name = "Altis";
			plz = 34142;
			str[] = { {"Kavala",2},{"Athira",12},{"Pygros",12} };
		};	
		class 32892 {
			id = 3;
			name = "Lakeside";
			plz = 32892;
			str[] = {{"Lakeside",30},{"Nueva San Cristobal",12},{"Los Diablos",6}};
		};	
		class 35557 {
			id = 4;
			name = "Stratis";
			plz = 35557;
			str[] = {{"Agira Marina",13}};
		};	
		class 32449 {
			id = 5;
			name = "Tanoa";
			plz = 32449;
			str[] = {{"Georgetown",12},{"La Rochelle",9},{"Harcourt",3}};
		};	
		class 39136 {
			id = 6;
			name = "Metropolis";
			plz = 39136;
			str[] = {{"Lakeside",12},{"Nueva San Cristobal",9},{"Los Diablos",8}};
		};	
		class 32632 {
			id = 7;
			name = "Chenarus";
			plz = 32632;
			str[] = {{"Elektro",8},{"Cherno",5},{"Berezino",2}};
		};	
		class 34949 {
			id = 8;
			name = "Takistan";
			plz = 34949;
			str[] = {{"Rasman",5},{"Nagara",5},{"Garmsar",15}};
		};	
		class 31593 {
			id = 9;
			name = "Emita";
			plz = 31593;
			str[] = {{"Emita City",2},{"Kirseberg",6}};
		};		
	};
	// Vorhandene Gesichter # some faces
	class persoBild
	{
		class 1
		{
			id = 1;
			name = "Chad";
			pfad = "VOLTICRP\persobilder\IDBang.jpg";
		};
		class 2
		{
			id = 2;
			name = "Lewis";
			pfad = "VOLTICRP\persobilder\IDStewarto.jpg";
		};
		class 3
		{
			id = 3;
			name = "Tyler";
			pfad = "VOLTICRP\persobilder\IDShortMan.jpg";
		};
		class 4
		{
			id = 4;
			name = "Trump";
			pfad = "VOLTICRP\persobilder\IDTrump.jpg";
		};
		class 5
		{
			id = 5;
			name = "Jerry";
			pfad = "VOLTICRP\persobilder\IDJerry.jpg";
		};
		class 6
		{
			id = 6;
			name = "Pepe";
			pfad = "VOLTICRP\persobilder\IDPepe.jpg";
		};
		class 7
		{
			id = 7;
			name = "John";
			pfad = "VOLTICRP\persobilder\IDYoucantseeme.jpg";
		};
		class 8
		{
			id = 8;
			name = "Tri";
			pfad = "VOLTICRP\persobilder\IDTrihard.jpg";
		};
		class 9
		{
			id = 9;
			name = "Meeseeks";
			pfad = "VOLTICRP\persobilder\IDMeeseeks.jpg";
		};
		class 10
		{
			id = 10;
			name = "Dat Boi";
			pfad = "VOLTICRP\persobilder\IDBoi.jpg";
		};
		class 11
		{
			id = 11;
			name = "Alison";
			pfad = "VOLTICRP\persobilder\IDQuinn.jpg";
		};
		class 12
		{
			id = 12;
			name = "Commy";
			pfad = "VOLTICRP\persobilder\IDCommunism.jpg";
		};
		class 13
		{
			id = 13;
			name = "Cat";
			pfad = "VOLTICRP\persobilder\IDCat.jpg";
		};
		class 14
		{
			id = 14;
			name = "Rob";
			pfad = "VOLTICRP\persobilder\IDBlock.jpg";
		};
		class 15
		{
			id = 15;
			name = "Steve";
			pfad = "VOLTICRP\persobilder\IDCookie.jpg";
		};
		class 16
		{
			id = 16;
			name = "Frog";
			pfad = "VOLTICRP\persobilder\IDFrog.jpg";
		};
		class 17
		{
			id = 17;
			name = "Paul";
			pfad = "VOLTICRP\persobilder\IDPaul.jpg";
		};
		class 18
		{
			id = 18;
			name = "Ethan";
			pfad = "VOLTICRP\persobilder\IDVape.jpg";
		};
		class 19
		{
			id = 19;
			name = "Josh";
			pfad = "VOLTICRP\persobilder\IDJosh.jpg";
		};
	};
};

#include "Personalausweis.hpp"