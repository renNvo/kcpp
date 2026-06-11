#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

struct Student {
    std::string imie;
    std::string nazwisko;
    std::string numerIndeksu;
};

bool indeksJestUnikalny(const std::vector<Student>& baza, const std::string& indeks) {
    for (const auto& student : baza) {
        if (student.numerIndeksu == indeks) {
            return false;
        }
    }
    return true;
}

void dodajStudenta(std::vector<Student>& baza) {
    Student nowy;

    std::cout << "Podaj imie: ";
    std::getline(std::cin, nowy.imie);
    if (nowy.imie.empty()) {
        std::cout << "Nieprawidlowe imie. Nie moze byc puste.\n";
        return;
    }

    std::cout << "Podaj nazwisko: ";
    std::getline(std::cin, nowy.nazwisko);
    if (nowy.nazwisko.empty()) {
        std::cout << "Nieprawidlowe nazwisko. Nie moze byc puste.\n";
        return;
    }

    std::cout << "Podaj numer indeksu: ";
    std::getline(std::cin, nowy.numerIndeksu);
    if (nowy.numerIndeksu.empty()) {
        std::cout << "Nieprawidlowy numer indeksu. Nie moze byc pusty.\n";
        return;
    }
    if (!indeksJestUnikalny(baza, nowy.numerIndeksu)) {
        std::cout << "Numer indeksu musi byc unikalny. Student o takim numerze juz istnieje.\n";
        return;
    }

    baza.push_back(nowy);
    std::cout << "Student dodany pomyslnie.\n";
}

void usunStudenta(std::vector<Student>& baza) {
    std::cout << "Podaj numer indeksu studenta do usuniecia: ";
    std::string indeks;
    std::getline(std::cin, indeks);
    if (indeks.empty()) {
        std::cout << "Nieprawidlowy numer indeksu.\n";
        return;
    }

    auto it = std::find_if(baza.begin(), baza.end(), [&](const Student& s) {
        return s.numerIndeksu == indeks;
    });

    if (it == baza.end()) {
        std::cout << "Nie znaleziono studenta o podanym numerze indeksu.\n";
        return;
    }

    baza.erase(it);
    std::cout << "Student usuniety pomyslnie.\n";
}

void wyswietlListe(const std::vector<Student>& baza) {
    if (baza.empty()) {
        std::cout << "Brak studentow w bazie.\n";
        return;
    }

    std::cout << "Lista studentow:\n";
    for (const auto& student : baza) {
        std::cout << "- " << student.imie << " " << student.nazwisko
                  << " (" << student.numerIndeksu << ")\n";
    }
}

void sortujListe(std::vector<Student>& baza) {
    std::sort(baza.begin(), baza.end(), [](const Student& a, const Student& b) {
        if (a.nazwisko != b.nazwisko) {
            return a.nazwisko < b.nazwisko;
        }
        return a.imie < b.imie;
    });
    std::cout << "Lista posortowana alfabetycznie.\n";
}

void sprawdzStudenta(const std::vector<Student>& baza) {
    std::cout << "Podaj numer indeksu studenta do sprawdzenia: ";
    std::string indeks;
    std::getline(std::cin, indeks);
    if (indeks.empty()) {
        std::cout << "Nieprawidlowy numer indeksu.\n";
        return;
    }

    bool istnieje = !indeksJestUnikalny(baza, indeks);
    if (istnieje) {
        std::cout << "Student o numerze indeksu " << indeks << " istnieje w bazie.\n";
    } else {
        std::cout << "Student o numerze indeksu " << indeks << " nie istnieje w bazie.\n";
    }
}

int main() {
    std::vector<Student> baza;
    while (true) {
        std::cout << "\nProsta baza studentow:\n";
        std::cout << "1. Dodaj studenta\n";
        std::cout << "2. Usun studenta\n";
        std::cout << "3. Wyswietl liste\n";
        std::cout << "4. Sortuj liste\n";
        std::cout << "5. Sprawdz, czy student istnieje\n";
        std::cout << "0. Wyjscie\n";
        std::cout << "Wybierz opcje: ";

        std::string wybor;
        std::getline(std::cin, wybor);
        if (wybor == "0") {
            break;
        } else if (wybor == "1") {
            dodajStudenta(baza);
        } else if (wybor == "2") {
            usunStudenta(baza);
        } else if (wybor == "3") {
            wyswietlListe(baza);
        } else if (wybor == "4") {
            sortujListe(baza);
        } else if (wybor == "5") {
            sprawdzStudenta(baza);
        } else {
            std::cout << "Nieprawidlowa opcja. Sprobuj ponownie.\n";
        }
    }

    std::cout << "Koniec programu.\n";
    return 0;
}
