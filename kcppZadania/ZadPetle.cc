#include <iostream>
using namespace std;

void a() {
    cout << "(a) while - pokaz inkrementacji i++ i ++i\n";
    int i = 0;
    while (i < 6) {
        cout << "przed i++: " << i << ", wywolanie i++ daje: " << i++ << ", po i++: " << i;
        cout << ", ++i daje: " << ++i << '\n';
        if (i == 4) {
            cout << "  warunek i==4: break z petli while\n";
            break;
        }
    }
}

void b() {
    cout << "\n(b) do-while - pokaz inkrementacji i++ i ++i\n";
    int i = 0;
    do {
        cout << "przed i++: " << i << ", i++ -> " << i++ << ", po i++: " << i;
        cout << ", ++i -> " << ++i << '\n';
        if (i == 3) {
            cout << "  warunek i==3: continue do-while (zwiększamy i i kontynuujemy)\n";
            ++i;
            continue;
        }
    } while (i < 5);
}

void c() {
    cout << "\n(c) for - pokaz inkrementacji i++ i ++i\n";
    for (int i = 0; i < 10; ++i) {
        cout << "i w petli: " << i << ", i++ w wyrazeniu: " << i++ << ", po i++: " << i << '\n';
        if (i >= 3) {
            cout << "  warunek i>=3: return z funkcji c()\n";
            return;
        }
    }
}

int main() {
    a();
    b();
    c();
    return 0;
}
