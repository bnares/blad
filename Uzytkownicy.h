#include <iostream>
#ifndef  UZYTKOWNICY_H

#define UZYTKOWNICY_H

using namespace std;

class Uzytkownik
{
    int id;
    string login;
    string haslo;

public:
    int pobierzId();
    string pobierzLogin();
    string pobierzHaslo();


    void ustawId(int liczba);
    void ustawLogin(string nowyLogin);
    void ustawHaslo(string noweHaslo);

};



#endif
