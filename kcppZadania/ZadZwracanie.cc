#include <iostream>
#include <string>

using namespace std;

int wartosc = 100;
int tablica[] = {100, 200, 300};

int przezWartosc() {
    return wartosc;
}

int& przezReferencje() {
    return wartosc;
}

int* przezWskaznik() {
    return &wartosc;
}

int* przezTablice() {
    return tablica;
}

int main() {
    cout << "Przez wartosc: " << przezWartosc() << endl;
    cout << "Przez referencje: " << przezReferencje() << endl;
    cout << "Przez wskaznik: " << przezWskaznik() << endl;
    
    int* wskaznikNaTablice = przezTablice();
    
    cout << "Przez tablice (element 0): " << wskaznikNaTablice[0] << endl;
    cout << "Przez tablice (element 1): " << wskaznikNaTablice[1] << endl;
    cout << "Przez tablice (element 2): " << wskaznikNaTablice[2] << endl;

    return 0;
}