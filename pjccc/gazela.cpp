#include "gazela.h"
#include <iostream>

using namespace std;

CGazela::CGazela(char _plec, int _tura ,int _wiek){
   plec=_plec;
   wiek=_wiek;
   tura_terazniejsza=_tura;
}

CGazela::~CGazela(){

    cout<<"Gazela zakonczyla swoj zywot"<<endl;
}




char CGazela::sprawdz_plec(CZwierze *zwierze){
    int k='k';
    int m='m';
    if(zwierze->plec==k)
        return k;

    else
        return m;
}

void CGazela::drukuj()
{
    std::cout << "G" << plec;
}

void CGazela ::wiek_plus_plus(CZwierze *zwierze){
    zwierze->wiek++;
}

int CGazela::sprawdz_wiek(CZwierze *zwierze){
     int x;
     x=zwierze->wiek;
     return x;
}
