#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESWA_H

#include <iostream>
#include "UzytkownikMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};

#endif
