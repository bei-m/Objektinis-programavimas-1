# **Pirmas laboratorinis**
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
   * Visos programos veikimo laikas.
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
   * Visos programos veikimo laikas.
4. Pasirinkus neskaityti duomenų iš failo (paspaudus 'n'), vartotojui duodamas pasirinkimas duomenis įrašyti arba generuoti (žr. c).

**c)--------------** <br>
1. Vartotojui duodamas pasirinkimas įvesti pažymių maksimalų kiekį. Tai reiškia, kad kiekvienas studentas turės įvestą maksimalų pažymių kiekį arba maksimalaus kiekio nebus (paspaudus 'n'). Įvestas maksimalus kiekis arba pasirinkimas, kad jo nebūtų (paspaudus 'n'), negali būti keičiamas programos veikimo metu.
2. Vartotojui duodamas pasirinkimas studento duomenis įrašyti (paspaudus 'i') arba generuoti (paspaudus 'g').
   * Pasirinkus įvedinėti duomenis ('i'), vartotojas turės įvesti visus duomenis: studento vardą, pavardę, namų darbų ir egzamino pažymius. Programos pradžioje nustačius maksimalų kiekį, programa leis įvesti pažymius tol, kol bus pasiektas maksimalus pažymių kiekis arba kol vartotojas paspaus 'n'. Jei įvestas mažesnis nei maksimalus pažymių kiekis, likęs kiekis bus užpildytas nuliais.
   * Pasirinkus generuoti duomenis ('g'), visi studento duomenys (vardas, pavardė, namų darbų ir egzamino pažymiai) bus sugeneruoti. Jei anksčiau programoje buvo nustatytas maksimalus pažymių kiekis, bus sugeneruotas maksimalus pažymių kiekis, jei ne – programa paprašys vartotojo įvesti norimą namų darbų pažymių kiekį (sugeneruoti). 
3. Po kiekvieno įvesto studento vartotojas yra informuojamas, kad duomenys buvo įrašyti ir duodamas pasirinkimas įvesti dar vieną studentą (paspaudus 'y') arba baigti studentų duomenų įvedimą (paspaudus 'n').
4. Įvedus visus studentus, visi studentų duomenys (vardas, pavardė ir galutiniai pažymiai) bus išspausdinti konsolėje abėcėlės tvarka.

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
