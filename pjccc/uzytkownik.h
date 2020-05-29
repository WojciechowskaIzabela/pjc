#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H
#include "tura.h"
#include <ctime>
#include <cstdlib>
#include <iostream>


class CUzytkownik{
private:
    CTura *turka = NULL ;

public:
    CUzytkownik ();
    void ustawTurka(CTura* t) { turka = t; }
    int czy_przerwac_symulacje();
    void czy_dodac_zwierze();
};

#endif // UZYTKOWNIK_H
