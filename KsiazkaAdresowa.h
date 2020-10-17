#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESWA_H

#include <iostream>
#include "UzytkownikMenedzer.h"
#include "MetodyPomocnicze.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenedzer uzytkownikMenedzer;
    MetodyPomocnicze metodyPomocnicze;
public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami) {
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    char wybierzOpcjeZMenuGlownego();
    bool czyUzytkownikJestZalogowany();
    char wybierzOpcjeZMenuUzytkownika();
    void ustawIdZalogowanegoUzytkownika(int noweId);
};

#endif
