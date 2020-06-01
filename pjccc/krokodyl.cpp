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




char CKrokodyl::sprawdz_plec(){

    if(plec=='k')
        return 'k';
    else
        return 'm';
}

void CKrokodyl::drukuj()
{
    std::cout << "K" << plec;
}


void CKrokodyl ::wiek_plus_plus(){
    wiek++;
}


int CKrokodyl::sprawdz_wiek(){
     int x;
     x=wiek;
     return x;
}


void CKrokodyl::tura_plus_plus(){
    tura_terazniejsza++;
}


int CKrokodyl::sprawdz_ture(){
    int t;
    t=tura_terazniejsza;
    return t;
}

int CKrokodyl::daj_gatunek(){
    return 'k';
}
