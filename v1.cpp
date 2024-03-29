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
            cout<<"1 STRATEGIJA\n";
            cout<<"VEKTORIUS/VECTOR\n"; vec_1(pav,1); cout<<"\n";
            cout<<"SĄRAŠAS/LIST\n"; list_1(pav); cout<<"\n";
            cout<<"DEKAS/DEQUE\n"; deque_1(pav); cout<<"\n"; 
            cout<<"2 STRATEGIJA\n";
            cout<<"VEKTORIUS/VECTOR\n"; vec_2(pav); cout<<"\n";
            cout<<"SĄRAŠAS/LIST\n"; list_2(pav); cout<<"\n";
            cout<<"DEKAS/DEQUE\n"; deque_2(pav); cout<<"\n"; 
        }
        else if (p=="V"||p=="v") {cout<<"1 STRATEGIJA\n"; vec_1(pav, 1); cout<<"2 STRATEGIJA\n"; vec_2(pav);}
        else if (p=="L"||p=="l") {cout<<"1 STRATEGIJA\n"; list_1(pav); cout<<"2 STRATEGIJA\n"; list_2(pav);}
        else {cout<<"1 STRATEGIJA\n"; deque_1(pav); cout<<"2 STRATEGIJA\n"; deque_2(pav);}
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
                getline(cin,pav);
                pav.find(".TXT")!=pav.npos? pav.erase(pav.length()-4):pav=pav;
                pav.find(".txt")!=pav.npos? pav=pav:pav=pav+".txt";
                try
                {
                    const char* ff=pav.c_str();
                    ifstream data (pav);
                    FILE *fp;
                    fp=fopen(ff, "r");
                    data.peek();
                    if (fp==NULL) { throw   "Klaida. Nepavyko rasti tokio failo. ";}
                    if (data.eof()) {throw  "Klaida. Failas yra tuščias. ";}
                    b=true;
                }
                catch(const char* er)
                { cout<<er; b=false;} 
            }while(!b);
            
            do
            {
                cout<<"Jei norite spausdinti sąrašą į failus - spauskite 'f', jei norite matyti konsolėje - spauskite 'k'. ";
                b=check("k", "f", ch);
            } while (!b);
            if (ch=="k"||ch=="K") {vec_1(pav, 0);}
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
                    cout<<"1 STRATEGIJA\n";
                    cout<<"VEKTORIUS/VECTOR\n"; vec_1(pav,1); cout<<"\n";
                    cout<<"SĄRAŠAS/LIST\n"; list_1(pav); cout<<"\n";
                    cout<<"DEKAS/DEQUE\n"; deque_1(pav); cout<<"\n"; 
                    cout<<"2 STRATEGIJA\n";
                    cout<<"VEKTORIUS/VECTOR\n"; vec_2(pav); cout<<"\n";
                    cout<<"SĄRAŠAS/LIST\n"; list_2(pav); cout<<"\n";
                    cout<<"DEKAS/DEQUE\n"; deque_2(pav); cout<<"\n";
                }
                else if (p=="V"||p=="v") {cout<<"1 STRATEGIJA\n"; vec_1(pav, 1); cout<<"2 STRATEGIJA\n"; vec_2(pav);}
                else if (p=="L"||p=="l") {cout<<"1 STRATEGIJA\n"; list_1(pav); cout<<"2 STRATEGIJA\n"; list_2(pav);}
                else {cout<<"1 STRATEGIJA\n"; deque_1(pav); cout<<"2 STRATEGIJA\n"; deque_2(pav);}
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
            spausdinti(grupe);
        }
    }
    return 0;
}





