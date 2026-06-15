#include "../include/ZadPrzeciazaniePotega.h"
#include <iostream>
#include <cmath>

using namespace std;

int ZadPrzeciazaniePotega::potega(int podstawa, int wykladnik) {
    return pow(podstawa, wykladnik);
}

double ZadPrzeciazaniePotega::potega(double podstawa, int wykladnik) {
    return pow(podstawa, wykladnik);
}

void ZadPrzeciazaniePotega::wykonaj() {
    cout << "Potega int 2^10: " << potega(2, 10) << endl;
    cout << "Potega double 2.5^10: " << potega(2.5, 10) << endl;
}

std::string ZadPrzeciazaniePotega::info() const {
    return "Zadanie 2.5: Przeciazanie funkcji. Obliczanie potegi dla typow int i double.";
}
