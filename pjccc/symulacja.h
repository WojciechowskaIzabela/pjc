#ifndef SYMULACJA_H
#define SYMULACJA_H
#include "uzytkownik.h"

using namespace std;

/**
 * \brief Klasa CSymulacja
 *
 * Klasa, ktora odpowiada za przeprowadzenie symulacji.
 */

class CSymulacja{
  /// Obiekt klasy CTura
   CTura turka;
   /// Zmienna odpowiadajaca za przerwanie symulacji
   int przerwanie_symulacji;
   /// Obiekt klasy CUzytkownik
   CUzytkownik uz;
   /**
    * \brief Funkcja odpowiadajaca za przerwanie symulacji.
    */
   void stop_symulacji();

public:
   /**
    * \brief Konstruktor klasy CSymulacja
    */
    CSymulacja();
    /**
     * \brief Funkcja odpowiadajaca za przerpowadzenie symulacji
     */
    void przeprowadz_symulacje();
    /**
     * \brief Wskaznik na obiekt turka klasy CTura
     */
    CTura* dajTurka() { return &turka; }

};

#endif // SYMULACJA_H
