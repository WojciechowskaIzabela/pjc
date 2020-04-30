#ifndef TURA_H
#define TURA_H
#include "zwierzak.h"

#include "lew.h"
#include "krokodyl.h"
#include "gazela.h"



class CTura{

   CDodatek k;
public:
    int tura_terazniejsza;
     CTura();
    void startowe_zwierzeta(CZwierze ***tablica, int rozmiar);
    void stworz_losowo(CZwierze ***tablica,int rozmiar, int tura, char jakie_zwierze);

    void przeprowadz_ture(CZwierze ***tablica, int rozmiar);

};

#endif // TURA_H
