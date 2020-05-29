#ifndef ZWIERZE_H
#define ZWIERZE_H


class CZwierze{
protected:
    int wiek;
public:
    char plec;
    CZwierze();
    virtual char sprawdz_plec(CZwierze *zwierze)=0;
    virtual int sprawdz_wiek(CZwierze *zwierze)=0;
    int tura_terazniejsza;
    virtual ~CZwierze();
    virtual void wiek_plus_plus(CZwierze *zwierze)=0;

    virtual void drukuj();
};

#endif // ZWIERZE_H
