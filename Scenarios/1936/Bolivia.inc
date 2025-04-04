#####################
# Country main data #
#####################

country =
{ tag                    = BOL
	manpower               = 23 
	# Resource Reserves 
	energy                 = 360
	metal                  = 180
	rare_materials         = 90
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
  capital                = 832
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 1 
     political_left    = 6 
     free_market       = 1
     freedom           = 5 
     professional_army = 5 
     defense_lobby     = 1 
     interventionism   = 2 
  }
  claimedprovinces 		 = { 3842 3841 2374 838 3857 7419 3851 7418 3858 3885 5449 5448 7428 7417 }
  nationalprovinces      = { 836 832 828 827 837 822 2375 3843 3844 3845 3846 3847 3848 3849 3850 3852 3853 3854 3855 3856 3967 840 3884 3812 3819 3818 3816 3815 3817 3814 5452 5453 5454 5455 5451 3983 5434 5433 7420 7422 3956 3961 3833 7427 2003 7421 7095 7096 7423 5447 }
  ownedprovinces         = { 836 838 832 828 827 2374 2375 3841 3842 3843 3844 3845 3846 3847 3848 3849 3850 3851 3852 3853 3854 3855 3856 3857 3858 3812 3819 3818 3816 5452 5453 5454 5455 7418 7419 7420 }
  controlledprovinces    = { 836 838 832 828 827 2374 2375 3841 3842 3843 3844 3845 3846 3847 3848 3849 3850 3851 3852 3853 3854 3855 3856 3857 3858 3812 3819 3818 3816 5452 5453 5454 5455 7418 7419 7420 }
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
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Medicine
5600 5610 5620
#Engineers
1830 1840 1850 
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Modern Agriculture  
5700 5710 5010
#Improved Construction Engineering 
5800 5080 
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
} 
 inventions = { 3000027 }
  diplomacy =
  { relation = { tag = ARG value = 50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -50 }
    relation = { tag = COL value = 1 }
    relation = { tag = ECU value = -20 }
    relation = { tag = GER value = 15 }
    relation = { tag = PAR value = -50 }
    relation = { tag = PRU value = 30 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 85 }
    relation = { tag = VEN value = -15 }
  }
   SpyInfo                = {  country = "BOL" NumberOfSpies = 3  } 
   headofstate            = {  type = 9 id = 205001  } 
   headofgovernment       = {  type = 9 id = 205002  } 
   foreignminister        = {  type = 9 id = 205003  } 
   armamentminister       = {  type = 9 id = 205004  } 
   ministerofsecurity     = {  type = 9 id = 205005  } 
   ministerofintelligence = {  type = 9 id = 205006  } 
   chiefofstaff           = {  type = 9 id = 205007  } 
   chiefofarmy            = {  type = 9 id = 205008  } 
   chiefofnavy            = {  type = 9 id = 205009  } 
   chiefofair             = {  type = 9 id = 205010  } 
  # Human Wave

landunit = 
   {  id       = {  type = 17000 id = 40  } 
     name     = "Ejercito de Bolivia" 
     location = 832 
     Division = 
     {  id       = {  type = 17000 id = 4000  } 
       name     = "1. Brigada de Infanter�a 'Bolivar'" 
       strength = 30 
       type     = infantry 
       model    = 5
       extra    = artillery 
	   brigade_model = 4
      } 
     Division = 
     {  id       = {  type = 17000 id = 4001  } 
       name     = "2. Brigada de Infanter�a" 
       strength = 30 
       type     = infantry 
       model    = 5
      } 
     Division = 
     {  id       = {  type = 17000 id = 4002  } 
       name     = "3. Brigada de Infanter�a" 
       strength = 30 
       type     = infantry 
       model    = 5
      } 
     Division = 
     {  id       = {  type = 17000 id = 4003  } 
       name     = "1. Brigada de Caballer�a 'Chaco'" 
       strength = 20 
       type     = cavalry 
       model    = 6
      } 
     Division = 
     {  id       = {  type = 17000 id = 4004  } 
       name     = "2. Brigada de Caballer�a" 
       strength = 20 
       type     = cavalry 
       model    = 6
      } 	  
    }
   airunit = 
   {  id       = {  type = 12000 id = 4005  } 
     name     = "Aviaci�n del Ej�rcito" 
     location = 832 
     base     = 832 
     Division = 
     {  id       = {  type = 12000 id = 4006  } 
       name     = "Grupo A�rea Nro. 1" 
       strength = 20 
       type     = interceptor 
       model    = 6
      } 
    } 	
  } 
 