#ifndef ZAD47_PARZYSTA_H
#define ZAD47_PARZYSTA_H
 
#include "ZadKcpp.h"
#include <string>
 
class ZadParzysta : public ZadKcpp {
private:
    bool isEvenBitwise(int n);
    bool isEvenModulo(int n);
    bool isEvenTernary(int n);
 
public:
    void wykonaj() override;
    std::string info() const override;
};
 
#endif