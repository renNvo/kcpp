#include "../include/ZadSwitch.h"
#include <iostream>
#include <stdexcept>

using namespace std;

ZadSwitch::Slowo ZadSwitch::convert(const string& word) {
    if (word == "rano") return RANO;
    if (word == "dzien") return DZIEN;
    if (word == "wieczor") return WIECZOR;
    if (word == "noc") return NOC;
    return NIEZNANE;
}

void ZadSwitch::wykonaj() {
    string word;
    
    cout << "Wpisz slowo (rano, dzien, wieczor, noc): ";
    cin >> word;
    
    try {
        switch(convert(word)) {
            case RANO:
                cout << "Poranek!" << endl;
                break;
            case DZIEN:
                cout << "Dzien!" << endl;
                break;
            case WIECZOR:
                cout << "Wieczor!" << endl;
                break;
            case NOC:
                cout << "Noc!" << endl;
                break;
            default:
                cout << "Nieznane slowo!" << endl;
        }
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }
}

std::string ZadSwitch::info() const {
    return "Zadanie 4.10: Instrukcja switch. Konwersja slow kluczowych na komunikaty.";
}
