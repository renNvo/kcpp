#include <iostream>

void OperatoryArytmetyczne()
{
    int a = 10;
    int b = 3;

    std::cout << "Operatory arytmetyczne:\n";
    std::cout << "a = " << a << ", b = " << b << "\n";
    std::cout << "a + b = " << (a + b) << "\n";
    std::cout << "a - b = " << (a - b) << "\n";
    std::cout << "a * b = " << (a * b) << "\n";
    std::cout << "a / b = " << (a / b) << "\n";
    std::cout << "a % b = " << (a % b) << "\n";
    std::cout << "++a = " << (++a) << "\n";
    std::cout << "b-- = " << (b--) << "\n";
    std::cout << "b po dekrementacji = " << b << "\n\n";
}

void OperatoryPrzypisania()
{
    int x = 5;
    std::cout << "Operatory przypisania:\n";
    std::cout << "x = " << x << "\n";

    x += 2;
    std::cout << "x += 2 -> " << x << "\n";

    x -= 1;
    std::cout << "x -= 1 -> " << x << "\n";

    x *= 3;
    std::cout << "x *= 3 -> " << x << "\n";

    x /= 2;
    std::cout << "x /= 2 -> " << x << "\n";

    x %= 3;
    std::cout << "x %= 3 -> " << x << "\n";
}

int main()
{
    OperatoryArytmetyczne();
    OperatoryPrzypisania();
    return 0;
}
