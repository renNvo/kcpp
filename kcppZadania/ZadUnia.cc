#include <iostream>

union MojaUnia {
    int calkowita;
    float zmiennoprzecinkowa;
    char tekst[4];
};

int main() {
    MojaUnia u;

    u.calkowita = 42;
    std::cout << "--- Poprawne uzycie ---\n";
    std::cout << "Zapisano int, odczytano int: " << u.calkowita << "\n";

    // 2. NIEBEZPIECZEŃSTWO: Nadpisanie wspólnego obszaru pamięci
    u.zmiennoprzecinkowa = 3.14f; 
    
    std::cout << "\n--- NIEBEZPIECZENSTWO: Nadpisanie danych ---\n";
    std::cout << "Zapisano float: " << u.zmiennoprzecinkowa << "\n";
    
    std::cout << "Blad - odczyt jako int: " << u.calkowita << "\n";

    u.tekst[0] = 'A';
    u.tekst[1] = 'B';
    u.tekst[2] = '\0';
    
    std::cout << "\n--- Kolejne nadpisanie (tekst) ---\n";
    std::cout << "Zapisano tekst: " << u.tekst << "\n";
    std::cout << "Blad - odczyt jako int: " << u.calkowita << "\n";

    std::cout << "\n--- Rozmiar unii w pamieci ---\n";
    std::cout << "Rozmiar MojaUnia: " << sizeof(u) << " bajty\n";
    std::cout << "(Wynika z rozmiaru najwiekszego pola, pola nie sumuja sie tak jak w strukturze)\n";

    return 0;
}