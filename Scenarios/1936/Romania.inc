#####################
# Country main data #
#####################

country =
{ tag                    = ROM
  capital                = 424
	manpower               = 48 
	# Resource Reserves 
	energy                 = 1920
	metal                  = 960
	rare_materials         = 480
	transports = 100
	oil                    = 500 
	supplies               = 500 
	money                  = 15 
  diplomacy =
  { relation = { tag = BUL value = 25 }
    relation = { tag = CZE value = 20 }
    relation = { tag = ENG value = 50 }
    relation = { tag = FIN value = 40 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 50 }
    relation =
    { tag        = GRE
      value      = 100
    }
    relation = { tag = HUN value = 1 }
    relation = { tag = ITA value = 50 }
    relation = { tag = POL value = 40 }
    relation = { tag = SOV value = 1 }
    relation =
    { tag        = TUR
      value      = 100
    }
    relation =
    { tag        = YUG
      value      = 100
    }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 2 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 1 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 2 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 1 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 2 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 3 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 1 }
  nationalprovinces      = {  424 425 431 426 495 496 498 427 428 429 430 432 436 433  230 434
							2603 2450 2449 2605 2604  1403 1449 1402   2602
							1571 3055
							3379	3380	3381	3382	3383	3384	3385		3387	3388	3389		
							1173 1401 435 3390 
							6511 6512
							7051 7052 7053 7054 7070 7071 7300
  }
  ownedprovinces         = { 423 424 425 431 426 495 496 498 427 428 429 430 432 436 433 435 230 434
							2603 2450 2449 2605 2604 1899 1403 1449 1402 1173 1401 2602 3055
							3379	3380	3381	3382	3383	3384	3385	3386	3387	3388	3389	3390	3391
6511 6512
7051 7052 7053 7054 7070 7071 7300
  }
  controlledprovinces    = { 423 424 425 431 426 495 496 498 427 428 429 430 432 436 433 435 230 434
							2603 2450 2449 2605 2604 1899 1403 1449 1402 1173 1401 2602 3055
							3379	3380	3381	3382	3383	3384	3385	3386	3387	3388	3389	3390	3391
6511 6512
7051 7052 7053 7054 7070 7071 7300
  }
  claimedprovinces 		 = { 232 3386 1899 423 3391 3370 1890 494 }

  # Eastern Minor Tech '36
  # Group C 1936 techs
  # ######################
	techapps = {

	# Manufacturing
	5810 5820 5050 5830
	# Construction Engineering 
	5800 5080 5090 
	# Agriculture 
	5700 5710 5010
	# Computers & Cryptography
	5310 54010 54020 54030 5316 5326 5327
	# Oil Refining 
	5190 
	# Medicine
	5600 5610 5620 

	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 
	# Mountain Division 
	1160 1170 1180 1190 1200 1210 1220 1230 1240
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340
	# Engineers
	1830 1840 1850 
	# Supply 
	1910 1920 1930 1940 1950 1960

	# Tanks
	7600 7610 2620 2010 2630 2640
	# Armoured Car  
	2860 2870 2880 2020
	# Field Artillery 
	2290 2300 2310 2900 2910
	# Static Anti-Air Artillery 
	2800 2450 21180 21190
	# Anti-Air Artillery Brigade 
	2810 2820 2510
	# Anti-Tank Artillery 
	#2400

	# Hospital System
	14000 14010 14020
	# Land Doctrines WWI - Entente Line
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	# Land Doctrines WWII - Defensive Focus
	6560

	# Destroyer 
	3010 3020 3030 3040
	# Submarine 
	3610 3620 3630
	# Torpedo & ASW 18
	3720 3730 3736 3740 3900
	# Troopships
	3810

	# Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080
	
	# Interceptor Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020
	# Multirole Fighter
	4300 4310 4320 4330
	# Tactical Bomber 
	4600 4610 4620 4630 4120 
	# Strategic bomber
	4800 4810 4820
	# Naval Bomber
	4700 4710
	# Seaplanes
	4740 4750 4760

	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
	
	}
	
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 1 
     political_left    = 6 
     freedom           = 4 
     free_market       = 1
     professional_army = 5 
     defense_lobby     = 3 
     interventionism   = 3 
  }
