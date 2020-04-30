#ifndef SIMULATION_H
#define SIMULATION_H
#include"zwierzak.h"
#include <iostream>
#include "uzytkownik.h"
#include "tura.h"



class Symulacja
{
    int przerwanie_symulacji;
    int a;  

public:

    CDodatek d;
    Uzytkownik u;
    CTura t;
    Symulacja();

    void game();
    void drukuj(CZwierze ***tablica);

};

#endif // SIMULATION_H
