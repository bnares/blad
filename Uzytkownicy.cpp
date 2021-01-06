#include <iostream>

using namespace std;

#include "Uzytkownicy.h"


string Uzytkownik::pobierzHaslo()
{
    return haslo;
}

string Uzytkownik::pobierzLogin()
{
    return login;
}

int Uzytkownik::pobierzId()
{
    return id;
}

void Uzytkownik::ustawHaslo(string noweHaslo)
{
    haslo = noweHaslo;
}

void Uzytkownik::ustawLogin(string nowyLogin)
{
    login = nowyLogin;
}

void Uzytkownik::ustawId(int noweId)
{
    id = noweId;
}



