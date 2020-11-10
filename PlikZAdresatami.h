#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <cstdlib>
#include <fstream>
#include <algorithm>

using namespace std;

#include "MetodyPomocnicze.h"
#include "Adresat.h"
#include "PlikTekstowy.h"

class PlikZAdresatami: public PlikTekstowy
{
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    const string nazwaTymczasowegoPlikuZAdresatami;
    int idOstatniegoAdresata;
    MetodyPomocnicze metodyPomocnicze;
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
public:
    PlikZAdresatami(string nazwaPliku) :
        PlikTekstowy(nazwaPliku), nazwaTymczasowegoPlikuZAdresatami("Tymczas.txt")
    {
        idOstatniegoAdresata = 0;
    }
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void ustawIdOstatniegoAdresata(int noweIdOstatniegoAdresata);
    int pobierzIdOstatniegoAdresata();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    bool dopiszAdresataDoPliku(Adresat adresat);
    int podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata, int idOstatniegoAdresata);
    int pobierzZPlikuIdOstatniegoAdresata();
    void usunWybranegoAdresataZPliku(int idUsunietegoAdresata);
    void edytujWybranegoAdresataZPliku(int idEdytowanegoAdresata, string liniaZDanymiAdresataOddzielonePionowymiKreskami);
};

#endif
