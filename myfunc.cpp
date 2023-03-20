#include "myfunc.h"

void pildyti(studentas &temp, string choice_1)
{
    string choice_2,a;
    bool b;
    do
    {
        cout<<"Jei norite visus studento duomenis įrašyti, spauskite 'i', o jei generuoti atsitiktinai - spauskite 'g'. ";
        b=check("i", "g", choice_2);
    } while (!b);
    if (choice_2=="i"||choice_2=="I")
    {
        string egz_paz;
        do{
        cout<<"Įveskite studento vardą: ";
        b=check(temp.vardas,1);
        }while(!b);

        do{
        cout<<"Įveskite studento pavardę: ";
        b=check(temp.pavarde,1);
        }while(!b);

        if (choice_1=="n"||choice_1=="N")
        {
            do
                {
                    cout<<"Įveskite studento namų darbų pažymius. Kai įvedėte visus pažymius, spauskite 'n'. "<<endl;
                    b=check(a,5);
                }while(!b);
                temp.nd.push_back(stoi(a));
            do
                {
                    b=false;
                    while(!b){ b=check(a,4);}
                    if(a=="n"||a=="N") {break;}
                    temp.nd.push_back(stoi(a));
                }while (a!="n"&&a!="N");
        }
        else
        {
            do
                {
                    cout<<"Įveskite studento namų darbų pažymius. Kai įvedėte visus pažymius, spauskite 'n'. "<<endl;
                    b=check(a,5);
                }while(!b);
                temp.nd.push_back(stoi(a));
            do
            {
                b=false;
                while(!b){ b=check(a,4);}
                if(a=="n"||a=="N") {break;}
                temp.nd.push_back(stoi(a));
            }while (temp.nd.size()<stoi(choice_1));
    
            if ((temp.nd.size())==stoi(choice_1))
            { cout<<choice_1<<" paž. įrašyti."<<endl; }
            
            if ((a=="n"||a=="N")&&(temp.nd.size())<stoi(choice_1))
            { for (int j=(temp.nd.size()); j<stoi(choice_1); j++) {temp.nd.push_back(0);}}
            
        }
        do{
        cout<<"Įveskite studento egzamino pažymį (0-10): ";
        b=check(egz_paz, 5);
        } while(!b);
        temp.egz=stoi(egz_paz);
        galutinis (temp);
    }
    else
    {
        string paz_kiek;
        std::random_device rd;
        std::mt19937 mt(rd());
        uniform_int_distribution<int> dist(0,10); //pazymiams
        uniform_int_distribution<int> pas(0,1); //gender
        uniform_int_distribution<int> v(0,99); //vardai
        int a;
        if(pas(mt)==0)//mot
        {
            a=v(mt);
            temp.vardas=m_vardai[a];
            uniform_int_distribution<int> v(0,42); //pavardes
            a=v(mt);
            if (a<=27) {temp.pavarde=pavardes[a]+"aite";}
            else if (a>27&&a<=39) {temp.pavarde=pavardes[a]+"iute";}
            else {temp.pavarde=pavardes[a]+"ute";}
        }
        else //vyr
        {
            a=v(mt);
            temp.vardas=v_vardai[a];
            uniform_int_distribution<int> v(0,42); //pavardes
            a=v(mt);
            if (a<=28) {temp.pavarde=pavardes[a]+"as";}
            else if (a>28&&a<=38) {temp.pavarde=pavardes[a]+"ius";}
            else {temp.pavarde=pavardes[a]+"us";}
        }
        if (choice_1=="n"||choice_1=="N")
        {
            do
            {
                cout<<"Įveskite norimą pažymių kiekį: "; 
                b=check(paz_kiek, 2);
            }while(!b);
        for (int i=0; i<stoi(paz_kiek); i++) { temp.nd.push_back(dist(mt));}  
        }
        else
        {
            for (int i=0; i<stoi(choice_1); i++)
            { temp.nd.push_back(dist(mt));}
        }
        temp.egz=dist(mt);
        galutinis(temp);
    }
    temp.nd.clear();
    temp.nd.shrink_to_fit();
    cout<<"Duomenys įrašyti."<<endl;
}

void galutinis(studentas &temp)
{
    int suma=0;
    for (auto &i:temp.nd)
    { suma=suma+i;}
    temp.gal_v=(suma*1.0/temp.nd.size())*0.4+(temp.egz*0.6);

    float mediana=0;
    sort(temp.nd.begin(), temp.nd.end());
    if (temp.nd.size()%2!=0)
    { mediana=(temp.nd.at(temp.nd.size()/2))*1.0;}
    else
    { mediana=(temp.nd.at(temp.nd.size()/2-1)+temp.nd.at(temp.nd.size()/2))/2.0;}
    temp.gal_m=mediana*0.4+temp.egz*0.6;
    temp.nd.clear();
    temp.nd.shrink_to_fit();
}

