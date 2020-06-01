#ifndef KROKODYL_H
#define KROKODYL_H
#include "zwierze.h"

class CKrokodyl : public CZwierze{

public:
    CKrokodyl (char = '.', int=0, int=0);
    ~CKrokodyl();

    char sprawdz_plec() override;
    void drukuj() override;
    void wiek_plus_plus() override;
    int sprawdz_wiek() override;
    void tura_plus_plus() override;
    int sprawdz_ture() override;
     int daj_gatunek() override;
};

#endif // KROKODYL_H
