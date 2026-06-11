#include <iostream>
#include <iomanip>

int main() {
    using std::cout;
    using std::setw;
    using std::left;
    using std::right;
    using std::fixed;
    using std::setprecision;

    cout << "| " << left << setw(15) << "Nazwa" << " | "
         << right << setw(8) << "Cena" << " | "
         << right << setw(7) << "Ilosc" << " |" << '\n';

    cout << "|" << std::string(17, '-')
         << "|" << std::string(10, '-')
         << "|" << std::string(9, '-') << "|" << '\n';

    cout << "| " << left << setw(15) << "Chleb" << " | "
         << right << setw(8) << fixed << setprecision(2) << 4.99 << " | "
         << right << setw(7) << 5 << " |" << '\n';

    cout << "| " << left << setw(15) << "Mleko" << " | "
         << right << setw(8) << fixed << setprecision(2) << 3.20 << " | "
         << right << setw(7) << 10 << " |" << '\n';

    cout << "| " << left << setw(15) << "Jajka (10 szt)" << " | "
         << right << setw(8) << fixed << setprecision(2) << 8.50 << " | "
         << right << setw(7) << 3 << " |" << '\n';

    return 0;
}
