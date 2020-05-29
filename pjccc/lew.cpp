#include "lew.h"
#include <iostream>

using namespace std;

CLew::CLew(char _plec, int _tura ,int _wiek):CZwierze{
   plec=_plec;
   wiek=_wiek;
   tura_terazniejsza=_tura;
}

CLew::~CLew(){

    cout<<"Lew zakonczyl swoj zywot"<<endl;
}




char CLew::sprawdz_plec(CZwierze *zwierze){
    int k='k';
    int m='m';
    if(zwierze->plec==k)
        return k;

    else
        return m;
}

void CLew::drukuj()
{
    std::cout << "L" << plec;
}


void CLew ::wiek_plus_plus(CZwierze *zwierze){
    zwierze->wiek++;
}


int CLew::sprawdz_wiek(CZwierze *zwierze){
     int x;
     x=zwierze->wiek;
     return x;
}
