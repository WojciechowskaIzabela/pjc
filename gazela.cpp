#include "gazela.h"

using namespace std;

CGazela :: CGazela(char _plec,int tura, string _imie,int zycie,int _wiek)
{

tura_obecna=tura;
    plec=_plec;

    imie=_imie;
    dlugosc_zycia=zycie;
    wiek=_wiek;
}

CGazela :: ~CGazela()
{

}


void CGazela::porusz_sie(CZwierze ***tablica,int rozmiar,int x, int y){

    int pion;
      int poziom;
     CDodatek d;
     pion=d.losuj_z_przedzialu((-1),1);
     poziom=d.losuj_z_przedzialu((-1),1);

     while(pion+x>rozmiar || poziom+y>rozmiar || pion+x<0 || poziom+y<0){
         pion=d.losuj_z_przedzialu((-1),1);
         poziom=d.losuj_z_przedzialu((-1),1);
     }

     if(tablica[x+poziom][y+pion]==NULL){
         CZwierze *pomocnicze;
         pomocnicze=tablica[x+poziom][y+pion];
         tablica[x+poziom][y+pion]=tablica[x][y];
         tablica[x][y]=pomocnicze;


}

   }



