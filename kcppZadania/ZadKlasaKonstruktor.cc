#include <iostream>

class MojaKlasa {
private:
    int x;
    double y;

public:
    MojaKlasa() {
        x = 0;
        y = 0.0;
        std::cout << "[Klasa] Wywolano konstruktor domyslny\n";
    }

    MojaKlasa(int argX, double argY) : x(argX), y(argY) {
        std::cout << "[Klasa] Wywolano konstruktor z argumentami\n";
    }

    ~MojaKlasa() {
        std::cout << "[Klasa] Wywolano destruktor\n";
    }

    void wyswietl() {
        std::cout << "x = " << x << ", y = " << y << "\n";
    }
};

int main() {
    std::cout << "Tworzenie obiektow klasy\n";
    MojaKlasa k1;
    k1.wyswietl();

    MojaKlasa k2(10, 3.14);
    k2.wyswietl();
    
    return 0;
}