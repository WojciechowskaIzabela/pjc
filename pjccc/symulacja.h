#ifndef SYMULACJA_H
#define SYMULACJA_H
#include "uzytkownik.h"

using namespace std;

class CSymulacja{

   CTura turka;
   void stop_symulacji();
   int przerwanie_symulacji;
   CUzytkownik uz;

public:

    CSymulacja();
    void przeprowadz_symulacje();
    CTura* dajTurka() { return &turka; }

};

#endif // SYMULACJA_H
