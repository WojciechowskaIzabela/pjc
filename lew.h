#ifndef LEW_H
#define LEW_H
#include "zwierzak.h"

using namespace std;

class CLew : public CZwierze
{
public:


    CLew (char='.', int =0,string="bezimienny",int = 5,int=0);
   void porusz_sie(CZwierze ***tablica,int rozmiar,int x, int y);

    ~CLew();


     };


#endif // LEW_H
