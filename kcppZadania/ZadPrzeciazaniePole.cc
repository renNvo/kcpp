#include <iostream>

using namespace std;

double pole(double a) {
    return a * a;
}

double pole(double a, double b) {
    return a * b;
}

double pole(float promien) {
    return 3.14 * promien * promien;
}

int main() {
    double a = 5.0;
    double b = 6.0;
    float r = 4.0;

    cout << "Pole kwadratu o boku " << a << ": " << pole(a) << endl;

    cout << "Pole prostokata o bokach " << a << " i " << b << ": " << pole(a, b) << endl;

    cout << "Pole kola o promieniu " << r << ": " << pole(r) << endl;

    return 0;
}