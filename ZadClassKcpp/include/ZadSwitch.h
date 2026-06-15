#ifndef ZADSWITCH_H
#define ZADSWITCH_H

#include "ZadKcpp.h"
#include <string>

class ZadSwitch : public ZadKcpp {
public:
    void wykonaj() override;
    std::string info() const override;

private:
    enum Slowo {
        RANO = 1,
        DZIEN = 2,
        WIECZOR = 3,
        NOC = 4,
        NIEZNANE
    };
    Slowo convert(const std::string& word);
};

#endif
