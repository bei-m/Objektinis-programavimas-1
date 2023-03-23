# **Pirmas laboratorinis**
## _**V0.5 versija**_
Programa leidžia įvesti arba skaityti iš failo studentų duomenis (vardus ir pavardes, namų darbų ir egzamino pažymius) arba generuoti šių duomenų failus, skaičiuoja kiekvieno studento galutinius pažymius ir leidžia analizuoti darbo su failais trukmę. Galutinio pažymio skaičiavimo formulė: <br>
![image](https://user-images.githubusercontent.com/116886672/220993297-ed501583-e082-48a1-b7d2-1f647e67070d.png)

Programos veikimas: 
 * Duomenų failo generavimas: žr. a)
 * Duomenų skaitymas iš turimo .txt failo: žr. b)
 * Duomenų įrašymas arba generavimas: žr. c)
 
**Įvestis priimama tik su 'enter' paspaudimu.**

 **a)--------------** <br>
1. Programos pradžioje vartotojui duodamas pasirinkimas sugeneruoti duomenų (studentų vardų, pavardžių, namų darbų ir egzamino pažymių) failą     (paspaudus 's'). Pasirinkus generuoti failą ('s'), programa paprašys įvesti norimą studentų (įrašų) kiekį. Įvedus studentų kiekį, vartotojui duodamas pasirinkimas įrašyti norimą studentų pažymių kiekį arba paspausti 'n' ir programa pažymių kiekį sugeneruos atsitiktinai (1–15). Po to programa vartotojo prašys įvesti failo pavadinimą, kuriuo vartotojas nori pavadinti sugeneruotą failą.
2. Sugeneravus failą, vartotojui duodamas pasirinkimas duomenis (studentų vardus, pavardes ir galutinius pažymius) spausdinti failuose (paspaudus 'f') arba baigti programos darbą (paspaudus 'b').
2.1. Pasirinkus duomenų išvedimą į failus ('f'), vartotojui duodamas pasirinkimas kokį konteinerį naudoti: vektorių (paspaudus 'v'), sąrašą (paspaudus 'l'), deką (paspaudus 'd') arba visus tris (paspaudus '3') Nepaisant to, koks konteineris naudojamas, studentai yra išskirstomi į dvi grupes pagal galutinius pažymius (bent vienas galutinis >=5 ir <5) ir įrašomi į du failus ('vargsai(x).txt' ir 'protingieji(x).txt')*, o juose – surašyti abėcėlės tvarka. Taip pat, gale programos į konsolę yra išspausdinama:
   * Failo generavimo laikas (neįeina į visos programos veikimo laiką);
   * Failo nuskaitymo ir galutinių pažymių skaičiavimo laikas;
   * Failo įrašų rūšiavimo abėcėlės tvarka laikas;
   * Failo įrašų dalijimo į dvi grupes laikas;
   * Grupės 'vargsai' įrašymo į failą laikas;
   * Grupės 'protingieji' įrašymo į failą laikas;
   * Visos programos veikimo (testo) laikas.
Jei vartotojas pasirinko naudoti tris konteinerius, tada nurodyti duomenys išspausdinami tris kartus, o prieš tai programa nurodo, kurio konteinerio testavimo duomenys yra matomi.
2.2. Pasirinkus baigti programos darbą ('b'), programa baigs darbą.
3. Nenorint generuoti failo (paspaudus 'n'), vartotojui duodamas pasirinkimas skaityti duomenis iš failo (paspaudus 's') (žr. b). <br>

