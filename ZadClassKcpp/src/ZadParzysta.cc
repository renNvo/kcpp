#include "../include/ZadParzysta.h"
#include <iostream>

bool ZadParzysta::isEvenBitwise(int n) {
    return (n & 1) == 0;
}

bool ZadParzysta::isEvenModulo(int n) {
    return (n % 2) == 0;
}
 
bool ZadParzysta::isEvenTernary(int n) {
    return (n % 2 == 0) ? true : false;
}
 
void ZadParzysta::wykonaj() {
	int n;
	std::cout << "Podaj liczbe calkowita: ";
	std::cin >> n;

	std::cout << "Sprawdzenie (bitowe): " << (isEvenBitwise(n) ? "parzysta" : "nieparzysta") << '\n';
	std::cout << "Sprawdzenie (modulo): " << (isEvenModulo(n) ? "parzysta" : "nieparzysta") << '\n';
	std::cout << "Sprawdzenie (ternary): " << (isEvenTernary(n) ? "parzysta" : "nieparzysta") << '\n';
}

std::string ZadParzysta::info() const {
    return "Zadanie 4.7: Sprawdzanie parzystosci liczby na trzy sposoby (bitowo, modulo, operator warunkowy).";
}