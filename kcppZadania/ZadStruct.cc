#include <iostream>
#include <string>

struct Ksiazka {
    std::string tytul;
    std::string autor;
    int rokWydania;
    double cena;

    Ksiazka() {
        tytul = "Brak";
        autor = "Nieznany";
        rokWydania = 0;
        cena = 0.0;
    }

    Ksiazka(std::string t, std::string a, int r, double c) : tytul(t), autor(a), rokWydania(r), cena(c) {}

    void wyswietl() {
        std::cout << "\"" << tytul << "\" - " << autor << " (Rok: " << rokWydania << ", Cena: " << cena << " zl)\n";
    }
};

int main() {
    Ksiazka ksiazka1("Wiedzmin", "Andrzej Sapkowski", 1993, 39.99);

    Ksiazka ksiazka2;
    ksiazka2.tytul = "Hobbit";
    ksiazka2.autor = "J.R.R. Tolkien";
    ksiazka2.rokWydania = 1937;
    ksiazka2.cena = 34.50;

    Ksiazka* ksiazka3 = new Ksiazka("Pan Tadeusz", "Adam Mickiewicz", 1834, 49.99);

    ksiazka3->cena = 45.00;

    ksiazka1.wyswietl();
    ksiazka2.wyswietl();
    ksiazka3->wyswietl();

    std::cout << ksiazka1.tytul << "\n";
    std::cout << ksiazka3->cena << "\n";

    delete ksiazka3;

    return 0;
}