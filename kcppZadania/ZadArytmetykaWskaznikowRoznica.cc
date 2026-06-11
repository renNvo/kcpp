#include <iostream>

int main() {
    int tablica[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *wsk1 = &tablica[2];
    int *wsk2 = &tablica[7];
    
    ptrdiff_t roznica = wsk2 - wsk1;

    std::cout << "Tablica: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << tablica[i] << (i < 9 ? ", " : "\n");
    }
    std::cout << "Roznica miedzy wskaznikam o indeksach 2 i 7 to: " << roznica << " elementy\n";

    return 0;
}
