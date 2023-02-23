
#include "mylib.h"

struct studentas
{
    string vardas;
    string pavarde;
    int *nd;
    int egz;
    int paz_kiek;
};

void pildyti(studentas &temp, string choice_1);
void spausdinti (studentas &grupe, string choice);
double galutinis (studentas &temp, string choice);
bool is_abc (string a);
bool is_nr(string a);
string err(string a);

int main()
{
    studentas *grupe;
    int n=1;
    string choice_1, a, v_ar_m;
    grupe=new studentas[n];
    cout<<"Jei norite, įveskite pažymių maksimalų kiekį, jei ne - spauskite 'n'. "; 
    getline(cin, choice_1);
    while(!is_nr(choice_1)&&choice_1!="n"&&choice_1!="N")
    {
        cout<<"Klaida. Įvedėte simbolį, neigiamą skaičių arba netinkamą raidę. Jei norite, įveskite pažymių maksimalų kiekį, jei ne - įveskite 'n'. ";
        getline(cin, choice_1);
    }
    if (is_nr(choice_1))
    {
    while(stoi(choice_1)==0)
    {
        cout<<"Klaida. Įvedėte nulį. Jei norite, įveskite pažymių maksimalų kiekį, jei ne - spauskite 'n'. ";
        getline(cin, choice_1);
        while(!is_nr(choice_1)&&choice_1!="n"&&choice_1!="N")
        {
            cout<<"Klaida. Įvedėte simbolį, neigiamą skaičių arba netinkamą raidę. Jei norite, įveskite pažymių maksimalų kiekį, jei ne - įveskite 'n'. ";
            getline(cin, choice_1);
        }
        if (choice_1=="n"||choice_1=="N") {break;}
    }
    }
    pildyti(grupe[0], choice_1);
    
    do{
    cout<<"Jei norite įvesti dar vieną studentą spauskite 'y', jei įvedėte visus studentus spauskite 'n'. "; 
    getline(cin, a);
    while (a!="y"&&a!="Y"&&a!="n"&&a!="N")
    {
        cout<<"Klaida. Įvedėte skaičių, simbolį arba netinkamą raidę. Jei norite įvesti dar vieną studentą spauskite 'y', jei įvedėte visus studentus spauskite 'n'. ";
        getline(cin, a);
    }
    if (a=="y"||a=="Y")
        {
            studentas *temp = new studentas[n];
            copy (grupe, grupe+n, temp);
            delete [] grupe;
            grupe = new studentas [n+1];
            copy (temp, temp+n, grupe);
            delete [] temp;
            n++;
            pildyti(grupe[n-1], choice_1);
        }
    } while(a!="n"&&a!="N");
    cout<<"Jei norite skaičiuoti galutinius balus naudojant pažymių vidurkius spauskite 'v', o jei medianas - 'm'. "; 
    getline(cin, v_ar_m);
    while (v_ar_m!="v"&&v_ar_m!="V"&&v_ar_m!="m"&&v_ar_m!="M")
    {
        cout<<"Klaida. Įvedėte skaičių, simbolį arba netinkamą raidę. Jei norite skaičiuoti galutinius balus naudojant pažymių vidurkius spauskite 'v', o jei medianas - 'm'. ";
        getline(cin, v_ar_m);
    }
    
    cout<<left<<setw(20)<<"Pavardė"<<left<<setw(15)<<"Vardas";
    if (v_ar_m=="v"||v_ar_m=="V") {cout<<setw(17)<<"Galutinis (Vid.)"<<endl;}
    else {cout<<setw(17)<<"Galutinis (Med.)"<<endl;}
    for (int i=0; i<20+15+17; i++) {cout<<"-";}
    cout<<endl;
    for (int i=0; i<n; i++) {spausdinti(grupe[i], v_ar_m);}
    return 0;
}

