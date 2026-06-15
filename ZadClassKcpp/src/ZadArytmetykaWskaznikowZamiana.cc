#include "../include/ZadArytmetykaWskaznikowZamiana.h"
#include <iostream>

using namespace std;

void zamien(int* a, int* b) {
    int tymczasowa = *a;
    *a = *b;
    *b = tymczasowa;
}

void ZadArytmetykaWskaznikowZamiana::wykonaj() {
    int x = 5;
    int y = 10;

    cout << "Przed zamiana: x = " << x << ", y = " << y << endl;

    zamien(&x, &y);

    cout << "Po zamianie: x = " << x << ", y = " << y << endl;
}

std::string ZadArytmetykaWskaznikowZamiana::info() const {
    return "Zadanie 3.1: Zamiana wartosci zmiennych przy uzyciu wskaznikow";
}