*čia x – raidė nurodanti koks konteineris buvo naudotas (v – vektorius (vector), l – sąrašas (list), d – deque (dekas)).

 **b)--------------** <br>
 1.	Nenorint generuoti failo (paspaudus 'n'), vartotojui duodamas pasirinkimas skaityti duomenis iš failo (paspaudus 's'). 
 2. Pasirinkus skaityti iš failo ('s'), programa paprašys vartotojo įvesti pavadinimą (.txt) failo, iš kurio vartotojas nori skaityti duomenis. Jeigu pasirinktas failas nebus rastas arba jis bus tuščias, programa informuos vartotoją ir baigs darbą.
 3.	Jei failas randamas ir nėra tuščias, vartotojui duodamas pasirinkimas duomenis spausdinti failuose (paspaudus 'f') arba konsolėje (paspaudus 'k'). 
  * Pasirinkus spausdinti konsolėje ('k') visi studentų duomenys (vardas, pavardė ir galutiniai pažymiai) bus išspausdinti konsolėje abėcėlės tvarka.
  * Pasirinkus duomenų išvedimą į failus ('f'), vartotojui duodamas pasirinkimas kokį konteinerį naudoti: vectorių (paspaudus 'v'), sąrašą (paspaudus 'l')  ar deką (paspaudus 'd'). Nepaisant to, koks konteineris naudojamas, studentai yra išskirstomi į dvi grupes pagal galutinius pažymius (bent vienas galutinis >=5 ir <5) ir įrašomi į du failus ('vargsai(x).txt' ir 'protingieji(x).txt')*, o juose – surašyti abėcėlės tvarka. Taip pat, gale programos į konsolę yra išspausdinama:
    * Failo nuskaitymo ir galutinių pažymių skaičiavimo laikas;
    * Failo įrašų rūšiavimo abėcėlės tvarka laikas;
    * Failo įrašų dalijimo į dvi grupes laikas;
    * Grupės 'vargsai' įrašymo į failą laikas;
    * Grupės 'protingieji' įrašymo į failą laikas;
    * Visos programos veikimo (testo) laikas.
4. Pasirinkus neskaityti duomenų iš failo (paspaudus 'n'), vartotojui duodamas pasirinkimas duomenis įrašyti arba generuoti (žr. c). <br>
*čia x – raidė nurodanti koks konteineris buvo naudotas (v – vektorius (vector), l – sąrašas (list), d – deque (dekas)).

**c)--------------** <br>
1. Vartotojui duodamas pasirinkimas įvesti pažymių maksimalų kiekį. Tai reiškia, kad kiekvienas studentas turės įvestą maksimalų pažymių kiekį arba maksimalaus kiekio nebus (paspaudus 'n'). Įvestas maksimalus kiekis arba pasirinkimas, kad jo nebūtų (paspaudus 'n'), negali būti keičiamas programos veikimo metu.
2. Vartotojui duodamas pasirinkimas studento duomenis įrašyti (paspaudus 'i') arba generuoti (paspaudus 'g').
   * Pasirinkus įvedinėti duomenis ('i'), vartotojas turės įvesti visus duomenis: studento vardą, pavardę, namų darbų ir egzamino pažymius. Programos pradžioje nustačius maksimalų kiekį, programa leis įvesti pažymius tol, kol bus pasiektas maksimalus pažymių kiekis arba kol vartotojas paspaus 'n'. Jei įvestas mažesnis nei maksimalus pažymių kiekis, likęs kiekis bus užpildytas nuliais.
   * Pasirinkus generuoti duomenis ('g'), visi studento duomenys (vardas, pavardė, namų darbų ir egzamino pažymiai) bus sugeneruoti. Jei anksčiau programoje buvo nustatytas maksimalus pažymių kiekis, bus sugeneruotas maksimalus pažymių kiekis, jei ne – programa paprašys vartotojo įvesti norimą namų darbų pažymių kiekį (sugeneruoti). 
3. Po kiekvieno įvesto studento vartotojas yra informuojamas, kad duomenys buvo įrašyti ir duodamas pasirinkimas įvesti dar vieną studentą (paspaudus 'y') arba baigti studentų duomenų įvedimą (paspaudus 'n').
4. Įvedus visus studentus, visi studentų duomenys (vardas, pavardė ir galutiniai pažymiai) bus išspausdinti konsolėje abėcėlės tvarka.

Testavimas: <br>
**1000 įrašų:**
|                                                             | vektorius<br>(vector) | sąrašas<br>(list) | dekas<br>(deque) |
|-------------------------------------------------------------|-----------------------|-------------------|------------------|
| Failo nuskaitymo ir galutinių pažymių skaičiavimo laikas    |      0.00232277 s     |    0.0024063 s    |   0.00153724 s   |
| Failo įrašų rūšiavimo abėcėlės tvarka laikas                |     0.000426629 s     |   0.000315543 s   |   0.000316676 s  |
| Failo įrašų dalijimo į dvi grupes laikas                    |     0.000149498 s     |   0.000159611 s   |   9.4844e-05 s   |

