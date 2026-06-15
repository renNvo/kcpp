#ifndef ZADFORA_H
#define ZADFORA_H

#include "ZadKcpp.h"

class ZadForA : public ZadKcpp {
public:
    void wykonaj() override;
    std::string info() const override;
};

#endif
