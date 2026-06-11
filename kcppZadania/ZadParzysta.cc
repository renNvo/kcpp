#include <iostream>

using namespace std;

// Przykład: n = 4 (binarnie: 100)
// n & 1 = 100 & 001 = 000 = 0, więc (0 == 0) zwraca true (parzysta)
// Przykład: n = 5 (binarnie: 101)
// n & 1 = 101 & 001 = 001 = 1, więc (1 == 0) zwraca false (nieparzysta)
bool isEven_bitwise(int n) {
	return (n & 1) == 0;
}

bool isEven_modulo(int n) {
	return (n % 2) == 0;
}

bool isEven_ternary(int n) {
	return (n % 2 == 0) ? true : false;
}

int main() {
	int n;
	cout << "Podaj liczbe calkowita: ";
	if(!(cin >> n)) return 0;

	cout << "Sprawdzenie (bitowe): " << (isEven_bitwise(n) ? "parzysta" : "nieparzysta") << '\n';
	cout << "Sprawdzenie (modulo): " << (isEven_modulo(n) ? "parzysta" : "nieparzysta") << '\n';
	cout << "Sprawdzenie (ternary): " << (isEven_ternary(n) ? "parzysta" : "nieparzysta") << '\n';

	return 0;
}

