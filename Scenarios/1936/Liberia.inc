#####################
# Country main data #
#####################

country =
{ tag                    = LIB
  puppet                 = USA
  control				 = USA
  ai_settings			 = { flags = { puppetLevel7 = 1 } }
	# Resource Reserves 
	energy                 = 120
	metal                  = 60
	rare_materials         = 30
	transports = 100
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	manpower               = 0 
  capital                = 992
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 1 
     political_left    = 4 
     freedom           = 1 
     free_market       = 1
     professional_army = 3 
     defense_lobby     = 3 
     interventionism   = 1 
  }
  nationalprovinces      = { 992
2762
4476 4477 4478
  }
  ownedprovinces         = { 992
2762
4476 4477 4478
  }
  controlledprovinces    = { 992
2762
4476 4477 4478
  }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
   techapps               = {  
#Interwar Fighter  
4500 4510 4520 4530
#Interwar Armoured Car  
2860
#Light Field Artillery  
2290
#SW Tank 
7600 7610
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Naval Infantry
#1560 
#Medicine
5600 5610
#Troopships
3810
#Engineers
1830 1840 
#Early Agriculture
5700 
# Land Doctrines WW1 - Entente Line (default)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
 } 
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = PHI value = 200  } 
     relation = {  tag = USA value = 200  } 
    } 
   #SpyInfo                = {  country = "USA" NumberOfSpies = 3  } 
   headofstate            = {  type = 9 id = 380001  } 
   headofgovernment       = {  type = 9 id = 380002  } 
   foreignminister        = {  type = 9 id = 380003  } 
   armamentminister       = {  type = 9 id = 380004  } 
   ministerofsecurity     = {  type = 9 id = 380005  } 
   ministerofintelligence = {  type = 9 id = 380006  } 
   chiefofstaff           = {  type = 9 id = 380007  } 
   chiefofarmy            = {  type = 9 id = 380008  } 
   chiefofnavy            = {  type = 9 id = 380009  } 
   chiefofair             = {  type = 9 id = 380010  } 
   
   landunit = 
   {  location = 992 
     id       = {  type = 25500 id = 1  } 
     name     = "Army of Liberia" 
     Division = 
     {  id       = {  type = 25000 id = 2  } 
       name     = "1st Republican Guards Div." 
       type     = infantry 
	   model    = 5
       strength = 50 
      } 
    } 
   } 
 
