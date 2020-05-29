#ifndef LEW_H
#define LEW_H
#include "zwierze.h"


class CLew : public CZwierze{

public:
    CLew (char = '.', int=0, int=0);
    ~CLew();

    char sprawdz_plec(CZwierze *zwierze) override;
   void wiek_plus_plus(CZwierze *zwierze) override;
    void drukuj() override;
    int sprawdz_wiek(CZwierze *zwierze) override;
};

#endif // LEW_H
