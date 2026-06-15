#ifndef ZAD_PRZECIAZANIE_POTEGA_H
#define ZAD_PRZECIAZANIE_POTEGA_H

#include "ZadKcpp.h"

class ZadPrzeciazaniePotega : public ZadKcpp {
private:
    int potega(int podstawa, int wykladnik);
    double potega(double podstawa, int wykladnik);

public:
    void wykonaj() override;
    std::string info() const override;
};

#endif
