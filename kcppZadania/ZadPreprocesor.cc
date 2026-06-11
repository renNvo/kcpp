#include <iostream>
using namespace std;

#define VERSION 2

#ifdef VERSION
    #define GREETING "Program z wersją zdefiniowaną"
#else
    #define GREETING "Program bez wersji"
#endif

#ifndef DEBUG
    #define DEBUG 0
#endif

#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

#define STRINGIFY(x) #x
#define CONCAT(a, b) a##b
#define PRINT_VAR(var) cout << #var << " = " << var << endl


int square(int x) {
    return x * x;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

#include <string>

string stringify(const string& s) {
    return s;
}

int main() {
    cout << "Dyrektywy Preprocesora (#ifdef, #define)" << endl;

    cout << "ifdef, #else, #ifndef" << endl;
    cout << GREETING << endl;
    cout << "DEBUG mode: " << DEBUG << "\n" << endl;

    cout << "2a: Makra z dyrektywą preprocesora" << endl;
    
    int liczba = 5;
    cout << "SQUARE(5) = " << SQUARE(liczba) << endl;
    cout << "MAX(10, 7) = " << MAX(10, 7) << endl;
    cout << "MIN(10, 7) = " << MIN(10, 7) << "\n" << endl;

    cout << "2b: Operatory '#' i '##'" << endl;
    
    cout << "STRINGIFY(Hello) = " << STRINGIFY(Hello) << endl;
    cout << "STRINGIFY(12345) = " << STRINGIFY(12345) << endl;
    
    int CONCAT(liczba, _a) = 100;
    cout << "CONCAT(liczba, _a) = " << liczba_a << endl;
    
    int test_var = 42;
    PRINT_VAR(test_var);
    cout << endl;

    cout << "3a: Bez preprocesora - funkcje zamiast makr" << endl;
    
    cout << "square(5) = " << square(5) << endl;
    cout << "max(10, 7) = " << max(10, 7) << endl;
    cout << "min(10, 7) = " << min(10, 7) << "\n" << endl;
    cout << "3b: Bez preprocesora - konwersja na string" << endl;
    
    string str1 = stringify("Hello");
    string str2 = stringify("World");
    cout << "stringify(\"Hello\") = " << str1 << endl;
    cout << "stringify(\"World\") = " << str2 << "\n" << endl;

    return 0;
}
