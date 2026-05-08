#include <iostream>
#include <string>

using namespace std;

enum class Miesiac {
    Styczen = 1,
    Luty,
    Marzec,
    Kwiecien,
    Maj,
    Czerwiec,
    Lipiec,
    Sierpien,
    Wrzesien,
    Pazdziernik,
    Listopad,
    Grudzien
};

string miesiacToString(Miesiac m) {
    switch (m) {
        case Miesiac::Styczen:    
            return "Styczen";
        case Miesiac::Luty:       
            return "Luty";
        case Miesiac::Marzec:     
            return "Marzec";
        case Miesiac::Kwiecien:   
            return "Kwiecien";
        case Miesiac::Maj:        
            return "Maj";
        case Miesiac::Czerwiec:   
            return "Czerwiec";
        case Miesiac::Lipiec:     
            return "Lipiec";
        case Miesiac::Sierpien:   
            return "Sierpien";
        case Miesiac::Wrzesien:   
            return "Wrzesien";
        case Miesiac::Pazdziernik: 
            return "Pazdziernik";
        case Miesiac::Listopad:   
            return "Listopad";
        case Miesiac::Grudzien:   
            return "Grudzien";
        default:                  
            return "Nieznany";
    }
}

int main() {

    Miesiac miesiac = Miesiac::Styczen;

    cout << "Urodzilem sie w: " << miesiacToString(miesiac) << endl;

    if (static_cast<int>(miesiac) < static_cast<int>(Miesiac::Pazdziernik)) {
        cout << "Osoba urodzona w pazdzierniku tego samego roku bedzie mlodsza niz ta co w styczniu" << endl;
    }

    return 0;
}
