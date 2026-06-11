#include <iostream>

int main() {
    const int N = 5;
    double a[N], b[N], c[N];
    double *pa = a;
    double *pb = b;
    double *pc = c;

    std::cout << "Podaj 5 liczb zmiennoprzecinkowych:\n";
    for (int i = 0; i < N; ++i) {
        std::cin >> *(pa + i);
        *(pb + i) = *(pa + i) * 2;
    }

    for (int i = 0; i < N; ++i) {
        *(pc + i) = *(pa + i) + *(pb + i);
    }

    std::cout << "Tablica a:\n";
    for (double *p = a; p < a + N; ++p) {
        std::cout << *p << " ";
    }
    std::cout << "\n";

    std::cout << "Tablica b:\n";
    for (double *p = b; p < b + N; ++p) {
        std::cout << *p << " ";
    }
    std::cout << "\n";

    std::cout << "Tablica c:\n";
    for (double *p = c; p < c + N; ++p) {
        std::cout << *p << " ";
    }
    std::cout << "\n";

    return 0;
}
