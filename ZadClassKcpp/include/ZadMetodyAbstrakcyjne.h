#ifndef ZADMETODYABSTRAKCYJNE_H
#define ZADMETODYABSTRAKCYJNE_H

#include "ZadKcpp.h"

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
    Trojkat(double bokA, double bokB);
    double Obwod() const override;
    double Pole() const override;
    void Narysuj() const override;
};

class Kwadrat : public Figura {
private:
    double a;
public:
    Kwadrat(double bok);
    double Obwod() const override;
    double Pole() const override;
    void Narysuj() const override;
};

class Prostokat : public Figura {
private:
    double a, b;
public:
    Prostokat(double bokA, double bokB);
    double Obwod() const override;
    double Pole() const override;
    void Narysuj() const override;
};

class Kolo : public Figura {
private:
    double r;
public:
    Kolo(double promien);
    double Obwod() const override;
    double Pole() const override;
    void Narysuj() const override;
    double Dystans(double x) const;
};

class ZadMetodyAbstrakcyjne : public ZadKcpp {
public:
    void wykonaj() override;
    std::string info() const override;
};

#endif
