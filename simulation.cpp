#include <iostream>
#include "simulation.h"

using namespace std;

Symulacja::Symulacja()
{

d.powitanie();
}

void Symulacja::drukuj( CZwierze ***tablica)
{

    for (int i = 0; i < a; i++) {
            for (int j = 0; j <a; j++) {
                if(tablica[i][j]==NULL)
                    cout << " __";
                if (CLew* v = dynamic_cast<CLew*>(&(*tablica[i][j]))){

                    if(tablica[i][j]->plec=='k')
                    cout << " Lk";
                    else
                        cout<<" Lm";
                }
                if (CGazela* v = dynamic_cast<CGazela*>(&(*tablica[i][j]))){

                    if(tablica[i][j]->plec=='k')
                    cout << " Gk";
                    else
                        cout<<" Gm";
                }

                if (CKrokodyl* v = dynamic_cast<CKrokodyl*>(&(*tablica[i][j]))){
                    if(tablica[i][j]->plec=='k')
                    cout << " Kk";
                    else
                        cout<<" Km";
                }
                }
                 cout << endl;
            }

}


void Symulacja :: game()
{
    cout<<"Podaj proszę rozsądny rozmiar Wyspy:   ";
    cin>>a;
    d.petla_poprawnosc(5,30,a);

   przerwanie_symulacji=0;


   CZwierze***tab = new CZwierze ** [a];
       for (int i = 0; i < a; i++)
           tab[i] = new CZwierze*[a];


       t.startowe_zwierzeta(tab,a);
       drukuj(tab);
       cout<<endl<<endl<<endl;



   while(przerwanie_symulacji==0){

       t.przeprowadz_ture(tab,a);
       drukuj(tab);

       cout<<"Uzytkowniku czy chcesz dodac zwierze?! 1- Tak/0 - Nie"<<endl;
       int dodaj;
       cin>>dodaj;
       if(dodaj==1){
           int tu=t.tura_terazniejsza;
           u.dodaj_zwierze(tab,a,tu);
           drukuj(tab);
       }

       cout<<"Czy chcesz zakończyć symulacje?!"<<endl<<"Kliknij 1 jeśli tak, 0 jeśli chcesz kontunuować"<<endl;
       cin>>przerwanie_symulacji;

       if(przerwanie_symulacji==1){
           for (int i = 0; i < a; i++)
               delete [ ] tab [i];
           delete [ ] tab;
           cout<<endl<<endl<<"Do widzenia!!!"<<endl;
       }
}
}













