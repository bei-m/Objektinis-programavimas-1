#include "mylib.h"

struct studentas
{
    string vardas;
    string pavarde;
    vector<int> nd;
    double gal_v;
    double gal_m;
    int egz;
};

void pildyti(studentas &temp, string choice_1);
void spausdinti (studentas &grupe);
void galutinis (studentas &temp);
bool is_abc (string a);
string err (string a);
bool rusiuoti(studentas &a, studentas &b);

int main()
{
    studentas laikinas;
    vector<studentas> grupe;
    string ch;
    cout<<"Jei norite nuskaityti duomenis iš failo, spauskite 's', jei ne - spauskite 'n'. ";
    getline(cin, ch);
    while(ch!="s"&&ch!="S"&&ch!="n"&&ch!="N")
    {
        cout<<"Klaida. Įvedėte simbolį, skaičių arba netinkamą raidę. Jei norite nuskaityti duomenis iš failo, spauskite 's', jei ne - spauskite 'n'. ";
        getline(cin, ch);
    }
    if (ch=="s"||ch=="S")
    {
        string f;
        cout<<"Įrašykite (txt) failo pavadinimą: ";
        getline(cin, f);
        while(!is_abc(f))
        {
            cout<<"Klaida. Įvedėte neleistiną simbolį. Įrašykite (txt) failo pavadinimą: ";
            getline(cin, f);
        }
        f=f+".txt";
        const char* ff=f.c_str();
        ifstream data (f);
        FILE* fp;
        fp=fopen(ff, "r");
        data.peek();
        if (fp==NULL)
        {
            cout<<"Klaida. Nepavyko rasti failo.\nPatikrinkite ar failas yra tinkamame aplanke, paleiskite programą iš naujo ir bandykite nuskaityti dar kartą."<<endl;
            exit(1);
        }
        else if (data.eof())
        {
            cout<<"Klaida. Failas yra tuščias.\nUžpildykite failą, paleiskite programą iš naujo ir bandykite nuskaityti dar kartą "<<endl;
            exit(1);
        }
        else
        {
            string x;
            char p;
            int y=0, i=0;
            data>>x;
            y++;
            double a;
            while(x[0]!='E'&&x[0]!='e')
            {
              data>>x;
              y++;
            } 
            streamsize ss=cout.precision();
            while(!data.eof())
            {
                data>>laikinas.vardas;
                if(data.eof()){break;}
                data>>laikinas.pavarde;
            
                for (int i=0; i<(y-3); i++)
                {
                    data>>a;
                    laikinas.nd.push_back(a);
                }   
                data>>a;
                laikinas.egz=a;
                galutinis(laikinas);
                grupe.push_back(laikinas);
                laikinas.nd.clear();
            }
            data.close();
        }}
    else
    {
    string choice_1, a;
    cout<<"Jei norite, įveskite pažymių maksimalų kiekį, jei ne - spauskite 'n'. "; 
    getline(cin, choice_1);
    while((!all_of(choice_1.begin(), choice_1.end(),::isdigit)&&choice_1!="n"&&choice_1!="N")||choice_1=="0"||choice_1=="")
    {
        cout<<"Klaida. Įvedėte simbolį, neigiamą skaičių arba netinkamą raidę. Jei norite, įveskite pažymių maksimalų kiekį, jei ne - įveskite 'n'. ";
        getline(cin, choice_1);
    }
    pildyti (laikinas, choice_1);
    grupe.push_back(laikinas);
    do{
        cout<<"Jei norite įvesti dar vieną studentą spauskite 'y', jei įvedėte visus studentus spauskite 'n'. "; 
        getline(cin, a);
        while(a!="y"&&a!="n"&&a!="Y"&&a!="N")
        {
            cout<<"Klaida. Įvedėte simbolį, skaičių arba netinkamą raidę. Jei norite įvesti dar vieną studentą spauskite 'y', jei įvedėte visus studentus spauskite 'n'. ";
            getline(cin,a);
        }
        if (a=="y"||a=="Y")
        { 
            laikinas.nd.clear();
            pildyti(laikinas, choice_1);
            grupe.push_back(laikinas);
        }
    } while(a!="n"&&a!="N");
    }
    laikinas.nd.clear();
    sort(grupe.begin(), grupe.end(), rusiuoti);
    cout<<left<<setw(20)<<"Pavardė"<<left<<setw(16)<<"Vardas"<<setw(18)<<"Galutinis(Vid.)"<<setw(18)<<"Galutinis(Med.)"<<endl;
    for (int i=1; i<20+16+18+18; i++) {cout<<"-";}
    cout<<endl;
    
    for (int i=0; i<grupe.size(); i++) {spausdinti(grupe[i]);}
    grupe.clear();
    
    return 0;
}

