#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double result = 3.14159265;
    double output = 11.234;
    double t = 3.142;
    double output1 = 1.5678;
    double t1 = 22.56789;
    double output2 = 1.8901;
    double t2 = 22.123456;
    
    double average = (output + output1 + output2) / 3;
    double avg_t = (t + t1 + t2) / 3;
    
    cout << setfill('=') << setw(50) << "" << endl;
    cout << setfill(' ');
    
    cout << "Wynika naszego działania: ";
    cout << fixed << setprecision(5) << result;
    cout << " jest niepoprawny ale:" << endl;
    
    cout << setfill('-');
    cout << right;
    
    cout << "   output: " << setw(8) << fixed << setprecision(3) << output;
    cout << "    T: " << setw(8) << fixed << setprecision(3) << t << " " << endl;
    
    cout << "   output1: " << setw(7) << fixed << setprecision(4) << output1;
    cout << "   T: " << setw(8) << fixed << setprecision(5) << t1 << endl;
    
    cout << "   output2: " << setw(7) << fixed << setprecision(4) << output2;
    cout << "   T: " << setw(8) << fixed << setprecision(6) << t2 << endl;
    
    cout << "   " << setfill('-') << setw(33) << "-" << endl;
    cout << setfill(' ');
    
    cout << "   average: " << setw(7) << fixed << setprecision(4) << average;
    cout << "   T: " << setw(8) << fixed << setprecision(6) << avg_t << endl;
    
    cout << setfill('=') << setw(50) << "" << endl;
    
    return 0;
}
