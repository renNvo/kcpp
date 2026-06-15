#include "../include/ZadLGra.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void ZadLGra::wykonaj() {
    srand(time(0));
    int poziom, zakres_max;
    
    cout << "Wybierz poziom trudnosci:" << endl;
    cout << "1 - Latwy (1-50)" << endl;
    cout << "2 - Sredni (1-100)" << endl;
    cout << "3 - Trudny (1-200)" << endl;
    cout << "Twoj wybor: ";
    
    if (!(cin >> poziom)) {
        cin.clear();
        cin.ignore(1000, '\n');
        poziom = 0;
    }
    
    if (poziom == 1) {
        zakres_max = 50;
    } else if (poziom == 2) {
        zakres_max = 100;
    } else if (poziom == 3) {
        zakres_max = 200;
    } else {
        cout << "Nieprawidlowy wybor, ustawiam poziom Sredni." << endl;
        zakres_max = 100;
    }
    
    int wylosowana = rand() % zakres_max + 1;
    int proba, licznik = 0;
    const int MAX_PROB = 10;

    cout << "Zgadnij liczbe (1-" << zakres_max << "):" << endl;

    while (licznik < MAX_PROB) {
        cout << "Proba " << licznik + 1 << "/" << MAX_PROB << ": ";
        if (!(cin >> proba)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "To nie jest liczba!" << endl;
            continue;
        }
        licznik++;

        if (proba < wylosowana) {
            cout << "Za malo! Probuj dalej." << endl;
        } else if (proba > wylosowana) {
            cout << "Za duzo! Probuj dalej." << endl;
        } else {
            cout << "Brawo! Zgadles w " << licznik << " probach." << endl;
            return;
        }
    }
    
    cout << "Koniec prob! Prawidlowa liczba to: " << wylosowana << endl;
}

std::string ZadLGra::info() const {
    return "Zadanie 4.15: Gra w zgadywanie liczby";
}
