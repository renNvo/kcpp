#include <iostream>

using namespace std;

void zamien(int* a, int* b) {
    int tymczasowa = *a;
    *a = *b;
    *b = tymczasowa;
}

int main() {
    int x = 5;
    int y = 10;

    cout << "Przed zamiana: x = " << x << ", y = " << y << endl;

    zamien(&x, &y);

    cout << "Po zamianie: x = " << x << ", y = " << y << endl;

    return 0;
}