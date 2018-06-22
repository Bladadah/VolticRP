class CfgServerInfoMenu
{
   addAction = 1; // Enable/disable action menu item | use 0 to disable | default: 1 (enabled)
   antiHACK = "infiSTAR + BattlEye";
   hostedBy = "VolticRP";
   ipPort = "158.69.124.219 : 2302";
   //openKey = "User7"; // https://community.bistudio.com/wiki/inputAction/actions
   openAtLogin = no;
   restart = 4; // Amount of hours before server automatically restarts
   serverName = "VolticRP";
   class menuItems
   {
      // title AND content accept formatted text ( since update Oct5.2016 )
      class first
      {
         menuName = "General";
         title = "<t color='#ffffff'>GENERAL INFORMATION</t>";
         content[] = {
            "Hey there! Welcome to VolticRP<br /><br />",
            "If you want to close this menu, simply click ESC"
         };
      };
      class second
      {
         menuName = "Rules";
         title = "SERVER RULES";
         content[] = {
            "<t size='1.75'>Our Rules</t><br />Visit our website for our full list of rules here: <a href='https://volticrp.com/forums/index.php?/topic/155-malden-server-rules/' color='#56BDD6'>SERVER RULES<br />",
         };
      };
      class third
      {
         menuName = "Features";
         title = "FEATURES";
         content[] = {
             "<t size='1.45'>Y</t><br />Opens player menu<br />",
             "<t size='1.15'>Shift B</t><br />Surrender<br />",
             "<t size='1.15'>Shift H</t><br />Holster<br />",
             "<t size='1.15'>Tab</t><br />Close ID card<br />",
			 "<t size='1.15'>Ctrl N</t><br />Opens GPS<br />",
             "<t size='1.15'>Shift Tab</t><br />Open taxi driver menu<br />"
         };
      };
      class fourth
      {
         menuName = "Staff";
         title = "Community Leadership";
         content[] = {
			"Founder: Leon, Bradley",
            "<br />",
            "Directors: ",
            "<br />",
			"Community Manager: ",
            "<br />",
			"TBA:",
            "<br />",
			"TBA:"
		 };
      };
      class fifth
      {
         menuName = "Reporting";
         title = "REPORTING PLAYERS";
         content[] = {"To report a player, visit this link: <a href='https://volticrp.com/forums/index.php?/support/' color='#56BDD6'>REPORT PLAYER HERE</a>"
         };
      };
      class sixth
      {
         menuName = "Communication";
         title = "VOICE SERVER AND WEBSITE";
         content[] = {
            "<a href='ts3server://ts.volticrp.com' color='#56BDD6'>Join Teamspeak</a>",
            "<br />",
            "<a href='https://volticrp.com/forums/' color='#56BDD6'>Website</a>"
         };
      };
      class seventh
      {
         menuName = "Credits";
         title = "CREDITS WHERE CREDITS DUE";
         content[] = {
            "<t size='1.25'>VolticRP:</t> Main development of this mission file",
            "<br />",
            "<t size='1.25'>Jason Sigma:</t> Textures Developer"
         };
      };
   };
};
