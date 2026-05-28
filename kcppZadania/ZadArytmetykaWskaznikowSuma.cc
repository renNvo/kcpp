#include <iostream>

using namespace std;

int suma(int* tablica, int rozmiar) {
    int wynik = 0;
    for (int i = 0; i < rozmiar; i++) {
        wynik += *(tablica + i);
    }
    return wynik;
}

int main() {
    int liczby[] = {1, 2, 3, 4, 5};
    int rozmiar = 5;

    cout << "Suma elementow tablicy: " << suma(liczby, rozmiar) << endl;

    return 0;
}