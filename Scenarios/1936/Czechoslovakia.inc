#####################
# Country main data #
#####################

country =
{ tag                    = CZE
   # Resource Reserves 
	energy                 = 2160
	metal                  = 1080
	rare_materials         = 540
	supplies               = 500
	oil                    = 500 
	money                  = 20 
	manpower               = 10 
  capital                = 469
  diplomacy =
  { relation = { tag = ENG value = 125 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -25 }
    relation = { tag = HUN value = -50 }
    relation = { tag = ITA value = 15 }
    relation = { tag = POL value = -1 }
    relation = { tag = ROM value = 20 }
    relation = { tag = SOV value = 100 }
    relation = { tag = YUG value = 50 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 2 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 2 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 1 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 3 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 1 }
  nationalprovinces      = { 470 469 468 474 475 478 477 476 1888 1887 2296 3228 3229 3232 7261
  }
  ownedprovinces         = { 471 472 466 467 470 469 468 474 475 478 477 490 499 476
							1888 1889 1887 53 2302 2296
							3228	3229	3230	3231	3232	3233
							3262
6518
7261
  }
  controlledprovinces    = { 471 472 466 467 470 469 468 474 475 478 477 490 499 476
							1888 1889 1887 53 2302 2296
							3228	3229	3230	3231	3232	3233
							3262
6518
7261
  }
  claimedprovinces = { 2628 472 471 3262 466 53 467 1889 490 2302 3231 3230 3233 499 6518 7177 }

  # Eastern Minor Tech '36
  # Group C 1936 techs
  # ######################
   techapps               = { 
#Early Infantry Division  
1010  1020 1030 1040 1050 1060 1070 1080 1090
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970 1980
#Great War Hospital System 
14000 14010 14020
#Engineers
1830 1840 1850 1860
#Tankette 
7600 7610 2620 2010 2630 2640 2646 2650 2030
#Basic Armoured Car  
2860 2870 2880 2020 2150
#Great War Heavy Field Artillery 
2290 2300 2310
#Early Static Anti-Air Artillery 
2800 2450 21180 21190 21200
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Interwar Bomber 
4600 4610 4620 4630 4120
#Multirole fighter
4300 4310 4320 4330
#ww1 strategic bomber
4800 4810 4820
#Medicine
5600 5610 5620 5630
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Manufactoring
5810 5820 5050 5830 5060
#Mechanized Agriculture 
5700 5710 5010
#Improved Construction Engineering 
5800 5080 5090 
#rocket
5560

# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Land Doctrines
6560
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010  
 }
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 1
     political_left    = 5 
     free_market       = 1
     freedom           = 7 
     professional_army = 5 
     defense_lobby     = 3 
     interventionism   = 4
  }
inventions = { 3000027 }

   headofstate            = {  type = 9 id = 120001  } 
   headofgovernment       = {  type = 9 id = 120002  } 
   foreignminister        = {  type = 9 id = 120003  } 
   armamentminister       = {  type = 9 id = 120004  } 
   ministerofsecurity     = {  type = 9 id = 120005  } 
   ministerofintelligence = {  type = 9 id = 120006  } 
   chiefofstaff           = {  type = 9 id = 120007  } 
   chiefofarmy            = {  type = 9 id = 120008  } 
   chiefofnavy            = {  type = 9 id = 120009  } 
   chiefofair             = {  type = 9 id = 120010  } 
  
  landunit = 
   {  id       = {  type = 23000 id = 1  } 
     location = 469 
     name     = "Gener�ln� Rezervy" 
     Division = 
     {  id       = {  type = 26000 id = 2  } 
       name     = "1. Horsk� Brigada" 
       type     = bergsjaeger
       strength  = 30 
       model    = 7 
      } 
     Division = 
     {  id       = {  type = 26000 id = 3  } 
       name     = "2. Horsk� Brigada" 
       type     = bergsjaeger
       strength  = 30 
       model    = 7 
      } 
     Division = 
     {  id       = {  type = 26000 id = 4  } 
       name     = "13. Divize" 
       type     = infantry 
       strength  = 5 
       model    = 6 
      } 
     Division = 
     {  id       = {  type = 26000 id = 5  } 
       name     = "15. Divize" 
       type     = infantry 
       strength  = 5 
       model    = 6 
      } 
     Division = 
     {  id       = {  type = 26000 id = 6  } 
       name     = "18. Divize" 
       type     = infantry 
       strength  = 5 
       model    = 6 
      } 
     Division = 
     {  id       = {  type = 26000 id = 7  } 
       name     = "21. Divize" 
       type     = infantry 
       strength  = 5 
       model    = 6 
      } 
     Division = 
     {  id       = {  type = 26000 id = 8  } 
       name     = "22. Divize" 
       type     = infantry 
       strength  = 5 
       model    = 6 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 9  } 
     location = 469 
     name     = "I. Arm�da" 
     Division = 
     {  id       = {  type = 26000 id = 10  } 
       name     = "1. Rychl� Brigada" 
       type     = cavalry 
       model    = 9 
       strength  = 40
       extra = light_armor_brigade
       brigade_model = 4 
      } 
     Division = 
     {  id       = {  type = 26000 id = 11  } 
       name     = "2. Divize" 
       type     = infantry 
       strength  = 80 
       model    = 7 
       extra    = artillery 
	   brigade_model = 5
      } 
     Division = 
     {  id       = {  type = 26000 id = 12  } 
       name     = "1. Divize" 
       type     = garrison
       strength  = 80 
       model    = 4 
      } 
     Division = 
     {  id    = {  type = 26000 id = 13  } 
       name  = "3. Divize" 
       type  = infantry 
       model = 7
	strength = 80
      } 
     Division = 
     {  id       = {  type = 26000 id = 14  } 
       name     = "4. Divize" 
       type     = infantry 
       strength  = 80 
       model    = 7 
      } 
     Division = 
     {  id       = {  type = 26000 id = 15  } 
       name     = "5. Divize" 
       type     = infantry 
       strength  = 80 
       model    = 7 
      } 
     Division = 
     {  id       = {  type = 26000 id = 16  } 
       name     = "16. Divize" 
       type     = infantry 
       strength  = 5 
       model    = 6 
      } 
     Division = 
     {  id       = {  type = 26000 id = 17  } 
       name     = "17. Divize" 
       type     = infantry 
       strength  = 5 
       model    = 6 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 22  } 
     location = 469 
     name     = "II. Arm�da" 
     Division = 
     {  id       = {  type = 26000 id = 23  } 
       name     = "7. Divize" 
       type     = infantry 
       strength  = 80 
       model    = 7 
      } 
     Division = 
     {  id       = {  type = 26000 id = 24  } 
       name     = "8. Divize" 
       type     = infantry 
       strength  = 80 
       model    = 7 
      } 
     Division = 
     {  id       = {  type = 26000 id = 25  } 
       name     = "6. Divize" 
       type     = infantry 
       strength  = 80 
       model    = 7 
       extra    = artillery 
	   brigade_model = 5
      } 
     Division = 
     {  id       = {  type = 26000 id = 26  } 
       name     = "2. Rychl� Brigada" 
       type     = cavalry 
       model    = 9 
       strength  = 40
       extra = light_armor_brigade
       brigade_model = 4 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 29  } 
     location = 469 
     name     = "III. Arm�da" 
     Division = 
     {  id       = {  type = 26000 id = 30  } 
       name     = "10. Divize" 
       type     = infantry 
       strength  = 80 
       model    = 7 
      } 
     Division = 
     {  id       = {  type = 26000 id = 31  } 
       name     = "9. Divize" 
       type     = infantry 
       strength  = 80 
       model    = 7 
       extra    = artillery 
	   brigade_model = 5
      } 
     Division = 
     {  id       = {  type = 26000 id = 32  } 
       name     = "3. Rychl� Brigada" 
       type     = cavalry 
       model    = 9 
       strength  = 40
       extra = light_armor_brigade
       brigade_model = 4 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 37  } 
     location = 469 
     name     = "IV. Arm�da" 
     Division = 
     {  id       = {  type = 26000 id = 38  } 
       name     = "4. Rychl� Brigada" 
       type     = cavalry 
       model    = 9 
       strength  = 40
       extra = light_armor_brigade
       brigade_model = 4 
      } 
     Division = 
     {  id       = {  type = 26000 id = 39  } 
       name     = "12. Divize" 
       type     = infantry 
       strength  = 80 
       model    = 7 
      } 
     Division = 
     {  id       = {  type = 26000 id = 1040  } 
       name     = "11. Divize" 
       type     = infantry 
       strength  = 80 
       model    = 7 
       extra    = artillery 
	   brigade_model = 5
      } 
     Division = 
     {  id       = {  type = 26000 id = 41  } 
       name     = "19. Divize" 
       type     = infantry 
       strength  = 5 
       model    = 6 
      } 
     Division = 
     {  id       = {  type = 26000 id = 42  } 
       name     = "20. Divize" 
       type     = infantry 
       strength  = 5 
       model    = 6 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 45  } 
     location = 469 
     name     = "32. Hranicn� Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 18  } 
       name     = "32. Hranicn� Oblast" 
       type     = garrison
       strength  = 5 
       model    = 3 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 46  } 
     location = 469
     name     = "33. Hranicn� Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 19  } 
       name     = "33. Hranicn� Oblast" 
       type     = garrison
       strength  = 5 
       model    = 3 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 47  } 
     location = 469 
     name     = "34. Hranicn� Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 20  } 
       name     = "34. Hranicn� Oblast" 
       type     = garrison
       strength  = 5 
       model    = 3 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 48  } 
     location = 469
     name     = "35. Hranicn� Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 21  } 
       name     = "35. Hranicn� Oblast" 
       type     = garrison
       strength  = 5 
       model    = 3 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 49  } 
     location = 469
     name     = "36. Hranicn� Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 27  } 
       name     = "36. Hranicn� Oblast" 
       type     = garrison
       strength  = 5 
       model    = 3 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 50  } 
     location = 469 
     name     = "37. Hranicn� Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 28  } 
       name     = "37. Hranicn� Oblast" 
       type     = garrison
       strength  = 5 
       model    = 3 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 51  } 
     location = 469 
     name     = "39. Hranicn� Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 33  } 
       name     = "39. Hranicn� Oblast" 
       type     = garrison
       strength  = 5 
       model    = 3 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 52  } 
     location = 469 
     name     = "40. Hranicn� Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 34  } 
       name     = "40. Hranicn� Oblast" 
       type     = garrison
       strength  = 5 
       model    = 3 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 53  } 
     location = 469 
     name     = "41. Hranicn� Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 35  } 
       name     = "41. Hranicn� Oblast" 
       type     = garrison
       strength  = 5 
       model    = 3 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 54  } 
     location = 469 
     name     = "42. Hranicn� Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 36  } 
       name     = "42. Hranicn� Oblast" 
       type     = garrison
       strength  = 5 
       model    = 3 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 55  } 
     location = 469 
     name     = "31. Hranicn� Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 43  } 
       name     = "31. Hranicn� Oblast" 
       type     = garrison
       strength  = 5 
       model    = 3 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 56  } 
     location = 469 
     name     = "38. Hranicn� Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 44  } 
       name     = "38. Hranicn� Oblast" 
       type     = garrison
       strength  = 5 
       model    = 3 
      } 
    } 
  } 
 