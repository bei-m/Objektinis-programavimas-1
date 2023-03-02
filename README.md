# **Pirmas laboratorinis**
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
