#include "../include/ZadArytmetykaWskaznikowSuma.h"
#include <iostream>

using namespace std;

int ZadArytmetykaWskaznikowSuma::suma(int* tablica, int rozmiar) {
    int wynik = 0;
    for (int i = 0; i < rozmiar; i++) {
        wynik += *(tablica + i);
    }
    return wynik;
}

void ZadArytmetykaWskaznikowSuma::wykonaj() {
    int liczby[] = {1, 2, 3, 4, 5};
    int rozmiar = 5;

    cout << "Suma elementow tablicy (arytmetyka wskaznikow): " << suma(liczby, rozmiar) << endl;
}

std::string ZadArytmetykaWskaznikowSuma::info() const {
    return "Zadanie 3.2: Arytmetyka wskaznikow. Obliczanie sumy elementow tablicy przy uzyciu wskaznikow.";
}
