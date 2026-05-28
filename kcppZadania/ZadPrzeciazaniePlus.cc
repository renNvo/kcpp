#include <iostream>

using namespace std;

class Punkt {
public:
    int x;
    int y;

    Punkt(int x, int y) {
        this->x = x;
        this->y = y;
    }

    Punkt() {
        this->x = 0;
        this->y = 0;
    }

    Punkt operator+(Punkt& drugi) {
        Punkt wynik;
        wynik.x = this->x + drugi.x;
        wynik.y = this->y + drugi.y;
        return wynik;
    }
};

int main() {
    Punkt p1(3, 5);
    Punkt p2(10, 20);

    Punkt p3 = p1 + p2;
    cout << "Wynik dodawania (p1 + p2): (" << p3.x << ", " << p3.y << ")" << endl;

    return 0;
}