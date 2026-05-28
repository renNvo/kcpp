#include <iostream>
#include <string>

using namespace std;

int dodaj(int a, int b) {
    return a + b;
}

double dodaj(double a, double b) {
    return a + b;
}

string dodaj(string tekst1, string tekst2) {
    return tekst1 + tekst2;
}

int main() {
    cout << "Wynik dodawania int: " << dodaj(10, 15) << endl;
    cout << "Wynik dodawania double: " << dodaj(3.5, 2.25) << endl;

    string tekstA = "Programowanie ";
    string tekstB = "w C++";
    cout << "Wynik konkatenacji string: " << dodaj(tekstA, tekstB) << endl;

    return 0;
}