**10 000 įrašų:**
|                                                             | vektorius<br>(vector) | sąrašas<br>(list) | dekas<br>(deque) |
|-------------------------------------------------------------|-----------------------|-------------------|------------------|
| Failo nuskaitymo ir galutinių pažymių skaičiavimo laikas    |      0.0196152 s      |    0.0210919 s    |    0.018093 s    |
| Failo įrašų rūšiavimo abėcėlės tvarka laikas                |      0.00392875 s     |    0.00370931 s   |   0.00512393 s   |
| Failo įrašų dalijimo į dvi grupes laikas                    |      0.00117736 s     |    0.00391445 s   |   0.00144923 s   |

**100 000 įrašų:**
|                                                             | vektorius<br>(vector) | sąrašas<br>(list) | dekas<br>(deque) |
|-------------------------------------------------------------|-----------------------|-------------------|------------------|
| Failo nuskaitymo ir galutinių pažymių skaičiavimo laikas    |       0.164996 s      |     0.176613 s    |    0.156208 s    |
| Failo įrašų rūšiavimo abėcėlės tvarka laikas                |      0.0392634 s      |     0.063616 s    |    0.041485 s    |
| Failo įrašų dalijimo į dvi grupes laikas                    |      0.0092005 s      |    0.0247103 s    |   0.00609461 s   |

**1 000 000 įrašų:**
|                                                             | vektorius<br>(vector) | sąrašas<br>(list) | dekas<br>(deque) |
|-------------------------------------------------------------|-----------------------|-------------------|------------------|
| Failo nuskaitymo ir galutinių pažymių skaičiavimo laikas    |       1.69287 s       |     1.77535 s     |     1.6581 s     |
| Failo įrašų rūšiavimo abėcėlės tvarka laikas                |       0.438304 s      |     0.920312 s    |    0.439293 s    |
| Failo įrašų dalijimo į dvi grupes laikas                    |       0.320196 s      |     0.527982 s    |    0.0726751 s   |

**10 000 000 įrašų:**
|                                                             | vektorius<br>(vector) | sąrašas<br>(list) | dekas<br>(deque) |
|-------------------------------------------------------------|-----------------------|-------------------|------------------|
| Failo nuskaitymo ir galutinių pažymių skaičiavimo laikas    |       17.4677 s       |     15.6275 s     |     16.9864 s    |
| Failo įrašų rūšiavimo abėcėlės tvarka laikas                |        3.9311 s       |     14.7486 s     |     4.48349 s    |
| Failo įrašų dalijimo į dvi grupes laikas                    |        2.728 s        |     3.69031 s     |    0.714614 s    |

## **Testavimo sistemos parametrai**

### **CPU**
Base speed: 2.3 GHz <br>
Cores: 2 <br>
Threads: 4 <br>

### **RAM**
Available to system: 4 GB <br>
Speed: 2133 MHz <br>

### **SSD**
Capacity: 128 GB

## _**V0.4 versija**_
Programa leidžia įvesti arba skaityti iš failo studentų duomenis (vardus ir pavardes, namų darbų ir egzamino pažymius) arba generuoti šių duomenų failus ir skaičiuoja kiekvieno studento galutinius pažymius. Galutinio pažymio skaičiavimo formulė:
![image](https://user-images.githubusercontent.com/116886672/220993297-ed501583-e082-48a1-b7d2-1f647e67070d.png)

Programoje naudojamos bibliotekos yra aprašytos 'mylib.h' faile, naudojamos struktūros, globalūs masyvai ir funkcijų prototipai – 'myfunc.h' faile, o funkcijos – 'myfunc.cpp' faile.

Programos veikimas: 
 * Duomenų failo generavimas: žr. a)
 * Duomenų skaitymas iš turimo .txt failo: žr. b)
 * Duomenų įrašymas arba generavimas: žr. c)
 
