#ifndef KROKODYL_H
#define KROKODYL_H
#include "zwierzak.h"

class CKrokodyl : public CZwierze
{
    public:

    CKrokodyl (char='.', int =0,string="bezimienny",int = 4,int=0);
    void porusz_sie(CZwierze ***tab, int rozmiar,int x, int y);
    ~CKrokodyl();

};

#endif // KROKODYL_H
