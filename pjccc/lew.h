#ifndef LEW_H
#define LEW_H
#include "zwierze.h"


class CLew : public CZwierze{

public:
    CLew (char = '.', int=0, int=0);
    ~CLew();

    char sprawdz_plec() override;
    void wiek_plus_plus() override;
    void drukuj() override;
    int sprawdz_wiek() override;
    void tura_plus_plus() override;
    int sprawdz_ture() override;
    int daj_gatunek() override;
};

#endif // LEW_H
