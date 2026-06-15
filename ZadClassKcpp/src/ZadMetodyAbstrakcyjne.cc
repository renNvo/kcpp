#include "../include/ZadMetodyAbstrakcyjne.h"
#include <cmath>
#include <iostream>

using namespace std;

const double PI = 3.14159265358979323846;

Trojkat::Trojkat(double bokA, double bokB) : a(bokA), b(bokB) {
    c = sqrt(a * a + b * b);
}
double Trojkat::Obwod() const { return a + b + c; }
double Trojkat::Pole() const { return 0.5 * a * b; }
void Trojkat::Narysuj() const { cout << "Przepis na narysowanie trojkata" << endl; }

Kwadrat::Kwadrat(double bok) : a(bok) {}
double Kwadrat::Obwod() const { return 4 * a; }
double Kwadrat::Pole() const { return a * a; }
void Kwadrat::Narysuj() const { cout << "Przepis na narysowanie kwadrata" << endl; }

Prostokat::Prostokat(double bokA, double bokB) : a(bokA), b(bokB) {}
double Prostokat::Obwod() const { return 2 * (a + b); }
double Prostokat::Pole() const { return a * b; }
void Prostokat::Narysuj() const { cout << "Przepis na narysowanie prostokata" << endl; }

Kolo::Kolo(double promien) : r(promien) {}
double Kolo::Obwod() const { return 2 * PI * r; }
double Kolo::Pole() const { return PI * r * r; }
void Kolo::Narysuj() const { cout << "Przepis na narysowanie kola" << endl; }
double Kolo::Dystans(double x) const {
    return sqrt(x / PI);
}

void ZadMetodyAbstrakcyjne::wykonaj() {
    Figura *objKwadrat = new Kwadrat(5.0);
    objKwadrat->Narysuj();
    cout << "Kwadrat -> Pole: " << objKwadrat->Pole() << ", Obwod: " << objKwadrat->Obwod() << "\n\n";
    delete objKwadrat;

    Figura *objTrojkat = new Trojkat(3.0, 4.0);
    objTrojkat->Narysuj();
    cout << "Trojkat -> Pole: " << objTrojkat->Pole() << ", Obwod: " << objTrojkat->Obwod() << "\n\n";
    delete objTrojkat;

    Figura *objProstokat = new Prostokat(2.0, 6.0);
    objProstokat->Narysuj();
    cout << "Prostokat -> Pole: " << objProstokat->Pole() << ", Obwod: " << objProstokat->Obwod() << "\n\n";
    delete objProstokat;

    Kolo *objKolo = new Kolo(3.0);
    objKolo->Narysuj();
    cout << "Kolo -> Pole: " << objKolo->Pole() << ", Obwod: " << objKolo->Obwod() << "\n";
    
    double x = 15.0;
    cout << "Jesli na osobe przypada " << x << " m2, nastepna osoba moze stac w odleglosci (promieniu): " 
         << objKolo->Dystans(x) << " m" << endl;

    delete objKolo;
}

std::string ZadMetodyAbstrakcyjne::info() const {
    return "Zadanie 5.6: Metody abstrakcyjne i dziedziczenie. Implementacja roznych figur geometrycznych.";
}
