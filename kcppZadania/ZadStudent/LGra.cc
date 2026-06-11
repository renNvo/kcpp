#include <iostream>
#include <cstdlib>  // dla rand()
#include <ctime>    // dla time()
using namespace std;

int main() {
    srand(time(0));
    int poziom, zakres_max;
    
    cout << "Wybierz poziom trudnosci:" << endl;
    cout << "1 - Latwy (1-50)" << endl;
    cout << "2 - Sredni (1-100)" << endl;
    cout << "3 - Trudny (1-200)" << endl;
    cout << "Twoj wybor: ";
    cin >> poziom;
    
    if (poziom == 1) {
        zakres_max = 50;
    } else if (poziom == 2) {
        zakres_max = 100;
    } else if (poziom == 3) {
        zakres_max = 200;
    } else {
        zakres_max = 100;
    }
    
    int wylosowana = rand() % zakres_max + 1; // liczba od 1 do zakres_max
    int proba, licznik = 0;
    const int MAX_PROB = 10;

    cout << "Zgadnij liczbe (1-" << zakres_max << "):" << endl;

    while (licznik < MAX_PROB) {
        cin >> proba;
        licznik++;

        if (proba < wylosowana) {
            cout << "Za malo! Probuj dalej." << endl;
        } else if (proba > wylosowana) {
            cout << "Za duzo! Probuj dalej." << endl;
        } else {
            cout << "Brawo! Zgadles w " << licznik << " probach." << endl;
            return 0;
        }
    }
    
    cout << "Koniec prob! Prawidlowa liczba to: " << wylosowana << endl;
    return 0;
}