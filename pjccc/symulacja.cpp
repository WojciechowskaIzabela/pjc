#include <iostream>
#include "symulacja.h"

using namespace std;

CSymulacja :: CSymulacja (){
    cout<<"Zaczynajmy!"<<endl<<endl;
    uz.ustawTurka(&turka);
}


void CSymulacja::przeprowadz_symulacje(){

    przerwanie_symulacji=0;


    while(przerwanie_symulacji==0){


    turka.przeprowadz_ture();
    uz.czy_dodac_zwierze();
    stop_symulacji();





}

}
void CSymulacja :: stop_symulacji(){

   przerwanie_symulacji = uz.czy_przerwac_symulacje();

    if(przerwanie_symulacji==1){

       turka.~CTura();
       cout<<"Do zobaczenia!!!"<<endl;
    }

    }

