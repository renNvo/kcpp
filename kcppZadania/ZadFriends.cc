#include <iostream>

class B;

class A {
private:
    int prywatnyA = 100;

    friend class B;

public:
    void pokazPrywatnyB(const B& objB);
};

class B {
private:
    int prywatnyB = 200;

    friend class A;

public:
    void pokazPrywatnyA(const A& objA) {
        std::cout << "Klasa B ma dostep do prywatnyA: " << objA.prywatnyA << "\n";
    }
};

void A::pokazPrywatnyB(const B& objB) {
    std::cout << "Klasa A ma dostep do prywatnyB: " << objB.prywatnyB << "\n";
}

int main() {
    A obiektA;
    B obiektB;

    obiektB.pokazPrywatnyA(obiektA);
    obiektA.pokazPrywatnyB(obiektB);

    return 0;
}