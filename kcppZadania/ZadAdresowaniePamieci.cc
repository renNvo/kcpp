#include <iostream>

// Przykład adresowania pamięci dla zadeklarowanych zmiennych.
// W typowym programie zmienne lokalne są przechowywane na stosie,
// a stos na wielu architekturach rośnie "w dół", czyli kolejne adresy
// zmiennych lokalnych maleją. Jednak kierunek przydzielania pamięci
// zależy od implementacji kompilatora i systemu operacyjnego.
// Poniższy program wypisuje adresy deklarowanych zmiennych,
// aby zobaczyć ich lokalizację w pamięci.
int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    std::cout << "Adres zmiennej a: " << &a << '\n';
    std::cout << "Adres zmiennej b: " << &b << '\n';
    std::cout << "Adres zmiennej c: " << &c << '\n';

    // Jeżeli adresy zmiennych lokalnych maleją (np. a > b > c),
    // to nasuwa się, że stos może rosnąć w dół.
    // Nie jest to jednak reguła gwarantowana dla wszystkich środowisk.
    return 0;
}
