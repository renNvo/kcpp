#include <iostream>

int main() {
    std::cout << "=== Wypisywanie na ekran ===" << std::endl;
    std::cout << "Witaj w programie!" << std::endl;
    
    std::cerr << "\n=== Zapisywanie do strumienia bledow ===" << std::endl;
    std::cerr << "To jest komunikat bledu" << std::endl;
    
    std::cout << "\nNormalny komunikat" << std::endl;
    std::cerr << "Komunikat bledu" << std::endl;
    
    return 0;
}
