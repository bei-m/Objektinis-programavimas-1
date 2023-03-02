#include "myfunc.h"

int main()
{
    studentas laikinas;
    vector<studentas> grupe;
    string ch;
    bool b;
    do
    {
        cout<<"Jei norite nuskaityti duomenis iš failo, spauskite 's', jei ne - spauskite 'n'. ";
        b=check("s", "n", ch);
    } while (!b);
   
    if (ch=="s"||ch=="S")
    {
        try
        {
        string f;
        do
        {
            cout<<"Įrašykite (txt) failo pavadinimą: ";
            b=check(f,1);
        }while(!b);
        f=f+".txt";
        const char* ff=f.c_str();
        ifstream data (f);
        FILE* fp;
        fp=fopen(ff, "r");
        data.peek();
        if (fp==NULL) {throw "Klaida. Nepavyko rasti failo.\nPatikrinkite ar failas yra tinkamame aplanke, paleiskite programą iš naujo ir bandykite nuskaityti dar kartą.";}
        else if (data.eof())
        { throw "Klaida. Failas yra tuščias.\nUžpildykite failą, paleiskite programą iš naujo ir bandykite nuskaityti dar kartą ";}
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
        catch (const char* er)
        { cout<<er; exit(1);}
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
    do{
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





