#####################
# Country main data #
#####################

country =
{ tag                    = URU
	# Resource Reserves 
	energy                 = 480
	metal                  = 240
	rare_materials         = 120
	transports = 100
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	manpower               = 0 
  capital                = 849
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 1 
     political_left    = 5 
     freedom           = 7 
     free_market       = 1
     professional_army = 2 
     defense_lobby     = 1 
     interventionism   = 1 
  }
  nationalprovinces      = { 849 833 2960 3776 3777 3778 3779 3780 }
  ownedprovinces         = { 849 833 2960 3776 3777 3778 3779 3780 }
  controlledprovinces    = { 849 833 2960 3776 3777 3778 3779 3780 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
   techapps               = {  
 #Interwar Fighter  
 4500 4510 4520 4530 4540 4550 4010
#Basic Armoured Car  
2860 2870 2880 2020
#Great War Heavy Field Artillery 
2290 2300 2310
#SW Tank 
7600 7610
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240   
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Mechanized Agriculture
5700 5710 5010 5020
#Manufactoring
5810 5820 5050
#Improved Construction Engineering
5800 5080  
#Basic Oil Refining
 #5190 

 #Naval Infantry
#1560 1570
#Engineers
1830 1840 1850 
#Medicine
5600 5610 
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810
# Land Doctrines WWI - Entente line
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Landdoctrine ww2 - none?

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

} 
inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = ARG value = -50  } 
     relation = {  tag = BOL value = 10  } 
     relation = {  tag = BRA value = 125  } 
     relation = {  tag = CHL value = 20  } 
     relation = {  tag = COL value = 10  } 
     relation = {  tag = ECU value = 10  } 
     relation = {  tag = PAR value = 20  } 
     relation = {  tag = PRU value = 25  } 
     relation = {  tag = SOV value = -100  } 
     relation = {  tag = USA value = 100  } 
     relation = {  tag = VEN value = 10  } 
    } 
   SpyInfo                = {  country = "URU" NumberOfSpies = 4  } 
   headofstate            = {  type = 9 id = 195001  } 
   headofgovernment       = {  type = 9 id = 195002  } 
   foreignminister        = {  type = 9 id = 195003  } 
   armamentminister       = {  type = 9 id = 195004  } 
   ministerofsecurity     = {  type = 9 id = 195005  } 
   ministerofintelligence = {  type = 9 id = 195006  } 
   chiefofstaff           = {  type = 9 id = 195007  } 
   chiefofarmy            = {  type = 9 id = 195008  } 
   chiefofnavy            = {  type = 9 id = 195009  } 
   chiefofair             = {  type = 9 id = 195010  } 

landunit = 
   {  id       = {  type = 13700 id = 1  } 
     name     = "Ejercito de Uruguay" 
     location = 849 
     Division = 
     {  id       = {  type = 13700 id = 2  } 
       name     = "4a Brigada de Inf. 'Don Claudio'" 
       strength = 40 
       type     = infantry 
	   model    = 6
      } 
	  Division = 
     {  id       = {  type = 13700 id = 3  } 
       name     = "4a Brigada de Inf. 'Don Claudio'" 
       strength = 40 
       type     = cavalry 
	   model    = 8
      } 
    }
	
	   airunit = 
   {  id       = {  type = 13700 id = 4  } 
     name     = "Aviaci�n del Ej�rcito" 
     location = 849 
     base     = 849 
     Division = 
     {  id       = {  type = 13700 id = 5  } 
       name     = "Grupo A�rea Nro. 1" 
       strength = 45 
       type     = interceptor 
       model    = 5
      } 
    } 
	
	navalunit = { 
		id = { type = 13700 id = 6 } 
		name = "I Flotilla de la Armada" 
		location = 849 
		base = 849 
		division = { 
			id = { type = 13700 id = 7 } 
			name = "Flotilla des Destructores nro. 1" 
			type = destroyer 
			model = 0 
			} 	
  } 
 
}