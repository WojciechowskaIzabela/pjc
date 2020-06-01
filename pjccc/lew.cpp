#include "lew.h"
#include <iostream>

using namespace std;

CLew::CLew(char _plec, int _tura ,int _wiek){
   plec=_plec;
   wiek=_wiek;
   tura_terazniejsza=_tura;
}

CLew::~CLew(){

    cout<<"Lew zakonczyl swoj zywot"<<endl;

}




char CLew::sprawdz_plec(){

    if(plec=='k')
        return 'k';
    else
        return 'm';
}

void CLew::drukuj()
{
    std::cout << "L" << plec;
}


void CLew ::wiek_plus_plus(){
    wiek++;
}


int CLew::sprawdz_wiek(){
     int x;
     x=wiek;
     return x;
}


void CLew::tura_plus_plus(){
    tura_terazniejsza++;
}


int CLew::sprawdz_ture(){
    int t;
    t=tura_terazniejsza;
    return t;
}

int CLew::daj_gatunek(){
    return 'l';
}
