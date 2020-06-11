#ifndef ZWIERZE_H
#define ZWIERZE_H

/**
 * \brief Klasa CZwierze
 *
 * Abstrakcyjna klasa bazowa Zwierzat
 */


class CZwierze{
protected:
    /// Wiek zwierzecia
    int wiek;
    /// Tura, w trakcie ktorej jest zwierze
    int tura_terazniejsza;
    /// Plec zwierzecia
    char plec;
public:

    /**
     * \brief Konstruktor klasy CZwierze
     */
    CZwierze();
    /**
     * \brief Funkcja czysto wirtualna sprawdzajaca plec zwierzecia
     */
    virtual char sprawdz_plec()=0;
    /**
     * \brief Funkcja czysto wirtualna zwracajaca wiek zwierzecia
     */
    virtual int sprawdz_wiek()=0;
    /**
     * \brief Funkcja czysto wirtualna zwracajaca ture w trakcie ktorej jest zwierze
     */
    virtual int sprawdz_ture()=0;
    /**
     * \brief Wirtualny destruktor klasy CZwierze
     */
    virtual ~CZwierze();
    /**
     * \brief Funkcja czysto wirtualna postarzajaca zwierze
     */
    virtual void wiek_plus_plus()=0;
    /**
     * \brief Funkcja czysto wirtualna, ktora powoduje przejscia zwierzecia do nastepnej tury
     */
    virtual void tura_plus_plus()=0;
    /**
     * \brief Funkcja wirtualna drukujaca reprezentacje zwierzecia na tablicy
     */
    virtual void drukuj();
    /**
     * \brief Funkcja czysto wirtualna zwracajaca gatunek zwierzecia
     */
    virtual int daj_gatunek()=0;

};

#endif // ZWIERZE_H
