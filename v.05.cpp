#include "myfunc.h"

int main()
{
    
    duration<double> diff;
    studentas laikinas;
    vector<studentas> grupe;
    string ch, p, pav;
    bool b;
    do
    {
        cout<<"Jei norite sugeneruoti failą, spauskite 's', jei ne - spauskite 'n'. ";
        b=check("s", "n", ch);
    }while (!b);
    
    if (ch=="s"||ch=="S")
    {
        string stud, paz;
        do
        {
            cout<<"Įveskite norimą studentų kiekį: ";
            b=check(stud, 2);
        } while (!b);
        do
        {
            cout<<"Jei norite įveskite norimą pažymių kiekį, jei ne - spauskite 'n' ir jis bus automatiškai sugeneruotas (1-15): "; 
            b=check(paz,3);
        } while (!b);
        if (paz=="n"||paz=="N") 
        {
            std::random_device rd;
            std::mt19937 mt(rd());
            uniform_int_distribution<int> dist(1,15);
            paz=std::to_string(dist(mt));
        }
        auto s=high_resolution_clock::now();
        pildyti(stoi(stud), stoi(paz), pav);
        auto e=high_resolution_clock::now();
        diff=e-s;
        do
        {
            cout<<"Jei norite spausdinti sąrašą į failus - spauskite 'f', jei norite baigti programos darbą - spauskite 'b'. ";
            b=check("b", "f", ch);
        } while (!b);
        if (ch=="b"||ch=="B") {exit(0);}
        else 
        {
        do
        {
            cout<<"Pasirinkite konteinerį testavimui: vektorius (spauskite 'V'), sąrašas (spauskite 'L'), dekas (spauskite 'D') ar visi trys (spauskite '3'): "; 
            getline(cin,p);
            if (p!="V"&&p!="v"&&p!="L"&&p!="l"&&p!="D"&&p!="d"&&p!="3") {cout<<"Klaida. ";}
        } while (p!="V"&&p!="v"&&p!="L"&&p!="l"&&p!="D"&&p!="d"&&p!="3");
        cout<<endl<<stud<<" įrašų failo generavimo laikas: "<<diff.count()<<" s\n\n";
        if (p=="3") 
        {
            cout<<"VEKTORIUS/VECTOR\n"; testv(pav,1); cout<<"\n";
            cout<<"SĄRAŠAS/LIST\n"; testl(pav); cout<<"\n";
            cout<<"DEKAS/DEQUE\n"; testd(pav); cout<<"\n";
        }
        else if (p=="V"||p=="v") {testv(pav, 1);}
        else if (p=="L"||p=="l") {testl(pav);}
        else {testd(pav);}
        }
    }
    else
    {
        do
        {
            cout<<"Jei norite nuskaityti duomenis iš failo, spauskite 's', jei ne - spauskite 'n'. ";
            b=check("s", "n", ch);
        }while (!b);
   
        if (ch=="s"||ch=="S")
        {
            do
            {
                cout<<"Įrašykite (txt) failo pavadinimą: ";
                b=check(pav,1);
            }while(!b);
            try
            {
                pav=pav+".txt";
                const char* ff=pav.c_str();
                ifstream data (pav);
                FILE *fp;
                fp=fopen(ff, "r");
                if (fp==NULL) { throw   "Klaida. Nepavyko rasti failo.\nPatikrinkite ar failas yra tinkamame aplanke, paleiskite programą iš naujo ir bandykite nuskaityti dar kartą.";}
                if (data.eof()) {throw  "Klaida. Failas yra tuščias.\nUžpildykite failą, paleiskite programą iš naujo ir bandykite nuskaityti dar kartą ";}
            }
            catch(const char* er)
            { cout<<er; exit(1);}
            
            do
            {
                cout<<"Jei norite spausdinti sąrašą į failus - spauskite 'f', jei norite matyti konsolėje - spauskite 'k'. ";
                b=check("k", "f", ch);
            } while (!b);
            if (ch=="k"||ch=="K") {testv(pav, 0);}
            else 
            {
                do
                {
                    cout<<"Pasirinkite konteinerį testavimui: vektorius (spauskite 'V'), sąrašas (spauskite 'L'), dekas (spauskite 'D') ar visi trys (spauskite '3'): "; 
                    getline(cin,p);
                    if (p!="V"&&p!="v"&&p!="L"&&p!="l"&&p!="D"&&p!="d"&&p!="3") {cout<<"Klaida. ";}
                } while (p!="V"&&p!="v"&&p!="L"&&p!="l"&&p!="D"&&p!="d"&&p!="3");
                if (p=="3") 
                {
                    cout<<"VEKTORIUS/VECTOR\n"; testv(pav,1); cout<<"\n";
                    cout<<"SĄRAŠAS/LIST\n"; testl(pav); cout<<"\n";
                    cout<<"DEKAS/DEQUE\n"; testd(pav); cout<<"\n";
                }
                else if (p=="V"||p=="v") {testv(pav, 1);}
                else if (p=="L"||p=="l") {testl(pav);}
                else {testd(pav);}
            }
        }   
        else 
        {
            string choice_1, a;
            do 
            {
                cout<<"Jei norite, įveskite pažymių maksimalų kiekį, jei ne - spauskite 'n'. "; 
                b=check(choice_1,3);
            }while(!b);
            pildyti (laikinas, choice_1);
            grupe.push_back(laikinas);
            do
            {
                do
                {
                    cout<<"Jei norite įvesti dar vieną studentą spauskite 'y', jei įvedėte visus studentus spauskite 'n'. "; 
                    b=check("y", "n", a);
                }while(!b);
                if (a=="y"||a=="Y")
                { 
                laikinas.nd.clear();
                pildyti(laikinas, choice_1);
                grupe.push_back(laikinas);
                }
            }while(a!="n"&&a!="N");
            laikinas.nd.clear();
            sort(grupe.begin(), grupe.end(), rusiuoti);
            cout<<left<<setw(20)<<"Pavardė"<<left<<setw(16)<<"Vardas"<<setw(18)<<"Galutinis(Vid.)"<<setw(18)<<"Galutinis(Med.)"<<endl;
            cout<<string(68, '-')<<"\n";
            cout<<endl;
            spausdinti(grupe);
        }
    }
    return 0;
}





