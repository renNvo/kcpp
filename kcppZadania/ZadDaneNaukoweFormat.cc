#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double pi = M_PI;
    double e = M_E;
    double goldenRatio = 1.61803398875;

    cout << left << setw(15) << "Stala"
         << setw(20) << "Wartosc (domyslnie)"
         << setw(20) << "Notacja stala"
         << setw(20) << "Notacja naukowa" << endl;
    
    cout << setw(15) << "--------"
         << setw(20) << "-----------------"
         << setw(20) << "-------------"
         << setw(20) << "--------------" << endl;
    
    cout << setw(15) << "Pi";
    cout << setprecision(6) << setw(20) << pi;
    cout << fixed << setprecision(6) << setw(20) << pi;
    cout << scientific << setprecision(6) << setw(20) << pi << endl;
    
    cout << setw(15) << "e";
    cout << defaultfloat << setprecision(6) << setw(20) << e;
    cout << fixed << setprecision(6) << setw(20) << e;
    cout << scientific << setprecision(6) << setw(20) << e << endl;
    
    cout << setw(15) << "Zloty podzial";
    cout << defaultfloat << setprecision(6) << setw(20) << goldenRatio;
    cout << fixed << setprecision(6) << setw(20) << goldenRatio;
    cout << scientific << setprecision(6) << setw(20) << goldenRatio << endl;
    
    return 0;
}