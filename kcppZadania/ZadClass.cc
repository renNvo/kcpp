#include <iostream>

class Klasa {
private:
    int prywatnaLiczba;

protected:
    int chronionaLiczba;

public:
    int publicznaLiczba;

    void setPrivate(int liczba) {
        prywatnaLiczba = liczba;
    }

    void setProtected(int liczba);

    void display();
};

void Klasa::setProtected(int liczba) {
    chronionaLiczba = liczba;
}

inline void Klasa::display() {
    std::cout << "Wartosc public: " << publicznaLiczba << "\n";
    std::cout << "Wartosc protected: " << chronionaLiczba << "\n";
    std::cout << "Wartosc private: " << prywatnaLiczba << "\n";
}

int main() {
    Klasa obj;

    obj.publicznaLiczba = 10;
    obj.setProtected(20);
    obj.setPrivate(30);

    std::cout << "Dane klasy:\n";
    obj.display();

    return 0;
}