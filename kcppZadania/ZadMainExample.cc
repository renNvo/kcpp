#include <iostream>
#include <cstring>

using namespace std;

void funkcjaZwykla1() {
    cout << "Funkcja zwykla 1" << endl;
}

void funkcjaZwykla2() {
    cout << "Funkcja zwykla 2" << endl;
}

void funkcjaZwykla3() {
    cout << "Funkcja zwykla 3" << endl;
}

extern "C" {
    void funkcjaExtern1();
    void funkcjaExtern2();
}

extern "C" void funkcjaExtern1() {
    cout << "Funkcja extern 1" << endl;
}

extern "C" void funkcjaExtern2() {
    cout << "Funkcja extern 2" << endl;
}

void wykonajFunkcje(int numer) {
    switch(numer) {
        case 1:
            funkcjaZwykla1();
            break;
        case 2:
            funkcjaZwykla2();
            break;
        case 3:
            funkcjaZwykla3();
            break;
        case 4:
            funkcjaExtern1();
            break;
        case 5:
            funkcjaExtern2();
            break;
        default:
            cout << "Nie ma takiej funkcji" << endl;
    }
}

void wyswietlMenu() {
    cout << "1. funkcjaZwykla1()" << endl;
    cout << "2. funkcjaZwykla2()" << endl;
    cout << "3. funkcjaZwykla3()" << endl;
    cout << "4. funkcjaExtern1()" << endl;
    cout << "5. funkcjaExtern2()" << endl;
}

void parsujArgumenty(int argc, char* argv[]) {
    for (int i = 1; i < argc; i++) {
        int numer = atoi(argv[i]);
        wykonajFunkcje(numer);
    }
}

int main(int argc, char* argv[]) {
    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            int numer = atoi(argv[i]);
            if (numer >= 1 && numer <= 5) {
                wykonajFunkcje(numer);
            } else {
                cout << "Nieprawidlowy argument: " << argv[i] << endl;
            }
        }
    } else {
        int wybor;

        do {
            wyswietlMenu();
            cout << "Wybierz funkcje (0 = zakonczenie programu): ";
            cin >> wybor;
            
            if (wybor == 0) {
                break;
            }
            
            wykonajFunkcje(wybor);
            cout << endl;
            
        } while (wybor != 0);
    }
    return 0;
}