void pildyti (studentas &temp, string choice_1)
{
    string choice_2,a;
    cout<<"Jei norite visus studento duomenis įrašyti, spauskite 'i', o jei generuoti atsitiktinai - spauskite 'g'. ";
    getline (cin, choice_2);
    while(choice_2!="i"&&choice_2!="I"&&choice_2!="G"&&choice_2!="g")
    {
        cout<<"Klaida. Įvedėte simbolį, skaičių arba netinkamą raidę. Jei norite visus studento duomenis įrašyti, spauskite 'i', o jei generuoti atsitiktinai - spauskite 'g'. ";
        getline(cin,choice_2);    
    }

    if (choice_2=="i"||choice_2=="I")
    {
        string egz_paz, test;
        cout<<"Įveskite studento vardą: ";
        getline(cin, temp.vardas);
        while(!is_abc(temp.vardas))
        {
            cout<<"Klaida. Įvedėte neleistiną simbolį. Įveskite studento vardą: ";
            getline(cin, temp.vardas);
        }

        cout<<"Įveskite studento pavardę: "; 
        getline(cin, temp.pavarde);
        while(!is_abc(temp.pavarde))
        {
            cout<<"Klaida. Įvedėte neleistiną simbolį. Įveskite studento pavardę: ";
            getline(cin, temp.pavarde);
        }

        cout<<"Įveskite studento namų darbų pažymius. Kai įvedėte visus pažymius, spauskite 'n'. "<<endl;
        if (choice_1=="n"||choice_2=="N") 
        {
            getline(cin, a);
            while(a=="n"||a=="N"||a=="")
            {
                cout<<"Klaida. Neįvedėte nei vieno pažymio. Įveskite studento namų darbų pažymius. Kai įvedėte visus pažymius, spauskite 'n'. "<<endl;
                getline(cin, a);
            }
            test=err(a);
            temp.nd.push_back(stoi(test));
            getline(cin, a);
            test=err(a);
            while(test!="n"&&test!="N")
            {
                temp.nd.push_back(stoi(test));
                getline(cin, a);
                test=err(a);
            }
        }
        else 
        {
            getline(cin,a);
            test=err(a);
            while(test!="n"&&test!="N"&&(temp.nd.size())<stoi(choice_1))
            {
                if ((temp.nd.size())<stoi(choice_1))
                {
                    temp.nd.push_back(stoi(test));
                }
                if ((temp.nd.size())==stoi(choice_1))
                {
                    cout<<choice_1<<" paž. įrašyti."<<endl;
                    break;
                }
                getline(cin, a);
                test=err(a);
                if ((a=="n"||a=="N")&&(temp.nd.size())<stoi(choice_1))
                {
                    for (int j=(temp.nd.size()); j<stoi(choice_1); j++) {temp.nd.push_back(0);}
                }
            }
        }
        cout<<"Įveskite studento egzamino pažymį (0-10): ";
        getline(cin, egz_paz);
        while(egz_paz==""||!all_of(egz_paz.begin(), egz_paz.end(),::isdigit)||(all_of(egz_paz.begin(), egz_paz.end(),::isdigit)&&stoi(egz_paz)>10))
        {
            cout<<"Klaida. Įvedėte simbolį, raidę arba netinkamą skaičių. Įveskite studento egzamino pažymį (0-10): ";
            getline(cin,egz_paz);
        }
        temp.egz=stoi(egz_paz);
        galutinis (temp);
    }
    else
    {
string paz_kiek;

        std::random_device rd;
        std::mt19937 mt(rd());
        std::uniform_int_distribution<int> dist(0,10); //pazymiami
        std::uniform_int_distribution<int> pas(0,1); //vyr/mot
        std::uniform_int_distribution<int> v(0,99); //vardai
        int a;
        if(pas(mt)==0)//mot
        {
            a=v(mt);
            temp.vardas=m_vardai[a];
            std::uniform_int_distribution<int> v(0,42); //pavardes
            a=v(mt);
            if (a<=27) {temp.pavarde=pavardes[a]+"aite";}
            else if (a>27&&a<=39) {temp.pavarde=pavardes[a]+"iute";}
            else {temp.pavarde=pavardes[a]+"ute";}
        }
        else //vyr
        {
            a=v(mt);
            temp.vardas=v_vardai[a];
            std::uniform_int_distribution<int> v(0,42); //pavardes
            a=v(mt);
            if (a<=28) {temp.pavarde=pavardes[a]+"as";}
            else if (a>28&&a<=38) {temp.pavarde=pavardes[a]+"ius";}
            else {temp.pavarde=pavardes[a]+"us";}
        }


        if (choice_1=="n"||choice_1=="N")
        {
            cout<<"Įveskite norimą pažymių kiekį: "; getline(cin, paz_kiek);
            while(!all_of(paz_kiek.begin(), paz_kiek.end(),::isdigit)||paz_kiek=="0"||paz_kiek=="")
            {
                cout<<"Klaida. Įvedėte simbolį, raidę arba netinkamą skaičių. Įveskite norimą pažymių kiekį: ";
                getline(cin, paz_kiek);
            }
            for (int i=0; i<stoi(paz_kiek); i++) { temp.nd.push_back(dist(mt));}  
        }
        else
        {
            for (int i=0; i<stoi(choice_1); i++)
            {
                temp.nd.push_back(dist(mt));
            }
        }
        temp.egz=dist(mt);
        galutinis(temp);
    }
    cout<<"Nd pazymiai: ";
    for (int i=0; i<temp.nd.size(); i++)
    {
        cout<<temp.nd.at(i)<<" ";
    }
    cout<<endl<<"Egz paz.: "<<temp.egz<<endl;
    temp.nd.clear();
    temp.nd.shrink_to_fit();
    cout<<"Duomenys įrašyti."<<endl;
}

