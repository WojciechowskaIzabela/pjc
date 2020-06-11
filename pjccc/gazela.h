#ifndef GAZELA_H
#define GAZELA_H
#include "zwierze.h"

/**
 * \brief Klasa CGazela
 *
 * Klasa pochodna klasy CZwierze.
 */

class CGazela : public CZwierze{

public:
    /**
     * \brief Konstruktor klasy CGazela
     *Jezeli zostanie wywolany bez argumentow, tworzy obiekt o parametrach
     * \c plec \c = \c .
     *\c tura_terazniejsza \c = \c 0
     *\c wiek \c = \c 0
     *
     * \param _plec plec zwierzecia (domyslnie przymuje wartosc tura '.')
     * \param _tura (domyslnie przyjmuje wartosc 0)
     * \param _wiek wiek zwierzecia   (domyslnie przyjmuje wartosc 0)
     *
     */
    CGazela (char = '.', int=0, int=0);
    /**
     * \brief Destruktor klasy CGazela
     *Informuje nas kiedy zwierze skonczy swoj zywot.
     */
    ~CGazela();
    /**
     * \brief Funkcja zwracajaca plec zwierzecia
     *\return plec
     */
    char sprawdz_plec() override;
    /**
     * \brief Funkcja drukujaca reprezentacje zwierzecia na tablicy.
     */
    void drukuj() override;
    /**
     * \brief Funkcja postarzajaca zwierze.
     */
    void wiek_plus_plus() override;
    /**
     * \brief Funkcja zwracajaca wiek zwierzecia
     *\return wiek
     */
    int sprawdz_wiek() override;
    /**
     * \brief Funkcja zwracajaca ture, w ktorej znajduje sie zwierze
     *\return tura_obecna
     */
    int sprawdz_ture() override;
    /**
     * \brief Funkcja, ktora powoduje przejscia zwierzecia do nastepnej tury
     */
    void tura_plus_plus() override;
    /**
     * \brief Funkcja zwracajaca gatunek zwierzecia.
     *\return gatunek
     */
     int daj_gatunek() override;

};


#endif // GAZELA_H
