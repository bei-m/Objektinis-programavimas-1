# **Pirmas laboratorinis**
## _**V0.1 versija**_
Programa leidžia įvesti studentų vardus ir pavardes, namų darbų ir egzamino pažymius ir skaičiuoja kiekvieno studento galutinį pažymį. Galutinio pažymio skaičiavimo formulė:
_galutinis=0.4*vidurkis/mediana+0.6*egzaminas_ <br>
Programoje naudojamos bibliotekos yra aprašytos 'mylib.h' faile. <br>
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