**Įvestis priimama tik su 'enter' paspaudimu.**

 **a)--------------** <br>
1. Programos pradžioje vartotojui duodamas pasirinkimas sugeneruoti duomenų (studentų vardų, pavardžių, namų darbų ir egzamino pažymių) failą     (paspaudus 's'). Pasirinkus generuoti failą ('s'), programa paprašys įvesti norimą studentų (įrašų) kiekį. Įvedus studentų kiekį, vartotojui duodamas pasirinkimas įrašyti norimą studentų pažymių kiekį arba paspausti 'n' ir programa pažymių kiekį sugeneruos atsitiktinai (1–15). Po to programa vartotojo prašys įvesti failo pavadinimą, kuriuo vartotojas nori pavadinti sugeneruotą failą.
2. Sugeneravus failą vartotojui duodamas pasirinkimas duomenis (studentų vardus, pavardes ir galutinius pažymius) spausdinti failuose (paspaudus 'f') arba konsolėje (paspaudus 'k'). 
   * Pasirinkus spausdinti failuose ('f'), studentai bus išskirstyti į dvi grupes pagal galutinius pažymius (bent vienas galutinis >=5 ir <5) ir įrašyti į du failus ('vargsai.txt' ir 'protingieji.txt'), o juose bus surašyti abėcėlės tvarka.
   * Pasirinkus spausdinti konsolėje ('k'), visi studentų duomenys (vardas, pavardė ir galutiniai pažymiai) bus išspausdinti konsolėje abėcėlės tvarka.
3. Pasirinkus duomenų išvedimą į failus, gale programos į konsolę yra išspausdinama:
   * Failo nuskaitymo ir galutinių pažymių skaičiavimo laikas;
   * Failo įrašų rūšiavimo abėcėlės tvarka laikas;
   * Failo įrašų dalijimo į dvi grupes laikas;
   * Grupės 'vargsai' įrašymo į failą laikas;
   * Grupės 'protingieji' įrašymo į failą laikas;
   * Visos programos veikimo (testo) laikas;
   * Failo generavimo laikas (neįeina į visos programos veikimo laiką).
4. Nenorint generuoti failo (paspaudus 'n'), vartotojui duodamas pasirinkimas skaityti duomenis iš failo (paspaudus 's') (žr. b).

 **b)--------------** <br>
 1. Nenorint generuoti failo (paspaudus 'n'), vartotojui duodamas pasirinkimas skaityti duomenis iš failo (paspaudus 's'). Pasirinkus skaityti iš failo ('s'), programa paprašys vartotojo įvesti pavadinimą (.txt) failo, iš kurio vartotojas nori skaityti duomenis. Jeigu pasirinktas failas nebus rastas arba jis bus tuščias, programa informuos vartotoją ir baigs darbą.
2. Jei failas randamas ir nėra tuščias, vartotojui duodamas pasirinkimas duomenis spausdinti failuose (paspaudus 'f') arba konsolėje (paspaudus 'k'). 
   * Pasirinkus spausdinti failuose ('f') studentai bus išskirstyti į dvi grupes pagal galutinius pažymius (bent vienas galutinis >=5 ir <5) ir įrašyti į du failus ('vargsai.txt' ir 'protingieji.txt'), o juose bus surašyti abėcėlės tvarka.
   * Pasirinkus spausdinti konsolėje ('k') visi studentų duomenys (vardas, pavardė ir galutiniai pažymiai) bus išspausdinti konsolėje abėcėlės tvarka.
3. Pasirinkus duomenų išvedimą į failus, gale programos į konsolę yra išspausdinama:
   * Failo nuskaitymo ir galutinių pažymių skaičiavimo laikas;
   * Failo įrašų rūšiavimo abėcėlės tvarka laikas;
   * Failo įrašų dalijimo į dvi grupes laikas;
   * Grupės 'vargsai' įrašymo į failą laikas;
   * Grupės 'protingieji' įrašymo į failą laikas;
   * Visos programos veikimo (testo) laikas.
