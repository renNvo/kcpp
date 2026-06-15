#ifndef ZADLGRA_H
#define ZADLGRA_H

#include "ZadKcpp.h"

class ZadLGra : public ZadKcpp {
public:
    void wykonaj() override;
    std::string info() const override;
};

#endif
