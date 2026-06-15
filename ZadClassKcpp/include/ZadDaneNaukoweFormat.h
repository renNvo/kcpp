#ifndef ZADDANENAUKOWEFORMAT_H
#define ZADDANENAUKOWEFORMAT_H

#include "ZadKcpp.h"

class ZadDaneNaukoweFormat : public ZadKcpp {
public:
    void wykonaj() override;
    std::string info() const override;
};

#endif
