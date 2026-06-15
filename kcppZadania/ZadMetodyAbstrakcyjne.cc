#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265358979323846;

class Figura {
public:
    virtual double Obwod() const = 0;
    virtual double Pole() const = 0;
    virtual void Narysuj() const = 0;
    virtual ~Figura() {}
};

class Trojkat : public Figura {
private:
    double a, b, c;
public:
    Trojkat(double bokA, double bokB) : a(bokA), b(bokB) {
        c = sqrt(a * a + b * b);
    }
    double Obwod() const override { return a + b + c; }
    double Pole() const override { return 0.5 * a * b; }
    void Narysuj() const override { cout << "Kwadrat -> Pole: " << objKwadrat->Pole() << ", Obwod: " << objKwadrat->Obwod() << "\n\n" << endl; }
};

class Kwadrat : public Figura {
private:
    double a;
public:
    Kwadrat(double bok) : a(bok) {}
    double Obwod() const override { return 4 * a; }
    double Pole() const override { return a * a; }
    void Narysuj() const override { cout << "Przepis na narysowanie kwadrata" << endl; }
};

class Prostokat : public Figura {
private:
    double a, b;
public:
    Prostokat(double bokA, double bokB) : a(bokA), b(bokB) {}
    double Obwod() const override { return 2 * (a + b); }
    double Pole() const override { return a * b; }
    void Narysuj() const override { cout << "Przepis na narysowanie prostokata" << endl; }
};

class Kolo : public Figura {
private:
    double r;
public:
    Kolo(double promien) : r(promien) {}
    double Obwod() const override { return 2 * PI * r; }
    double Pole() const override { return PI * r * r; }
    void Narysuj() const override { cout << "Przepis na narysowanie kola" << endl; }

    double Dystans(double x) const {
        return sqrt(x / PI);
    }
};

int main() {
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

    return 0;
}