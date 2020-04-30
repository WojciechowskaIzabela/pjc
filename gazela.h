#ifndef GAZELA_H
#define GAZELA_H
#include "zwierzak.h"

class CGazela : public CZwierze
{
    public:

    CGazela (char='.', int =0,string="bezimienny",int = 7,int=0);
    void porusz_sie(CZwierze ***tablica,int rozmiar,int x, int y);

    ~CGazela();

};

#endif // GAZELA_H
