#ifndef ZADARYTMETYKAWSKAZNIKOWZAMIANA_H
#define ZADARYTMETYKAWSKAZNIKOWZAMIANA_H

#include "ZadKcpp.h"

class ZadArytmetykaWskaznikowZamiana : public ZadKcpp {
public:
    void wykonaj() override;
    std::string info() const override;
};

#endif
