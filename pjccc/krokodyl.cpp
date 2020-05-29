#include "krokodyl.h"
#include <iostream>

using namespace std;


CKrokodyl::CKrokodyl(char _plec, int _tura ,int _wiek){
   plec=_plec;
   wiek=_wiek;
   tura_terazniejsza=_tura;
}

CKrokodyl::~CKrokodyl(){

    cout<<"Krokodyl zakonczyl swoj zywot"<<endl;
}




char CKrokodyl::sprawdz_plec(CZwierze *zwierze){

    int k='k';
    int m='m';
    if(zwierze->plec==k)
        return k;

    else
        return m;
}

void CKrokodyl::drukuj()
{
    std::cout << "K" << plec;
}


void CKrokodyl ::wiek_plus_plus(CZwierze *zwierze){
    zwierze->wiek++;
}


int CKrokodyl::sprawdz_wiek(CZwierze *zwierze){
     int x;
     x=zwierze->wiek;
     return x;
}
