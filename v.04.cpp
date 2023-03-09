#include "myfunc.h"

int main()
{
    
    duration<double> diff;
    studentas laikinas;
    vector<studentas> grupe;
    string ch;
    bool b;
    do
    {
        cout<<"Jei norite sugeneruoti failą, spauskite 's', jei ne - spauskite 'n'. ";
        b=check("s", "n", ch);
    }while (!b);
    if (ch=="s"||ch=="S")
    {
        string stud, paz, pav;
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
        pildyti(stoi(stud), stoi(paz), pav);
        frus(pav);
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
            string f;
            do
            {
                cout<<"Įrašykite (txt) failo pavadinimą: ";
                b=check(f,1);
            }while(!b);
            frus(f);
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
            for (int i=1; i<20+16+18+18; i++) {cout<<"-";}
            cout<<endl;
            spausdinti(grupe);
        }
    }
    return 0;
}





