#ifndef TURA_H
#define TURA_H

#include <vector>

#include "zwierze.h"
#include "krokodyl.h"
#include "lew.h"
#include "gazela.h"


class CZwierze;

/**
 * \brief Klasa CTura
 *Klasa odpowiadajaca za przeprowadzenie tury.
 */

class CTura{

private:
    /// Plansza w postaci tablicy
    std::vector<std::vector<CZwierze*> > tablica;
    /// Rozmair planszy
    int rozmiar;
    /// Obecna tura symulacji
    int tura_obecna=1;


public:
    /**
     * \brief Konstruktor klasy CTura
     */
    CTura() {};
    /**
     * \brief Zabezpieczenie przed tworzeniem kopii obiektu turka, klasy CTura
     */
    CTura(const CTura&) = delete;
    /**
     * \brief  Destruktor klasy CTura
     *Usuwa plansze.
     */
    ~CTura();
    /**
     * \brief Funkcja odpowiadajaca za wydrukowanie planszy
     */
    void drukuj_tablice();
    /**
     * \brief Funkcja odpowiadajaca za przeprowadzenie symulacji
     */
    void przeprowadz_ture();
    /**
     * \brief Funkcja odpowiadajaca za poczatkowe zwierzeta.
     * Funkcja losuje plec oraz gatunek zwierzat, z ktorymi rozpoczniemy symulacje
     */
    void zwierzeta_startowe();
    /**
     * \brief Funkcja wczytujaca rozmiar planszy
     */
    void wczytaj_rozmiar_planszy();
    /**
     * \brief Funkcja dodajaca zwierze wybrane przez uzytkownika
     */
    void dodaj_zwierze();
    /**
     * \brief Funkcja odpowiadajaca za narodizny nowego zwierzecia
     *\param z okreslajacy gatunek zwierzecia
     */
    void narodziny(char z);
    /**
     * \brief Funkcja odpowiadajaca za postarzenie wszystkich zwierzat
     */
    void postarz();
    /**
     * \brief Funkcja odpowiadajaca za poruszanie sie zwierzat po planszy
     */
    void porusz();
    /**
     * \brief Funkcja interakcje
     *Odpowiada za interkacje zwierzecia ze zwierzetami na sasiadujacych polach.
     */
    void interakcje(int i, int j);
};

#endif // TURA_H
