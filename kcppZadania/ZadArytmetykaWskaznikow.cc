#include <iostream>

using namespace std;

void Funkcja1()
{
    int tab[7] = {0, 0, 0, 0, 0, 0, 0};
    int *p = tab;

    cout << "Funkcja1() - operacje na wskazniku:\n";
    p++;
    cout << "1. p++ -> p wskazuje na tab[" << (p - tab) << "], *p=" << *p << "\n";
    ++p;
    cout << "2. ++p -> p wskazuje na tab[" << (p - tab) << "], *p=" << *p << "\n";
    ++*p;
    cout << "3. ++*p -> tab[" << (p - tab) << "]=" << tab[p - tab] << "\n";
    ++(*p);
    cout << "4. ++(*p) -> tab[" << (p - tab) << "]=" << tab[p - tab] << "\n";
    ++*(p);
    cout << "5. ++*(p) -> tab[" << (p - tab) << "]=" << tab[p - tab] << "\n";
    *p++;
    cout << "6. *p++ -> p wskazuje na tab[" << (p - tab) << "], *p=" << *p << "\n";
    (*p)++;
    cout << "7. (*p)++ -> tab[" << (p - tab) << "]=" << tab[p - tab] << "\n";
    *(p)++;
    cout << "8. *(p)++ -> p wskazuje na tab[" << (p - tab) << "], *p=" << *p << "\n";
    *++p;
    cout << "9. *++p -> p wskazuje na tab[" << (p - tab) << "], *p=" << *p << "\n";
    *(++p);
    cout << "10. *(++p) -> p wskazuje na tab[" << (p - tab) << "], *p=" << *p << "\n";
}

void Funkcja2()
{
    int tab[3] = {0, 0, 0};
    int &a = tab[0];
    int &b = tab[1];
    int &c = tab[2];
    int *p = tab;

    cout << "Funkcja2() - dzialanie na A, B, C:\n";
    cout << "1. A, B, C: " << a << " " << b << " " << c << "\n";
    *(p + 1) += 10;
    cout << "2. A, B, C: " << a << " " << b << " " << c << "\n";
    *(p + 2) += 20;
    cout << "3. A, B, C: " << a << " " << b << " " << c << "\n";
    *(p + 1) += 20;
    cout << "4. A, B, C: " << a << " " << b << " " << c << "\n";
    *p += 40;
    cout << "5. A, B, C: " << a << " " << b << " " << c << "\n";
    *(p + 1) += 20;
    cout << "6. A, B, C: " << a << " " << b << " " << c << "\n";
    *(p + 2) += 40;
    cout << "7. A, B, C: " << a << " " << b << " " << c << "\n";
    *(p + 1) += 20;
    cout << "8. A, B, C: " << a << " " << b << " " << c << "\n";
    *p += 40;
    cout << "9. A, B, C: " << a << " " << b << " " << c << "\n";
    *(p + 1) += 20;
    cout << "10. A, B, C: " << a << " " << b << " " << c << "\n";
}

int main()
{
    Funkcja1();
    cout << "\n";
    Funkcja2();
    return 0;
}
