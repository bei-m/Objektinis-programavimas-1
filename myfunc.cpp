#include "myfunc.h"

void pildyti (studentas &temp, string choice_1)
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

void galutinis (studentas &temp)
{
    int suma=0;
    for (int i=0; i<temp.nd.size(); i++)
    { suma=suma+temp.nd[i];}
    temp.gal_v=(suma*1.0/temp.nd.size())*0.4+(temp.egz*0.6);

    double mediana=0;
    sort(temp.nd.begin(), temp.nd.end());
    if (temp.nd.size()%2!=0)
    { mediana=(temp.nd[temp.nd.size()/2])*1.0;}
    else
    { mediana=(temp.nd[temp.nd.size()/2-1]+temp.nd[(temp.nd.size()/2)])/2.0;}
    temp.gal_m=mediana*0.4+temp.egz*0.6;
}

void spausdinti (studentas &grupe)
{
    streamsize ss=cout.precision();
    cout<<left<<setw(19)<<grupe.pavarde<<left<<setw(16)<<grupe.vardas;
    cout<<"    "<<setw(14)<<fixed<<setprecision(2)<<grupe.gal_v<<"    "<<setw(14)<<fixed<<setprecision(2)<<grupe.gal_m<<endl;
    cout<<std::defaultfloat<<setprecision(ss);
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
            { throw "Klaida. Įvedėte simbolį,netinkamą raidę arba netinkamą skaičių. ";}
            return true;
        }

        if (ch==4)
        {
            getline(cin,b);
            if ((!all_of(b.begin(), b.end(), ::isdigit)&&b!="n"&&b!="N")||b=="")
            { throw "Klaida. Įvedėte simbolį, netinkamą raidę arba netinkamą skaičių. "; }

            else if (all_of(b.begin(), b.end(), ::isdigit)&&stoi(b)>10)
            { throw "Klaida, Įvedėte per didelį skaičių. ";}
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
    {
        cout<<er;
        return false;
    }
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
    {
        cout<<er; return false;
    }
    return false;  
}