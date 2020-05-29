#ifndef KROKODYL_H
#define KROKODYL_H
#include "zwierze.h"

class CKrokodyl : public CZwierze{

public:
    CKrokodyl (char = '.', int=0, int=0);
    ~CKrokodyl();

    char sprawdz_plec(CZwierze *zwierze) override;
    void drukuj() override;
    void wiek_plus_plus(CZwierze *zwierze) override;
    int sprawdz_wiek(CZwierze *zwierze) override;
};

#endif // KROKODYL_H