4. Pasirinkus neskaityti duomenų iš failo (paspaudus 'n'), vartotojui duodamas pasirinkimas duomenis įrašyti arba generuoti (žr. c).

**c)--------------** <br>
1. Vartotojui duodamas pasirinkimas įvesti pažymių maksimalų kiekį. Tai reiškia, kad kiekvienas studentas turės įvestą maksimalų pažymių kiekį arba maksimalaus kiekio nebus (paspaudus 'n'). Įvestas maksimalus kiekis arba pasirinkimas, kad jo nebūtų (paspaudus 'n'), negali būti keičiamas programos veikimo metu.
2. Vartotojui duodamas pasirinkimas studento duomenis įrašyti (paspaudus 'i') arba generuoti (paspaudus 'g').
   * Pasirinkus įvedinėti duomenis ('i'), vartotojas turės įvesti visus duomenis: studento vardą, pavardę, namų darbų ir egzamino pažymius. Programos pradžioje nustačius maksimalų kiekį, programa leis įvesti pažymius tol, kol bus pasiektas maksimalus pažymių kiekis arba kol vartotojas paspaus 'n'. Jei įvestas mažesnis nei maksimalus pažymių kiekis, likęs kiekis bus užpildytas nuliais.
   * Pasirinkus generuoti duomenis ('g'), visi studento duomenys (vardas, pavardė, namų darbų ir egzamino pažymiai) bus sugeneruoti. Jei anksčiau programoje buvo nustatytas maksimalus pažymių kiekis, bus sugeneruotas maksimalus pažymių kiekis, jei ne – programa paprašys vartotojo įvesti norimą namų darbų pažymių kiekį (sugeneruoti). 
3. Po kiekvieno įvesto studento vartotojas yra informuojamas, kad duomenys buvo įrašyti ir duodamas pasirinkimas įvesti dar vieną studentą (paspaudus 'y') arba baigti studentų duomenų įvedimą (paspaudus 'n').
4. Įvedus visus studentus, visi studentų duomenys (vardas, pavardė ir galutiniai pažymiai) bus išspausdinti konsolėje abėcėlės tvarka.

Testavimas: <br>
**1000 įrašų**
|                                                              | Generuojant failą | Negeneruojant failo |
|--------------------------------------------------------------|-------------------|---------------------|
| Failo generavimas                                            |    0.00929011 s   |          -          |
| Failo nuskaitymo ir galutinių pažymių <br>skaičiavimo laikas |    0.00284422 s   |     0.00465853 s    |
| Failo įrašų rūšiavimo abėcėlės tvarka laikas                 |   0.000417265 s   |    0.000357669 s    |
| Failo įrašų dalijimo į dvi grupes laikas                     |   0.000131624 s   |    0.000135691 s    |
| Grupės 'vargsai' įrašymo į failą laikas                      |    0.00534262 s   |     0.00308877 s    |
| Grupės 'protingieji' įrašymo į failą laikas                  |    0.00609496 s   |     0.00409048 s    |
| Visos programos veikimo laikas                               |    0.0149124 s    |     0.0124375 s     |

**10 000 įrašų**
|                                                              | Generuojant failą | Negeneruojant failo |
|--------------------------------------------------------------|-------------------|---------------------|
| Failo generavimas                                            |     0.0759215s    |          -          |
| Failo nuskaitymo ir galutinių pažymių <br>skaičiavimo laikas |    0.0190512 s    |     0.0350213 s     |
| Failo įrašų rūšiavimo abėcėlės tvarka laikas                 |    0.00523044 s   |     0.00370588 s    |
| Failo įrašų dalijimo į dvi grupes laikas                     |    0.00367371 s   |     0.00098259 s    |
| Grupės 'vargsai' įrašymo į failą laikas                      |    0.0239141 s    |     0.0276034 s     |
| Grupės 'protingieji' įrašymo į failą laikas                  |    0.0289014 s    |      0.030084 s     |
| Visos programos veikimo laikas                               |     0.080909 s    |      0.097546 s     |

