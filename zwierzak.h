#ifndef ZWIERZAK_H
#define ZWIERZAK_H
#include <iostream>
#include "dodatki.h"


using namespace std;
 class CZwierze
 {

 public:
     virtual void porusz_sie(CZwierze ***tab,int rozmiar,int x, int y)=0;
     char plec;
     string imie;
     int dlugosc_zycia;
     int wiek;
     int tura_obecna;
     CZwierze();
 };







#endif // ZWIERZAK_H
