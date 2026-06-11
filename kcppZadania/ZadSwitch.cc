#include <iostream>
#include <string>

using namespace std;

enum Slowo {
    RANO = 1,
    DZIEN = 2,
    WIECZOR = 3,
    NOC = 4
};

Slowo convert(const string& word) {
    if (word == "rano") return RANO;
    if (word == "dzien") return DZIEN;
    if (word == "wieczor") return WIECZOR;
    if (word == "noc") return NOC;
    throw invalid_argument("Nieznane słowo");
}


int main() {
    string word;
    
    cout << "Wpisz slowo (rano, dzien, wieczor, noc): ";
    cin >> word;
    
    // Switch z całym słowem - C++ nie obsługuje bezpośrednio stringów w switch
    // Poniżej pokazana alternatywa z if-else:

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
    
    return 0;
}