**100 000 įrašų**
|                                                              | Generuojant failą | Negeneruojant failo |
|--------------------------------------------------------------|-------------------|---------------------|
| Failo generavimas                                            |     0.613484 s    |          -          |
| Failo nuskaitymo ir galutinių pažymių <br>skaičiavimo laikas |      0.2258 s     |      0.186499 s     |
| Failo įrašų rūšiavimo abėcėlės tvarka laikas                 |    0.0459998 s    |     0.0503603 s     |
| Failo įrašų dalijimo į dvi grupes laikas                     |    0.0184783 s    |     0.00935974 s    |
| Grupės 'vargsai' įrašymo į failą laikas                      |     0.252823 s    |      0.27022 s      |
| Grupės 'protingieji' įrašymo į failą laikas                  |     0.277466 s    |      0.271687 s     |
| Visos programos veikimo laikas                               |      0.821994     |      0.789486 s     |

**1 000 000 įrašų**
|                                                              | Generuojant failą | Negeneruojant failo |
|--------------------------------------------------------------|-------------------|---------------------|
| Failo generavimas                                            |     5.53228 s     |          -          |
| Failo nuskaitymo ir galutinių pažymių <br>skaičiavimo laikas |     1.92303 s     |       1.8055 s      |
| Failo įrašų rūšiavimo abėcėlės tvarka laikas                 |     0.470928 s    |      0.456711 s     |
| Failo įrašų dalijimo į dvi grupes laikas                     |     0.259023 s    |      0.205993 s     |
| Grupės 'vargsai' įrašymo į failą laikas                      |     2.55071 s     |      2.67187 s      |
| Grupės 'protingieji' įrašymo į failą laikas                  |     2.97267 s     |      2.96715 s      |
| Visos programos veikimo laikas                               |     8.20091 s     |      8.12145 s      |

**10 000 000 įrašų**
|                                                              | Generuojant failą | Negeneruojant failo |
|--------------------------------------------------------------|-------------------|---------------------|
| Failo generavimas                                            |     60.5875 s     |          -          |
| Failo nuskaitymo ir galutinių pažymių <br>skaičiavimo laikas |     19.4863 s     |       18.79 s       |
| Failo įrašų rūšiavimo abėcėlės tvarka laikas                 |      5.241 s      |      5.01396 s      |
| Failo įrašų dalijimo į dvi grupes laikas                     |     3.49691 s     |      4.24427 s      |
| Grupės 'vargsai' įrašymo į failą laikas                      |     24.4044 s     |      24.3427 s      |
| Grupės 'protingieji' įrašymo į failą laikas                  |     28.6616 s     |      28.8861 s      |
| Visos programos veikimo laikas                               |     81.5704 s     |      81.9637 s      |


