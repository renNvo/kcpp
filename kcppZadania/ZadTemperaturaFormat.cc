#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::setw(7) << "Celsjusz" << "   " << std::setw(9) << "Fahrenheit" << '\n';
    std::cout << std::setw(7) << "-------" << "   " << std::setw(10) << "---------" << '\n';

    for (int c = -10; c <= 10; c += 5) {
        double f = c * 9.0 / 5.0 + 32.0;
        std::cout << std::setw(5) << c << "   " << std::setw(10) << std::fixed << std::setprecision(2) << f << '\n';
    }

    return 0;
}
