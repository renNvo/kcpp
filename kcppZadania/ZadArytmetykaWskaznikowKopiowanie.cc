#include <iostream>

void kopiujTablice(const int* zrodlo, int* cel, int n)
{
    const int* koniec = zrodlo + n;

    while (zrodlo < koniec) {
        *cel++ = *zrodlo++;
    }
}

int main()
{
    const int n = 5;
    int tablica1[n] = {1, 2, 3, 4, 5};
    int tablica2[n] = {0};

    std::cout << "tablica1: ";
    for (int i = 0; i < n; ++i) {
        std::cout << tablica1[i] << (i + 1 < n ? " " : "\n");
    }

    kopiujTablice(tablica1, tablica2, n);

    std::cout << "tablica2: ";
    for (int i = 0; i < n; ++i) {
        std::cout << tablica2[i] << (i + 1 < n ? " " : "\n");
    }

    return 0;
}