## _**V0.3 versija**_
Programa leidžia įvesti arba skaityti iš failo studentų vardus ir pavardes, namų darbų ir egzamino pažymius ir skaičiuoja kiekvieno studento galutinį pažymį. Galutinio pažymio skaičiavimo formulė:
![image](https://user-images.githubusercontent.com/116886672/220993297-ed501583-e082-48a1-b7d2-1f647e67070d.png)

Programoje naudojamos bibliotekos yra aprašytos 'mylib.h' faile, naudojamos struktūros, globalūs masyvai ir funkcijų prototipai – 'myfunc.h' faile, o funkcijos – 'myfunc.cpp' faile.

Programos veikimas:
1. Įvestis priimama tik su 'enter' paspaudimu.
2. Programos pradžioje vartotojui duodamas pasirinkimas skaityti duomenis iš failo (paspaudus 's').
   * Pasirinkus skaityti iš failo ('s'), programa paprašys vartotojo įvesti pavadinimą (.txt) failo, iš kurio vartotojas nori skaityti duomenis. Jeigu pasirinktas failas nebus rastas arba jis bus tuščias, programa informuos vartotoją ir baigs darbą.
   * Pasirinkus neskaityti duomenų iš failo (paspaudus 'n'), vėliau bus duotas pasirinkimas juos įrašyti arba generuoti (žr. 4).
3. Vartotojui duodamas pasirinkimas įvesti pažymių maksimalų kiekį. Tai reiškia, kad kiekvienas studentas turės įvestą maksimalų pažymių kiekį arba maksimalaus kiekio nebus (paspaudus 'n'). Įvestas maksimalus kiekis arba pasirinkimas, kad jo nebūtų (paspaudus 'n'), negali būti keičiamas programos veikimo metu.
4. Vartotojui duodamas pasirinkimas studento duomenis įrašyti (paspaudus 'i') arba generuoti (paspaudus 'g').
   * Pasirinkus įvedinėti duomenis ('i'), vartotojas turės įvesti visus duomenis: studento vardą, pavardę, namų darbų ir egzamino pažymius. Programos pradžioje nustačius maksimalų kiekį, programa leis įvesti pažymius tol, kol bus pasiektas maksimalus pažymių kiekis arba kol vartotojas paspaus 'n'. Jei įvestas mažesnis nei maksimalus pažymių kiekis, likęs kiekis bus užpildytas nuliais.
   * Pasirinkus generuoti duomenis ('g'), visi studento duomenys (vardas, pavardė, namų darbų ir egzamino pažymiai) bus sugeneruoti. Jei anksčiau programoje buvo nustatytas maksimalus pažymių kiekis, bus sugeneruotas maksimalus pažymių kiekis, jei ne – programa paprašys vartotojo įvesti norimą namų darbų pažymių kiekį (sugeneruoti).
5. Po kiekvieno įvesto studento vartotojas yra informuojamas, kad duomenys buvo įrašyti ir duodamas pasirinkimas įvesti dar vieną studentą (paspaudus 'y') arba baigti studentų duomenų įvedimą (paspaudus 'n').
6. Įvedus visus studentus, programa išspausdins visų studentų pavardę, vardą, galutinį pažymį pagal vidurkį ir galutinį pažymį pagal medianą. Sąrašas rodomas abėcėlės tvarka.

## _**V0.2 versija**_
Programa leidžia įvesti arba skaityti iš failo studentų vardus ir pavardes, namų darbų ir egzamino pažymius ir skaičiuoja kiekvieno studento galutinį pažymį. Galutinio pažymio skaičiavimo formulė:
![image](https://user-images.githubusercontent.com/116886672/220993297-ed501583-e082-48a1-b7d2-1f647e67070d.png)

Programoje naudojamos bibliotekos yra aprašytos 'mylib.h' faile.

Programos veikimas:
1. Įvestis priimama tik su 'enter' paspaudimu.
2. Programos pradžioje vartotojui duodamas pasirinkimas skaityti duomenis iš failo (paspaudus 's').
   * Pasirinkus skaityti iš failo ('s'), programa paprašys vartotojo įvesti pavadinimą (.txt) failo, iš kurio vartotojas nori skaityti duomenis. Jeigu pasirinktas failas nebus rastas arba jis bus tuščias, programa informuos vartotoją ir baigs darbą.
   * Pasirinkus neskaityti duomenų iš failo (paspaudus 'n'), vėliau bus duotas pasirinkimas juos įrašyti arba generuoti (žr. 4).
3. Vartotojui duodamas pasirinkimas įvesti pažymių maksimalų kiekį. Tai reiškia, kad kiekvienas studentas turės įvestą maksimalų pažymių kiekį arba maksimalaus kiekio nebus (paspaudus 'n'). Įvestas maksimalus kiekis arba pasirinkimas, kad jo nebūtų (paspaudus 'n'), negali būti keičiamas programos veikimo metu.
4. Vartotojui duodamas pasirinkimas studento duomenis įrašyti (paspaudus 'i') arba generuoti (paspaudus 'g').
   * Pasirinkus įvedinėti duomenis ('i'), vartotojas turės įvesti visus duomenis: studento vardą, pavardę, namų darbų ir egzamino pažymius. Programos pradžioje nustačius maksimalų kiekį, programa leis įvesti pažymius tol, kol bus pasiektas maksimalus pažymių kiekis arba kol vartotojas paspaus 'n'. Jei įvestas mažesnis nei maksimalus pažymių kiekis, likęs kiekis bus užpildytas nuliais.
   * Pasirinkus generuoti duomenis ('g'), visi studento duomenys (vardas, pavardė, namų darbų ir egzamino pažymiai) bus sugeneruoti. Jei anksčiau programoje buvo nustatytas maksimalus pažymių kiekis, bus sugeneruotas maksimalus pažymių kiekis, jei ne – programa paprašys vartotojo įvesti norimą namų darbų pažymių kiekį (sugeneruoti).
5. Po kiekvieno įvesto studento vartotojas yra informuojamas, kad duomenys buvo įrašyti ir duodamas pasirinkimas įvesti dar vieną studentą (paspaudus 'y') arba baigti studentų duomenų įvedimą (paspaudus 'n').
6. Įvedus visus studentus, programa išspausdins visų studentų pavardę, vardą, galutinį pažymį pagal vidurkį ir galutinį pažymį pagal medianą. Sąrašas rodomas abėcėlės tvarka.

## _**V0.1 versija**_
Programa leidžia įvesti studentų vardus ir pavardes, namų darbų ir egzamino pažymius ir skaičiuoja kiekvieno studento galutinį pažymį. Galutinio pažymio skaičiavimo formulė:
![image](https://user-images.githubusercontent.com/116886672/220993297-ed501583-e082-48a1-b7d2-1f647e67070d.png)

Programoje naudojamos bibliotekos yra aprašytos 'mylib.h' faile. <br> <br>
"v.01.array.cpp" faile programa įgyvendinta saugant namų darbų pažymius į C masyvą, o "v.01.vector.cpp" - į std::vector tipo konteinerį. <br> <br>
Programos veikimas:
1. Įvestis priimama tik su 'enter' paspaudimu.
2. Programos pradžioje vartotojui duodamas pasirinkimas įvesti pažymių maksimalų kiekį. Tai reiškia, kad kiekvienas studentas turės įvestą maksimalų pažymių kiekį, arba maksimalaus kiekio nebus (paspaudus 'n'). Įvestas maksimalus kiekis arba pasirinkimas, kad jo nebūtų (paspaudus 'n'), negali būti keičiamas programos veikimo metu.
3. Įvedus maksimalų kiekį arba pasirinkus, kad jo nebūtų ('n'), vartotojas galės įvesti studento vardą ir pavardę (studentų vardus ir pavardes gali sudaryt tik didžiosios ir mažosios abėcėlės raidės).
4. Vartotojui duodamas pasirinkimas namų darbų pažymius įvedinėti pačiam (paspaudus 'i') arba pasirinkti, kad programa pažymius generuotų atsitiktinai (paspaudus 'g').
   * Pasirinkus įvedinėti pažymius ('i') ir programos pradžioje nustačius maksimalų kiekį, programa leis įvesti pažymius tol, kol bus pasiektas maksimalus pažymių kiekis arba kol vartotojas paspaus 'n'. Jei įvestas mažesnis nei maksimalus pažymių kiekis, likęs kiekis bus užpildytas nuliais.
   * Pasirinkus generuoti pažymius ('g'), vartotojas įveda norimą pažymių kiekį (sugeneruoti). Jei programos pradžioje buvo nustatytas maksimalus pažymių kiekis, taip pat vartotojui suteikiamas pasirinkimas generuoti maksimalų pažymių kiekį (paspaudus 'm'). Jei norimų generuoti pažymių kiekis yra mažesnis už maksimalų (jeigu maksimalus kiekis buvo įvestas), pasirinktas kiekis bus sugeneruotas, o likęs kiekis bus užpildytas nuliais.
5. Vartotojui duodamas pasirinkimas įrašyti egzamino pažymį arba jį sugeneruoti atsitiktinai (paspaudus 'g').
6. Po kiekvieno įvesto studento vartotojas yra informuojamas, kad duomenys buvo įrašyti ir duodamas pasirinkimas įvesti dar vieną studentą (paspaudus 'y') arba baigti studentų duomenų įvedimą (paspaudus 'n').
7. Įvedus visus studentus, vartotojui duodamas pasirinkimas skaičiuoti galutinį balą pagal namų darbų pažymių vidurkį (paspaudus 'v') arbą medianą (paspaudus 'm').
