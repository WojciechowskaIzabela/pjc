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




char CGazela::sprawdz_plec(){
    if(plec=='k')
        return 'k';
    else
        return 'm';

}

void CGazela::drukuj()
{
    std::cout << "G" << plec;
}

void CGazela ::wiek_plus_plus(){
   wiek++;
}

int CGazela::sprawdz_wiek(){
     int x;
     x=wiek;
     return x;
}


void CGazela::tura_plus_plus(){
     tura_terazniejsza++;
}

int CGazela::sprawdz_ture(){
    int t;
    t=tura_terazniejsza;
    return t;
}


int CGazela::daj_gatunek(){
    return 'g';
}
