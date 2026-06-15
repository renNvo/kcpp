#include "../include/ZadLSilnia.h"
#include <iostream>

using namespace std;

void ZadLSilnia::wykonaj() {
    int liczba;
    long long silnia = 1; 
    long long sumaSilni = 0;

    cout << "Podaj liczbe do obliczenia silni: ";
    if (!(cin >> liczba)) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "To nie jest poprawna liczba!" << endl;
        return;
    }

    if (liczba < 0) {
        cout << "Silnia jest zdefiniowana tylko dla liczb nieujemnych." << endl;
        return;
    }

    if (liczba == 0) {
        cout << "Silnia z 0 wynosi: 1" << endl;
        cout << "Suma silni od 1 do 0 wynosi: 0" << endl;
        return;
    }

    for (int i = 1; i <= liczba; i++) {
        silnia *= i;
        sumaSilni += silnia;
    }

    cout << "Silnia z " << liczba << " wynosi: " << silnia << endl;
    cout << "Suma silni od 1 do " << liczba << " wynosi: " << sumaSilni << endl;
}

std::string ZadLSilnia::info() const {
    return "Zadanie 4.12: Obliczanie silni oraz sumy silni szeregu";
}
