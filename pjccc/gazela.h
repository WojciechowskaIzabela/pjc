#ifndef GAZELA_H
#define GAZELA_H
#include "zwierze.h"

class CGazela : public CZwierze{

public:
    CGazela (char = '.', int=0, int=0);
    ~CGazela();

    char sprawdz_plec() override;
    void drukuj() override;
    void wiek_plus_plus() override;
    int sprawdz_wiek() override;
    int sprawdz_ture() override;
    void tura_plus_plus() override;
     int daj_gatunek() override;

};


#endif // GAZELA_H
