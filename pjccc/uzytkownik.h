#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H
#include "tura.h"
#include <ctime>
#include <cstdlib>
#include <iostream>

/**
 * \brief Klasa CUzytkownik
 *
 * Klasa odpowaidajaca za komunikacje z Uzytkownikiem.
 *Jest to klasa, ktora okresla jego "moce".
 */
class CUzytkownik{

private:
    /// Wskaznik na obiekt klasy CTura
    CTura *turka = NULL ;

public:
    /**
     * \brief Konstruktor klasy CUzytkownik
     */
    CUzytkownik ();
    /**
     * \brief Funkcja Ustawiajaca Turke
     *Funkcja ustawiajaca wskaznik do obiektu klasy CTura, ktory zostal
     *stworzony w klasie CSymulacja.
     *
     */
    void ustawTurka(CTura* t) { turka = t; }
    /**
     * \brief Funkcja odpowiadajca za przerwanie symulacji.
     *Uzytkownik jest proszony o podanie liczby, ktora zakonczy symulacje -1
     *lub 0 - kontunuowanie symulacji.
     * \return p
     */
    int czy_przerwac_symulacje();
    /**
     * \brief Funkcja odpowiadajaca za dodanie zwierzecia.
     *Uzytkownik jest pytany czy chce dodac zwierze.
     *Jesli kliknie 1 to jest proszony o podanie gatunku, plci oraz umiejscowienia zwierzecia na planszy.
     */
    void czy_dodac_zwierze();
};

#endif // UZYTKOWNIK_H
