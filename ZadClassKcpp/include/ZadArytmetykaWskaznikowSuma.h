#ifndef ZADARYTMETYKAWSKAZNIKOWSUMA_H
#define ZADARYTMETYKAWSKAZNIKOWSUMA_H

#include "ZadKcpp.h"

class ZadArytmetykaWskaznikowSuma : public ZadKcpp {
public:
    void wykonaj() override;
    std::string info() const override;
private:
    int suma(int* tablica, int rozmiar);
};

#endif