inventions = { 3000027 }   headofstate            = {  type = 9 id = 110001  } 
   headofgovernment       = {  type = 9 id = 110002  } 
   foreignminister        = {  type = 9 id = 110003  } 
   armamentminister       = {  type = 9 id = 110202  } #Victor Slavescu
   ministerofsecurity     = {  type = 9 id = 110200  } #Ion C. Inculet
   ministerofintelligence = {  type = 9 id = 110006  } 
   chiefofstaff           = {  type = 9 id = 110007  } 
   chiefofarmy            = {  type = 9 id = 110008  } 
   chiefofnavy            = {  type = 9 id = 110009  } 
   chiefofair             = {  type = 9 id = 110010  } 
   
   landunit = 
   {  location = 424 # Bucharest
     name     = "Armata Regala" 
     id       = {  type = 20600 id = 1  } 
     Division = 
     {  id       = {  type = 20600 id = 2  } 
       name     = "Cartier General"
       type     = hq
	   model = 2
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 20600 id = 3  } 
       name     = "Divizie Garda Regala"
       type     = infantry 
	   model = 8
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 20600 id = 4  } 
       name     = "Brigada 1 Fortificatii" 
       type     = garrison
	   model = 3
       strength = 60 
      } 
     Division = 
     {  id       = {  type = 20600 id = 5  } 
       name     = "Brigada 2 Fortificatii" 
       type     = garrison
	   model = 2
       strength = 5 
      } 
    } 
   landunit = 
   {  location = 424 
     name     = "Corp I Armata" 
     id       = {  type = 20600 id = 6  } 
     Division = 
     {  id       = {  type = 20600 id = 7  } 
       name     = "Divizie 2 Infanterie" 
       type     = infantry 
	   model = 6
       extra    = artillery 
	   brigade_model = 5
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 20600 id = 8  } 
       name     = "Divizie 3 Infanterie" 
       type     = infantry 
	   model = 6
       strength = 50 
       extra    = engineer 
	   brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 20600 id = 9  } 
       name     = "Divizie 11 Infanterie" 
       type     = infantry 
	   model = 6
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 20600 id = 10  } 
       name     = "Divizie 31 Infanterie" 
       type     = infantry 
	   model = 5
       strength = 5 
      } 
    } 
   landunit = 
   {  location = 424
     name     = "Corp II Armata" 
     id       = {  type = 20600 id = 11  } 
     Division = 
     {  id       = {  type = 20600 id = 12  } 
       name     = "Divizie 4 Infanterie" 
       type     = infantry 
	   model = 6
       extra    = engineer 
	   brigade_model = 2
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 20600 id = 13  } 
       name     = "Divizie 9 Infanterie" 
       type     = infantry 
	   model = 6
       strength = 50 
       extra    = artillery
	   brigade_model = 5
      } 
     Division = 
     {  id       = {  type = 20600 id = 14  } 
       name     = "Divizie 10 Infanterie" 
       type     = infantry 
	   model = 6
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 20600 id = 15  } 
       name     = "Divizie 32 Infanterie" 
       type     = infantry 
	   model = 5
       strength = 5 
      } 
    } 
   landunit = 
   {  location = 424
     name     = "Corp III Armata" 
     id       = {  type = 20600 id = 16  } 
     Division = 
     {  id       = {  type = 20600 id = 17  } 
       name     = "Divizie 15 Infanterie" 
       type     = infantry 
	   model = 6
       extra    = light_armor_brigade
	   brigade_model = 1
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 20600 id = 18  } 
       name     = "Divizie 20 Infanterie" 
       type     = infantry 
	   model = 6
       strength = 50 
       extra    = artillery
	   brigade_model = 5
      } 
     Division = 
     {  id       = {  type = 20600 id = 19  } 
       name     = "Divizie 21 Infanterie" 
       type     = infantry 
	   model = 6
       extra    = engineer 
	   brigade_model = 2
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 20600 id = 20  } 
       name     = "Divizie 35 Infanterie" 
       type     = infantry 
	   model = 5
       strength = 5 
      } 
    } 
   landunit = 
   {  location = 424 
     name     = "Corp IV Armata" 
     id       = {  type = 20600 id = 21  } 
     Division = 
     {  id       = {  type = 20600 id = 22  } 
       name     = "Divizie 7 Infanterie" 
       type     = infantry 
	   model = 6
       extra    = artillery 
	   brigade_model = 5
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 20600 id = 23  } 
       name     = "Divizie 8 Infanterie" 
       type     = infantry 
	   model = 6
       strength = 50 
       extra    = engineer 
	   brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 20600 id = 24  } 
       name     = "Divizie 14 Infanterie" 
       type     = infantry 
	   model = 6
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 20600 id = 25  } 
       name     = "Divizie 27 Infanterie" 
       type     = infantry 
	   model = 5
       strength = 5 
      } 
    } 
   landunit = 
   {  location = 424
     name     = "Corp V Armata" 
     id       = {  type = 20600 id = 26  } 
     Division = 
     {  id       = {  type = 20600 id = 27  } 
       name     = "Divizie 5 Infanterie" 
       type     = infantry 
	   model = 6
       extra    = artillery 
	   brigade_model = 5
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 20600 id = 28  } 
       name     = "Divizie 6 Infanterie" 
       type     = infantry 
	   model = 6
       strength = 50 
       extra    = engineer 
	   brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 20600 id = 29  } 
       name     = "Divizie 13 Infanterie" 
       type     = infantry 
	   model = 6
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 20600 id = 30  } 
       name     = "Divizie 30 Infanterie" 
       type     = infantry 
	   model = 5
       strength = 5 
      } 
    } 
   landunit = 
   {  location = 424 
     name     = "Corp VI Armata" 
     id       = {  type = 20600 id = 31  } 
     Division = 
     {  id       = {  type = 20600 id = 32  } 
       name     = "Divizie 12 Infanterie" 
       type     = infantry 
	   model = 6
       extra    = artillery 
	   brigade_model = 5
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 20600 id = 33  } 
       name     = "Divizie 16 Infanterie" 
       type     = infantry 
	   model = 6
       strength = 50 
       extra    = engineer 
	   brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 20600 id = 34  } 
       name     = "Divizie 17 Infanterie" 
       type     = infantry 
	   model = 6
       strength = 50 
      } 
    } 
   landunit = 
   {  location = 424 
     name     = "Corp VII Armata" 
     id       = {  type = 20600 id = 35  } 
     Division = 
     {  id       = {  type = 20600 id = 36  } 
       name     = "Divizie 1 Infanterie" 
       type     = infantry 
	   model = 6
       extra    = artillery 
	   brigade_model = 5
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 20600 id = 37  } 
       name     = "Divizie 18 Infanterie" 
       type     = infantry 
	   model = 6
       strength = 50 
       extra    = engineer 
	   brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 20600 id = 38  } 
       name     = "Divizie 19 Infanterie" 
       type     = infantry 
	   model = 6
       strength = 50 
      } 
    } 
   landunit = 
   {  location = 424 
     name     = "Corp Munte" 
     id       = {  type = 20600 id = 39  } 
     Division = 
     {  id       = {  type = 20600 id = 40  } 
       name     = "Brigada 1 Munte" 
       type     = bergsjaeger 
	   model = 8
       strength = 60 
      } 
     Division = 
     {  id       = {  type = 20600 id = 41  } 
       name     = "Brigada 2 Munte" 
       type     = bergsjaeger 
	   model = 8
       strength = 60 
      } 
    } 
   landunit = 
   {  location = 424 
     name     = "Corp Cavalerie" 
     id       = {  type = 20600 id = 42  } 
     Division = 
     {  id       = {  type = 20600 id = 43  } 
       name     = "Brigada 1 Cavalerie" 
       type     = cavalry 
	   model = 6
       strength = 60 
      } 
     Division = 
     {  id       = {  type = 20600 id = 44  } 
       name     = "Brigada 2 Cavalerie" 
       type     = cavalry 
       strength = 60 
	   model = 6
      } 
     Division = 
     {  id       = {  type = 20600 id = 45  } 
       name     = "Brigada 3 Cavalerie" 
       type     = cavalry 
       strength = 60 
	   model = 5
      } 
     Division = 
     {  id       = {  type = 20600 id = 46  } 
       name     = "Brigada 4 Cavalerie" 
       type     = cavalry 
       strength = 60 
	   model = 5
      } 
     Division = 
     {  id       = {  type = 20600 id = 47  } 
       name     = "Brigada 5 Cavalerie" 
       type     = cavalry 
       strength = 60 
	   model = 7
      } 
     Division = 
     {  id       = {  type = 20600 id = 48  } 
       name     = "Brigada 6 Cavalerie" 
       type     = cavalry 
       strength = 60 
	   model = 7
      } 
     Division = 
     {  id       = {  type = 20600 id = 49  } 
       name     = "Brigada 7 Cavalerie" 
       type     = cavalry 
       strength = 60 
	   model = 6
      } 
     Division = 
     {  id       = {  type = 20600 id = 50  } 
       name     = "Brigada 8 Cavalerie" 
       type     = cavalry 
       strength = 60 
	   model = 7
      } 
    } 
   landunit = 
   {  location = 424 
     name     = "Brigada 1 Graniceri" 
     id       = {  type = 20600 id = 51  } 
     Division = 
     {  id       = {  type = 20600 id = 52  } 
       name     = "Brigada 1 Graniceri" 
       type     = militia
	   model = 4
       strength = 100 
      } 
    } 
   landunit = 
   {  location = 424 
     name     = "Brigada 4 Graniceri" 
     id       = {  type = 20600 id = 53  } 
     Division = 
     {  id       = {  type = 20600 id = 54  } 
       name     = "Brigada 4 Graniceri" 
       type     = militia
	   model = 4
       strength = 100 
      } 
    } 
   landunit = 
   {  location = 424 
     name     = "Brigada 2 Graniceri" 
     id       = {  type = 20600 id = 55  } 
     Division = 
     {  id       = {  type = 20600 id = 56  } 
       name     = "Brigada 2 Graniceri" 
       type     = militia
	   model = 4
       strength = 100 
      } 
    } 
   landunit = 
   {  location = 424 
     name     = "Brigada 3 Graniceri" 
     id       = {  type = 20600 id = 57  } 
     Division = 
     {  id       = {  type = 20600 id = 58  } 
       name     = "Brigada 3 Graniceri" 
       type     = militia
	   model = 4
       strength = 100 
      } 
    } 
   navalunit = 
   {  location = 436 # Constanta 
     base     = 436 
     name     = "Flota Romania de Mare" 
     id       = {  type = 20600 id = 59  } 
     Division = 
     {  id    = {  type = 20600 id = 60  } 
       name  = "'NMS Regele Ferdinand' Flotila" 
       type  = destroyer 
       model = 2
      } 
     Division = 
     {  id    = {  type = 20600 id = 61  } 
       name  = "'NMS Delfinul' Flotila" 
       type  = submarine 
       model = 1
      } 
    } 
   airunit = 
   {  location = 424 # Bucuresti 
     base     = 424 
     name     = "Gruparea Aeriana de Lupta" 
     id       = {  type = 20600 id = 62  } 
     Division = 
     {  id       = {  type = 20600 id = 63  } 
       name     = "Grup 1 Avion de Vanatoare" 
       type     = interceptor 
       model    = 4
       strength = 40 
      } 
     Division = 
     {  id       = {  type = 20600 id = 64  } 
       name     = "Grup 1 Tactic Bombardier" 
       type     = tactical_bomber 
       model    = 3
       strength = 10 
      } 
     Division = 
     {  id       = {  type = 20600 id = 65  } 
       name     = "Grup 1 Hidroavioane" 
       type     = naval_bomber 
       model    = 1
       strength = 28 
      } 
    } 
  } 
 
