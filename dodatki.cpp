#include "dodatki.h"
#include <iostream>
#include <cstdlib>
#include<ctime>

using namespace std;

CDodatek::CDodatek()
{

}

int CDodatek::sprawdzenie(int dolna_granica,int gorna_granica,int &dana)
{
    if(dana>gorna_granica)
        return 0;
    if(dana<dolna_granica)
            return 0;
    else
        return 1; //poprawna dana
}

void CDodatek::petla_poprawnosc(int dolna_granica,int gorna_granica, int &dana)
{

    int x=sprawdzenie(dolna_granica, gorna_granica, dana);
    if(x==1)
        cout<<"Zaczynajmy!"<<endl;

    while(x==0){
         cout<<"Podana wartość musi być z przedziału "<<dolna_granica<<" : "<< gorna_granica<<endl;
        cin>>dana;
        x=sprawdzenie(dolna_granica, gorna_granica, dana);
    }
}

int CDodatek::losuj_z_przedzialu(int ot, int to){
    srand (time(NULL));
    int a= ot+rand()%(to+1-ot);
    return a;
}

void CDodatek::powitanie(){
    cout<<endl<<endl<<endl;
    cout<<"****************  Witaj Użytkowniku na Wyspie!!!  ****************"<<endl<<endl;
    cout<<" Szybkie zasady : "<<endl<< " Na wyspie znajdują się rózne gatunki zwierząt, które mogą się PORUSZAĆ, ROZMNAŻAC oraz ATAKOWAC"<<endl<<" Wszystko obarczone jest prawdopodobienstwem spełnienia(poruszanie się zas to losowanie ruchu dol/0/gora,lewo/0/prawo) "<<endl;
     cout<<" Zwierzeta beda oznaczone na tablicy  postaci dwoch liter. "<<endl<<" Pierwsza litera bedzie od gatunku a druga od płci (K/M)"<<endl;
     cout<<"    Twoje umiejetnosci to: "<<endl<<"   1. Możliwość tworzenia zwierząt po skończeniu każdej tury"<<endl;
     cout<< "   2. Mozliwość nadawania imion zwierzętom"<<endl;
     cout<<"   3. Rozmiar kwadratowej wyspy"<<endl<<endl<<"Zacznijmy od tego ostatniego!"<<endl;

}



