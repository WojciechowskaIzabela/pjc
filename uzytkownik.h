#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H
#include"zwierzak.h"
#include "tura.h"


using namespace std;

class Uzytkownik{


public:
    Uzytkownik();

    void dodaj_zwierze(CZwierze ***tablica,int rozmiar, int tura);
};

#endif // UZYTKOWNIK_H
