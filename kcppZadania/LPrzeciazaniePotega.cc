#include <iostream>
#include <cmath>

using namespace std;

int potega(int podstawa, int wykladnik) {
    return pow(podstawa, wykladnik);
}

double potega(double podstawa, int wykladnik) {
    return pow(podstawa, wykladnik);
}

int main() {
    cout << "Potega int: " << potega(2, 10) << endl;
    cout << "Potega double: " << potega(2.5, 10) << endl;

    return 0;
}