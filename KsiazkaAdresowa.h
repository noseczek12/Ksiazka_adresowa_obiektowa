#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESWA_H

#include <iostream>
#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"
#include "MetodyPomocnicze.h"

using namespace std;

class KsiazkaAdresowa {
    MetodyPomocnicze metodyPomocnicze;
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer *adresatMenedzer;
    //PlikZAdresatami plikZAdresatami;
    const string NAZWA_PLIKU_Z_ADRESATAMI;
public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
    : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
    {
        adresatMenedzer = NULL;
        vector<Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    };
    ~KsiazkaAdresowa()
    {
        delete adresatMenedzer;
        adresatMenedzer = NULL;
    }
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    char wybierzOpcjeZMenuGlownego();
    bool czyUzytkownikJestZalogowany();
    char wybierzOpcjeZMenuUzytkownika();
    void ustawIdZalogowanegoUzytkownika(int noweId);
    void dodajAdresata();
    void wyswietlWszystkichAdesatow();
    vector<Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void wylogowanieUzytkownika();
    int usunAdresata();
    void edytujAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
};


#endif
