#ifndef ZADLSILNIA_H
#define ZADLSILNIA_H

#include "ZadKcpp.h"

class ZadLSilnia : public ZadKcpp {
public:
    void wykonaj() override;
    std::string info() const override;
};

#endif
