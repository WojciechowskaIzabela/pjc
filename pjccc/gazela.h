#ifndef GAZELA_H
#define GAZELA_H
#include "zwierze.h"

class CGazela : public CZwierze{

public:
    CGazela (char = '.', int=0, int=0);
    ~CGazela();

    char sprawdz_plec(CZwierze *zwierze) override;
    void drukuj() override;
    void wiek_plus_plus(CZwierze *zwierze) override;
    int sprawdz_wiek(CZwierze *zwierze) override;
};


#endif // GAZELA_H
