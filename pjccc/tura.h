#ifndef TURA_H
#define TURA_H

#include <vector>

#include "zwierze.h"
#include "krokodyl.h"
#include "lew.h"
#include "gazela.h"



class CZwierze;

class CTura{

private:

    std::vector<std::vector<CZwierze*> > tablica;
    int rozmiar;
    int tura_obecna=1;


public:

    CTura();
    CTura(const CTura&) = delete;
    ~CTura();

    void drukuj_tablice();
    void przeprowadz_ture();
    void zwierzeta_startowe();
    void wczytaj_rozmiar_planszy();
    void dodaj_zwierze();
    void narodziny(char z); //nie w diagram
    void postarz();
    void porusz();
    void interakcje(int i, int j); // d
};

#endif // TURA_H