void spausdinti(vector<studentas> &grupe)
{
    streamsize ss=cout.precision();
    for (auto &i:grupe)
    {
     cout<<left<<setw(19)<<i.pavarde<<left<<setw(16)<<i.vardas;
     cout<<"    "<<setw(14)<<fixed<<setprecision(2)<<i.gal_v<<"    "<<setw(14)<<fixed<<setprecision(2)<<i.gal_m<<endl;
    }
    cout<<std::defaultfloat<<setprecision(ss);
    grupe.clear();
}

bool rusiuoti(studentas &a, studentas &b)
{
    if (a.pavarde==b.pavarde) {return a.vardas<b.vardas;}
    return a.pavarde<b.pavarde;   
}
//1-tik raides ir skaiciai>0
//2- tik skaiciai>0
//3 - 0<skaicius arba n
//4 - skaicius [0;10] arba n
//5- skaicius [0;10]
bool check(string &b, int ch)
{
    try
    {
        if (ch==1)
        {
            getline(cin,b);
            if(b=="") {throw "Klaida. Įvedėte simbolį. ";}
            int i=0;
            const char* masyvas=b.c_str();
            while (masyvas[i])
            {
              if (!iswalnum(masyvas[i])||b=="") 
              { throw "Klaida. Įvedėte simbolį. ";
              break;}
              i++;
            }
            return true;
        }

        if(ch==2)
        {
            getline(cin,b);
            if (!all_of(b.begin(), b.end(), ::isdigit)||b=="0"||b=="") 
            {throw "Klaida. Įvedėte simbolį, raidę arba netinkamą skaičių. ";}
            return true;
        }

        if (ch==3)
        {
            getline(cin,b);
            if ((!all_of(b.begin(), b.end(), ::isdigit)&&b!="n"&&b!="N")||b=="0"||b=="")
            { throw "Klaida. Įvedėte simbolį, netinkamą raidę arba netinkamą skaičių. ";}
            return true;
        }

        if (ch==4)
        {
            getline(cin,b);
            if ((!all_of(b.begin(), b.end(), ::isdigit)&&b!="n"&&b!="N")||b=="")
            { throw "Klaida. Įvedėte simbolį, netinkamą raidę arba netinkamą skaičių. "; }

            else if (all_of(b.begin(), b.end(), ::isdigit)&&stoi(b)>10)
            { throw "Klaida. Įvedėte per didelį skaičių. ";}
            return true;
        }
        if (ch==5)
        {
            getline(cin,b);
            if(b=="") {throw "Klaida. Įvedėte simbolį, raidę arba netinkamą skaičių. ";}
            if (!all_of(b.begin(), b.end(), ::isdigit)||(all_of(b.begin(), b.end(), ::isdigit)&&stoi(b)>10))
            { throw "Klaida. Įvedėte simbolį, raidę arba netinkamą skaičių. "; }
            return true;
        }
    }
    catch(const char* er)
    { cout<<er; return false;}
    return false;
}
bool check(string q, string p, string &b)
{
    try
    {
        string h,j;
        getline(cin,b);
        h=char(q[0]-32);
        j=char(p[0]-32);
        if(b!=q&&b!=p&&b!=h&&b!=j) {throw "Klaida. Įvedėte skaičių, simbolį arba netinkamą raidę. ";}
        return true;
    }
    catch(const char* er)
    { cout<<er; return false; }
    return false;  
}
void pildyti(int stud, int paz, string &pav)
{
    std::random_device rd;
    std::mt19937 mt(rd());
    uniform_int_distribution<int> dist(0,10); //pazymiams
    uniform_int_distribution<int> pas(0,1); //gender
    uniform_int_distribution<int> v(0,43); //pavardes
    short int a,b;
    std::ofstream failas (pav+".txt");
    failas<<setw(20)<<left<<"Pavarde"<<setw(16)<<left<<"Vardas";
    for(int i=0; i<paz; i++)
    {
        failas<<"ND"<<setw(4)<<i+1;
    }
    failas<<setw(7)<<"Egz."<<endl;
    for (int i=0; i<stud; i++)
    {
        if (pas(mt)==0) //mot
        {
            a=v(mt);
            if (a<=27) {failas<<setw(20)<<left<<pavardes[a]+"aite";}
            else if (a>27&&a<=39) {failas<<setw(20)<<left<<pavardes[a]+"iute";}
            else {failas<<setw(20)<<left<<pavardes[a]+"ute";}
            uniform_int_distribution<int> v(0,99); //vardai
            a=v(mt);
            failas<<setw(16)<<left<<m_vardai[a];
        }
        else //vyr
        {
            a=v(mt);
            if (a<=27) {failas<<setw(20)<<left<<pavardes[a]+"as";}
            else if (a>27&&a<=39) {failas<<setw(20)<<left<<pavardes[a]+"ius";}
            else {failas<<setw(20)<<left<<pavardes[a]+"us";}
            uniform_int_distribution<int> v(0,99); //vardai
            a=v(mt);
            failas<<setw(16)<<left<<v_vardai[a];
        }
        for (int j=0; j<=paz; j++)
        {
            b=dist(mt);
            failas<<setw(6)<<b;
        }
        failas<<endl;
    }
    failas.close();
}
void frus(string &f)
{
    duration<double> diff;
    vector<studentas> grupe;
    vector<studentas> grupe_1;
    vector<studentas> grupe_2;
    studentas laikinas;
    bool b;
    int a;
    string ch;
    do
        {
            cout<<"Jei norite spausdinti sąrašą į failus - spauskite 'f', jei norite matyti konsolėje - spauskite 'k'. ";
            b=check("k", "f", ch);
        } while (!b);
    auto start = high_resolution_clock::now();
    try
    {
        
        f=f+".txt";
        const char* ff=f.c_str();
        ifstream data (f);
        FILE *fp;
        fp=fopen(ff, "r");
        if (fp==NULL) { throw   "Klaida. Nepavyko rasti failo.\nPatikrinkite ar failas yra tinkamame aplanke, paleiskite programą iš naujo ir bandykite nuskaityti dar kartą.";}
        if (data.eof()) {throw  "Klaida. Failas yra tuščias.\nUžpildykite failą, paleiskite programą iš naujo ir bandykite nuskaityti dar kartą ";}
        string lname, name, x;
        short int y=0;
        auto s1 = high_resolution_clock::now();
        do
        {
            data>>x;
            y++;
        }while(x[0]!='E'&&x[0]!='e'); 
        while (!data.eof())
        {
            data>>lname>>name;
            laikinas.pavarde=lname;
            laikinas.vardas=name;
            if (data.eof()) {break;}
            for (int j=0; j<(y-3); j++)
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
        auto e1 = high_resolution_clock::now();
        sort(grupe.begin(), grupe.end(), rusiuoti);
        auto e2 = high_resolution_clock::now();
        if (ch=="k"||ch=="K") 
        {
            cout<<left<<setw(20)<<"Pavardė"<<left<<setw(16)<<"Vardas"<<setw(18)<<"Galutinis(Vid.)"<<setw(18)<<"Galutinis(Med.)"<<endl;
            cout<<string(68, '-')<<"\n";
            spausdinti(grupe);
        }
        if (ch=="F"||ch=="f") 
        {
            auto s3=high_resolution_clock::now();
            for (auto &k:grupe)
            {
                if (k.gal_v>=5 || k.gal_m>=5) {grupe_2.push_back(k);}
                else {grupe_1.push_back(k);}
            }
            auto e3 = high_resolution_clock::now();
            a=grupe.size();
            grupe.clear();
            grupe.shrink_to_fit();
            auto s4 = high_resolution_clock::now();
            std::ofstream rez1("protingieji.txt");
            rez1<<setw(20)<<left<<"Pavarde"<<setw(16)<<left<<"Vardas";
            rez1<<setw(16)<<left<<"Galutinis(Vid.)"<<setw(16)<<left<<"Galutinis(Med.)"<<endl;
            for (auto &j:grupe_2)
            {
                rez1<<setw(20)<<left<<j.pavarde<<setw(16)<<left<<j.vardas;
                rez1<<setw(16)<<fixed<<setprecision(2)<<j.gal_v<<setw(16)<<fixed<<setprecision(2)<<j.gal_m<<endl;
            }
            grupe_2.clear(); grupe.shrink_to_fit();
            auto e4 = high_resolution_clock::now();
            std::ofstream rez2("vargsai.txt");
            rez2<<setw(20)<<left<<"Pavarde"<<setw(16)<<left<<"Vardas";
            rez2<<setw(16)<<left<<"Galutinis(Vid.)"<<setw(16)<<left<<"Galutinis(Med.)"<<endl;
            for (auto &j:grupe_1)
            {
                rez2<<setw(20)<<left<<j.pavarde<<setw(16)<<left<<j.vardas;
                rez2<<setw(16)<<fixed<<setprecision(2)<<j.gal_v<<setw(16)<<fixed<<setprecision(2)<<j.gal_m<<endl;
            }
            grupe_1.clear(); grupe.shrink_to_fit();
            auto e5 = high_resolution_clock::now();
            diff=e1-s1;
            cout<<"\n\n";
            cout<<a<<" įrašų failo nuskaitymo ir galutinių pažymių skaičiavimo laikas: "<<diff.count()<<" s\n";
            diff=e2-e1;
            cout<<a<<" įrašų failo rūšiavimo abėcėlės tvarka laikas: "<<diff.count()<<" s\n";
            diff=e3-s3;
            cout<<a<<" įrašų failo dalijimo į dvi grupes laikas: "<<diff.count()<<" s\n"; //ir dalijimas ir galutiniu pazymiu skaiciavimas
            diff=e4-s4;
            cout<<"Grupės 'protingieji' įrašymo į failą laikas: "<<diff.count()<<" s\n";
            diff=e5-e4;
            cout<<"Grupės 'vargsai' įrašymo į failą laikas: "<<diff.count()<<" s\n";
            diff=e5-start;
            cout<<a<<" įrašų testo laikas: "<<diff.count()<<" s\n";
        }
    }
    catch(const char* er)
    { cout<<er; exit(1);}
   
}  
