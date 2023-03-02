#ifndef MYLIB_H
#define MYLIB_H

#include <iostream> 
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector> 
#include <cmath>
#include <random>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::left;
using std::right;
using std::setw;
using std::setprecision;
using std::string;
using std::copy;
using std::swap;
using std::sort;
using std::vector;
using std::fixed;
using std::isalpha;
using std::streamsize;
using std::ifstream;


string m_vardai[100]=
{
    "Adrija", "Agne", "Agota", "Aiste", "Akvile", "Asta", "Atene", "Aurelija", "Ausrine", "Austeja", "Barbora", "Beatrice",
    "Brigita", "Daiva", "Dalia", "Deimante", "Dovile", "Edita", "Egle", "Elena", "Emilija", "Erika", "Evelina", "Fausta", "Gabija",
    "Gabriele", "Gerda", "Gertruda", "Giedre", "Gintare", "Goda", "Guoda", "Guste", "Ieva", "Ina", "Indre", "Inga", "Izabele",
    "Janina", "Jolanta", "Jore", "Jovita", "Julija", "Juste", "Justina", "Jurate", "Kamile", "Karolina", "Kornelija", "Kotryna",
    "Kristina", "Laima", "Larisa", "Laura", "Liepa", "Lina", "Livija", "Margarita", "Marija", "Meile", "Migle", "Milda", "Monika",
    "Morta", "Martyna", "Natalija", "Neringa", "Nijole", "Odeta", "Olivija", "Ona", "Patricija", "Paulina", "Regina", "Roberta",
    "Rugile", "Rusne", "Ruta", "Salomeja", "Sandra", "Saule", "Sigita", "Silvija", "Simona", "Sofija", "Teodora", "Ugne", "Ursule",
    "Urte", "Vaiva", "Vakare", "Valentina", "Valerija", "Veronika", "Viktorija", "Vilija", "Vilte", "Violeta", "Vitalija", "Zivile"
};

string v_vardai[100]=
{
    "Adomas", "Aidas", "Aistis", "Aivaras", "Aleksas", "Algirdas", "Andrius", "Antanas", "Aras", "Arijus", "Arnas", "Arturas",
    "Arunas", "Arvydas", "Astijus", "Audrius", "Augustas", "Augustinas", "Aurelijus", "Aurimas", "Bartas", "Benas", "Danielius",
    "Darius", "Donatas", "Domas", "Dominykas", "Dovydas", "Edgaras", "Edvinas", "Egidijus", "Eimantas", "Emilis", "Evldas",
    "Edvardas", "Faustas", "Gabrielius", "Gediminas", "Giedrius", "Gintaras", "Gintas", "Gustas", "Haroldas", "Henrikas", "Ignas",
    "Jokubas", "Jonas", "Julius", "Justas", "Justinas", "Kajus", "Karolis", "Kipras", "Kostas", "Kristupas", "Kasparas", "Kestutis",
    "Laurynas", "Leonas", "Linas", "Lukas", "Mantas", "Mantvydas", "Marius", "Martynas", "Matas", "Mykolas", "Margiris", "Mindaugas",
    "Nedas", "Nojus", "Norbertas", "Paulius", "Pijus", "Povilas", "Rapolas", "Rimas", "Rytis", "Robertas", "Rokas", "Saulius",
    "Simas", "Simonas", "Tadas", "Titas", "Tomas", "Ugnius", "Vaidas", "Vakaris", "Valentinas", "Vasaris", "Vejas", "Vidas",
    "Viktoras", "Vilius", "Vitoldas", "Vytautas", "Vytas", "Zilvinas", "Zygimantas" 
};

string pavardes[44]=
{
   "Kazlausk", "Petrausk", "Jankausk", "Zukausk", "Balciun", "Paulausk", "Vasiliausk", "Baranausk", "Urbon", 
    "Navick", "Ramanausk", "Savick", "Zilinsk", "Kavaliausk", "Sakalausk", "Ivanausk", "Kaminsk", "Mikalausk", 
    "Bagdon", "Cernausk", "Rutkausk", "Malinausk", "Sadausk", "Kucinsk", "Vitkausk", "Dambrausk", 
    "Naujok", "Sabaliausk", "Stankevic", "Petkevic", "Vaitkevic", "Mickevic", "Urbanavic", "Jurevic", 
    "Marcinkevic", "Poc", "Paskevic","Sinkevic", "Radzevic","Mackevic", "Butk", "Rimk", "Simk", "Vaitk"
};



#endif
