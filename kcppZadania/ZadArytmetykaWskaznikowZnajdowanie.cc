#include <iostream>

using namespace std;

int* maxElement(int* tablica, int rozmiar) {
    int* max = tablica;

    for (int i = 1; i < rozmiar; i++) {
        if (*(tablica + i) > *maxWsk) {
            max = tablica + i;
        }
    }

    return max;
}

int main() {
    int liczby[] = {12, 45, 7, 91, 23, 64};
    int rozmiar = 6;

    cout << "Znajduje sie pod adresem: " << maxElement(liczby, rozmiar) << endl;

    return 0;
}