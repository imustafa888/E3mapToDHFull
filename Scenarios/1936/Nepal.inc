
##############################
# Country definition for NEP #
##############################

country =
{ tag                    = NEP
  puppet                 = ENG
  control				 = ENG
  ai_settings			 = { flags = { puppetLevel7 = 1 } }
	# Resource Reserves 
	energy                 = 240
	metal                  = 120
	rare_materials         = 60
	oil                    = 200 
	supplies               = 200 
	money                  = 10 
	capital                = 1457 
  manpower               = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 1 
     political_left    = 4 
     freedom           = 2 
     free_market       = 1
     professional_army = 2 
     defense_lobby     = 3 
     interventionism   = 3 
  }
  nationalprovinces      = { 1473 2953 5177 5178 5179 6923 7912 7913 7919 7920 7921 1456 5206 5197 5207 5210 5211 1472 6922 7193 5224 5223 5222 2043
  }
  ownedprovinces         = { 1473 2953 5177 5178 5179 6923 7912 7913 7919 7920 7921
  }
  controlledprovinces    = { 1473 2953 5177 5178 5179 6923 7912 7913 7919 7920 7921
  }
  claimedprovinces 		 = {  }
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
#1916 lgt. Infantry Division  
1010  1020 1030 1040 1050 1060
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Agriculture
5700 
#Medicine
5600
#Engineers
1830 
# Land Doctrines WW1 - Entente Line
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
# Land Doctrines WW2 - none

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
  } 
  inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = AST value = 200  } 
     relation = {  tag = BHU value = 200  } 
     relation = {  tag = CAN value = 200  } 
     relation = {  tag = ENG value = 200  } 
     relation = {  tag = FRA value = 150  } 
     relation = {  tag = GER value = 1  } 
     relation = {  tag = IRQ value = 100  } 
     relation = {  tag = ITA value = 1  } 
     relation = {  tag = NZL value = 200  } 
     relation = {  tag = OMN value = 150  } 
     relation = {  tag = SAF value = 200  } 
     relation = {  tag = USA value = 100  } 
     relation = {  tag = YEM value = 150  } 
    } 
   SpyInfo                = {  country = "NEP" NumberOfSpies = 2  } 
  
   headofstate            = {  type = 9 id = 395001  } 
   headofgovernment       = {  type = 9 id = 395002  } 
   foreignminister        = {  type = 9 id = 395003  } 
   armamentminister       = {  type = 9 id = 395004  } 
   ministerofsecurity     = {  type = 9 id = 395005  } 
   ministerofintelligence = {  type = 9 id = 395006  } 
   chiefofstaff           = {  type = 9 id = 395007  } 
   chiefofarmy            = {  type = 9 id = 395008  } 
   chiefofnavy            = {  type = 9 id = 395009  } 
   chiefofair             = {  type = 9 id = 395010  } 
   
   landunit = 
   {  location = 1473 
     name     = "Royal Nepalese Army" 
     id       = {  type = 31500 id = 1  } 
     Division = 
     {  id   = {  type = 31500 id = 2  } 
       name = "Royal Nepalese Lifeguard Div." 
	   strength     = 50
       type = infantry 
	   model    = 6
      } 
     Division = 
     {  id   = {  type = 31500 id = 3  } 
       name = "Royal Household Division" 
	   strength     = 50
       type = infantry 
	   model    = 7
      } 
    } 
   } 
 
