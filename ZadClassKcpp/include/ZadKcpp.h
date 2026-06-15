#ifndef ZADKCPP_H

#define ZADKCPP_H

#include <string>

class ZadKcpp {
public:
    virtual ~ZadKcpp() {}
    virtual void wykonaj() = 0;
    virtual std::string info() const = 0;
};

#endif