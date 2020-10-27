#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>

using namespace std;

class Adresat
{
    int idAdresata;
    int idUzytkownika;
    string imie, nazwisko, numerTelefonu, email, adres;
public:
    Adresat(int idUzytkownika=0, int idAdresata=0, string imie="", string nazwisko="", string numerTelefonu="", string email="", string adres="")
    {
        this->idUzytkownika = idUzytkownika;
        this->idAdresata = idAdresata;
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->numerTelefonu = numerTelefonu;
        this->email = email;
        this->adres = adres;
    }
    void ustawIdAdresata(int noweId);
    void ustawIdUzytkownika(int noweIdUzytkownika);
    void ustawImie(string noweImie);
    void ustawNazwisko(string noweNazwisko);
    void ustawNumerTelefonu(string nowyNumer);
    void ustawEmail(string nowyEmail);
    void ustawAdres(string nowyAdres);

    int pobierzIdAdresata();
    int pobierzIdUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTelefonu();
    string pobierzEmail();
    string pobierzAdres();
};

#endif