bool is_abc (string a)
{
    if (a==("")) {return false;}
    int i=0;
    const char* masyvas=a.c_str();
    while (masyvas[i])
    {
        if (!iswalnum(masyvas[i])) { return false; }
        i++;
    }
    return true;
}

void galutinis (studentas &temp)
{
    int suma=0;
    for (int i=0; i<temp.nd.size(); i++)
    {
        suma=suma+temp.nd[i];
    }
    temp.gal_v=(suma*1.0/temp.nd.size())*0.4+(temp.egz*0.6);

    double mediana=0;
    sort(temp.nd.begin(), temp.nd.end());
    if (temp.nd.size()%2!=0)
    {
        mediana=(temp.nd[temp.nd.size()/2])*1.0;
    }
    else
    {
        mediana=(temp.nd[temp.nd.size()/2-1]+temp.nd[(temp.nd.size()/2)])/2.0;
    }
    temp.gal_m=mediana*0.4+temp.egz*0.6;
}

void spausdinti (studentas &grupe)
{
    streamsize ss=cout.precision();
    cout<<left<<setw(19)<<grupe.pavarde<<left<<setw(16)<<grupe.vardas;
    cout<<"    "<<setw(14)<<fixed<<setprecision(2)<<grupe.gal_v<<"    "<<setw(14)<<fixed<<setprecision(2)<<grupe.gal_m<<endl;
    cout<<std::defaultfloat<<setprecision(ss);
}
string err(string a)
{
    while((a!="n"&&a!="N"&&!all_of(a.begin(), a.end(),::isdigit))||a=="")
    {
        cout<<"Klaida. Įvedėte simbolį, netinkamą raidę arba netinkamą skaičių. Įveskite studento namų darbų pažymius. Kai įvedėte visus pažymius, spauskite 'n'. "<<endl;
        getline(cin, a);
    }

    if (all_of(a.begin(), a.end(),::isdigit))
    {
        while(stoi(a)>10)
        {
            cout<<"Klaida. Įvedėte per didelį skaičių (>10). Įveskite studento namų darbų pažymius. Kai įvedėte visus pažymius, spauskite 'n'. "<<endl;
            getline(cin, a);
            while(a!="n"&&a!="N"&&!all_of(a.begin(), a.end(),::isdigit))
            {
                cout<<"Klaida. Įvedėte simbolį, netinkamą raidę arba netinkamą skaičių. Įveskite studento namų darbų pažymius. Kai įvedėte visus pažymius, spauskite 'n'. "<<endl;
                getline(cin, a);
            }
        }
    }

    return a;
}
bool rusiuoti(studentas &a, studentas &b)
{
    if (a.pavarde==b.pavarde) {return a.vardas<b.vardas;}
    return a.pavarde<b.pavarde;   
}




