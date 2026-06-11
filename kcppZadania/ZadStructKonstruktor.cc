#include <iostream>

struct MojaStruktura {
    int x;
    double y;

    MojaStruktura() : x(0), y(0.0) {
        std::cout << "[Struktura] Wywolano konstruktor domyslny\n";
    }

    MojaStruktura(int argX, double argY) {
        x = argX;
        y = argY;
        std::cout << "[Struktura] Wywolano konstruktor z argumentami\n";
    }

    ~MojaStruktura() {
        std::cout << "[Struktura] Wywolano destruktor\n";
    }

    void wyswietl() {
        std::cout << "x = " << x << ", y = " << y << "\n";
    }
};

int main() {
    std::cout << "Tworzenie obiektow struktury\n";
    MojaStruktura s1;
    s1.wyswietl();

    MojaStruktura s2(20, 6.28);
    s2.wyswietl();

    return 0;
}