void pildyti(studentas &temp, string choice_1)
{
    int n=1;
    string choice_2;
    string a;
    int *masyvas;
    masyvas=new int[n];
    
    cout<<"Įveskite studento vardą: ";
    getline(cin, temp.vardas);
    while(!is_abc(temp.vardas))
    {
        cout<<"Klaida. Įvedėte neleistiną simbolį (ne raidę). Įveskite studento vardą: ";
        getline(cin, temp.vardas);
    }

    cout<<"Įveskite studento pavardę: "; 
    getline(cin, temp.pavarde);
    while(!is_abc(temp.pavarde))
    {
        cout<<"Klaida. Įvedėte neleistiną simbolį (ne raidę). Įveskite studento pavardę: ";
        getline(cin, temp.pavarde);
    }

    cout<<"Jei norite įvesti studento namų darbų pažymius spauskite 'i', jei norite juos sugeneruoti atsitiktinai - spauskite 'g'. ";
    getline(cin, choice_2);
    while (choice_2!="i"&&choice_2!="I"&&choice_2!="g"&&choice_2!="G")
    {
        cout<<"Klaida. Įvedėte skaičių, simbolį arba netinkamą raidę. Jei norite įvesti studento namų darbų pažymius spauskite 'i', jei norite juos sugeneruoti atsitiktinai - spauskite 'g'. ";
        getline(cin, choice_2);
    }

    if (choice_2=="i"||choice_2=="I")
    {
        string test;
        cout<<"Įveskite studento namų darbų pažymius. Kai įvedėte visus pažymius, spauskite 'n'. "<<endl;
        if (choice_1=="n"||choice_1=="N") 
        {
            getline(cin, a);
            while(a=="n"||a=="N")
            {
                cout<<"Klaida. Neįvedėte nei vieno pažymio. Įveskite studento namų darbų pažymius. Kai įvedėte visus pažymius, spauskite 'n'. "<<endl;
                getline(cin, a);
            }
            test=err(a);
            masyvas[0]=stoi(test);
            getline(cin, a);
            test=err(a);
            while(test!="n"&&test!="N")
            {
            int *masyvas_2;
            masyvas_2 = new int[n];
            copy(masyvas, masyvas+n, masyvas_2);
            delete [] masyvas;
            masyvas = new int [n+1];
            copy(masyvas_2, masyvas_2+n, masyvas);
            masyvas[n]=stoi(test);
            n++;
            delete [] masyvas_2;
            getline(cin, a);
            test=err(a);
            }
            temp.nd=new int[n];
            copy(masyvas, masyvas+n, temp.nd);
            delete [] masyvas; 
            temp.paz_kiek=n;
        
        }
        else
        {
            temp.paz_kiek=stoi(choice_1);
            temp.nd = new int[stoi(choice_1)];
            int i=0;
            getline(cin, a);
            test=err(a);
            while(test!="n"&&test!="N"&&i<stoi(choice_1))
            {
                if (i<stoi(choice_1))
                {
                    temp.nd[i]=stoi(test);
                    i++;
                }
                if (i==stoi(choice_1))
                {
                    cout<<choice_1<<" paž. įrašyti."<<endl;
                    break;
                }
                getline(cin, a);
                test=err(a);
                if ((a=="n"||a=="N")&&i<stoi(choice_1))
                {
                    for (int j=i; j<stoi(choice_1); j++) {temp.nd[j]=0;}
                }
            } 
        }
    }
    else 
    {
        srand(time(NULL));
        string paz_kiek;

        if (choice_1=="n"||choice_1=="N")
        {
            cout<<"Įveskite norimą pažymių kiekį: "; getline(cin, paz_kiek);
            while(!is_nr(paz_kiek)||paz_kiek=="0")
            {
                cout<<"Klaida. Įvedėte simbolį, raidę arba netinkamą skaičių. Įveskite norimą pažymių kiekį: ";
                getline(cin, paz_kiek);
            }
            
            temp.nd=new int[stoi(paz_kiek)];
            for (int i=0; i<stoi(paz_kiek); i++)
            {
                temp.nd[i]=rand()%11;
            }
            temp.paz_kiek=stoi(paz_kiek);
        }
        else 
        {
            temp.paz_kiek=stoi(choice_1);
            temp.nd=new int[stoi(choice_1)];
            cout<<"Įveskite norimą pažymių kiekį. Jei norite maksimalaus pažymių kiekio spauskite 'm'. ";
            getline(cin, paz_kiek);
            while((!is_nr(paz_kiek)&&paz_kiek!="m"&&paz_kiek!="M")||paz_kiek=="0")
            {
                cout<<"Klaida. Įvedėte simbolį, netinkamą raidę arba netinkamą skaičių. Įveskite norimą pažymių kiekį: ";
                getline(cin, paz_kiek);
            }
            
            if (paz_kiek=="m"||paz_kiek=="M") 
            { 
                for (int i=0; i<stoi(choice_1); i++) {temp.nd[i]=rand()%11;}
            }
            else 
            {
                while (stoi(paz_kiek)>stoi(choice_1))
                {
                    cout<<"Klaida. Įvestas norimas pažymių kiekis yra didesnis už maksimalų. Įveskite norimą pažymių kiekį: ";
                    getline(cin, paz_kiek);
                    while(!is_nr(paz_kiek)&&paz_kiek!="m"&&paz_kiek!="M")
                    {
                        cout<<"Klaida. Įvedėte simbolį, netinkamą raidę arba netinkamą skaičių. Įveskite norimą pažymių kiekį: ";
                        getline(cin, paz_kiek);
                    }
                }
                for (int i=0; i<stoi(paz_kiek); i++) {temp.nd[i]=rand()%11;}
                for (int j=stoi(paz_kiek); j<stoi(choice_1); j++) {temp.nd[j]=0;}
            }
        }
    }
    string egz_paz;
    cout<<"Įveskite studento egzamino pažymį arba spauskite 'g' ir pažymys bus sugeneruotas atsitiktine tvarka: "; 
    getline(cin, egz_paz);
    while(!is_nr(egz_paz)&&egz_paz!="g"&&egz_paz!="G")
        {
            cout<<"Klaida. Įvedėte simbolį, netinkamą raidę arba netinkamą skaičių. Įveskite studento egzamino pažymį (0-10) arba spauskite 'g' ir pažymys bus sugeneruotas atsitiktine tvarka: ";
            getline(cin, egz_paz);
        }
    if (egz_paz=="g"||egz_paz=="G") {temp.egz=rand()%11;}
    if (is_nr(egz_paz)) 
    {
        while(stoi(egz_paz)>10)
        {
            cout<<"Klaida. Įvedėte per didelį skaičių. Įveskite studento egzamino pažymį (0-10) arba spauskite 'g' ir pažymys bus sugeneruotas atsitiktine tvarka:  ";
            getline(cin, egz_paz);
            while(!is_nr(egz_paz)&&egz_paz!="g"&&egz_paz!="G")
            {
                cout<<"Klaida. Įvedėte simbolį, netinkamą raidę arba netinkamą skaičių. Įveskite studento egzamino pažymį (0-10) arba spauskite 'g' ir pažymys bus sugeneruotas atsitiktine tvarka: ";
                getline(cin, egz_paz);
            }
            if (is_nr(egz_paz)) {temp.egz=stoi(egz_paz);}
            
            if (egz_paz=="g"||egz_paz=="G") 
            {   temp.egz=rand()%11;
                break;
            } 
        }
        temp.egz=stoi(egz_paz);
    }
    cout<<"Duomenys įrašyti."<<endl;
}
bool is_abc(string a)
{
    int i=0;
    const char* masyvas=a.c_str();
    while (masyvas[i])
    {
        if (!isalpha(masyvas[i])) { return false; }
        i++;
    }
    return true;
}
bool is_nr(string a) 
{
    for(int i=0;i<a.size();i++) 
    {
        if((a[i]>='0' && a[i]<='9')==false) { return false; }
    }
    return true;
}
double galutinis (studentas &temp, string choice)
{
    double galutinis=0;
    if (choice=="v"||choice=="V")
    {
        int suma=0;
        for (int i=0; i<temp.paz_kiek; i++)
        {
         suma=suma+temp.nd[i];
        }
        galutinis=(suma*1.0/temp.paz_kiek)*0.4+(temp.egz*0.6);
        return (double)galutinis;
    }
    else
    {
        double mediana=0;
        for (int a=0; a<temp.paz_kiek; a++)
        {
            for (int b=0; b<temp.paz_kiek-1; b++)
            if (temp.nd[a]<temp.nd[b]) swap(temp.nd[a], temp.nd[b]);
        }
        if (temp.paz_kiek%2!=0)
        {
            mediana=(temp.nd[temp.paz_kiek/2])*1.0;
        }
         else
        {
            mediana=(temp.nd[temp.paz_kiek/2-1]+temp.nd[(temp.paz_kiek/2)])/2.0;
        }
        galutinis=mediana*0.4+temp.egz*0.6;
        return galutinis;
    }
}
void spausdinti (studentas &grupe, string choice)
{
    streamsize ss=cout.precision();
    cout<<left<<setw(20)<<grupe.pavarde<<left<<setw(15)<<grupe.vardas<<setw(17)<<fixed<<setprecision(2)<<galutinis(grupe, choice)<<endl;
    cout<<std::defaultfloat<<setprecision(ss);
}
string err(string a)
{
    while(a!="n"&&a!="N"&&!is_nr(a))
    {
        cout<<"Klaida. Įvedėte simbolį, netinkamą raidę arba netinkamą skaičių. Įveskite studento namų darbų pažymius. Kai įvedėte visus pažymius, spauskite 'n'. "<<endl;
        getline(cin, a);
    }
    if (is_nr(a)) 
    {
        while(stoi(a)>10)
        {
            cout<<"Klaida. Įvedėte per didelį skaičių (>10). Įveskite studento namų darbų pažymius. Kai įvedėte visus pažymius, spauskite 'n'. "<<endl;
            getline(cin, a);
            while(a!="n"&&a!="N"&&!is_nr(a))
            {
                cout<<"Klaida. Įvedėte simbolį, netinkamą raidę arba netinkamą skaičių. Įveskite studento namų darbų pažymius. Kai įvedėte visus pažymius, spauskite 'n'. "<<endl;
                getline(cin, a);
            }
        }
    }
    return a;
}