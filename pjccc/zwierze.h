#ifndef ZWIERZE_H
#define ZWIERZE_H


class CZwierze{
protected:
    int wiek;
    int tura_terazniejsza;
    char plec;
public:

    CZwierze();
    virtual char sprawdz_plec()=0;
    virtual int sprawdz_wiek()=0;
    virtual int sprawdz_ture()=0;
    virtual ~CZwierze();
    virtual void wiek_plus_plus()=0;
    virtual void tura_plus_plus()=0;
    virtual void drukuj();
    virtual int daj_gatunek()=0;

};

#endif // ZWIERZE_H
