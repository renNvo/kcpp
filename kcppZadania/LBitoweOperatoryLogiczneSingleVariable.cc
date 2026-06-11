#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

    if (argc != 9) {
        cout << "Za malo argumentow (0 albo 1)" << endl;
        return 1;
    }
    
    unsigned char result = 0;
    
    for (int i = 1; i < argc; i++) {
        int bit = atoi(argv[i]);
        
        if (bit != 0 && bit != 1) {
            cout << "Nie jest 0 albo 1" << endl;
            return 1;
        }
        

        if (bit == 1) {
            result |= (1 << (i - 1));
        }
    }
    
    cout << "Liczba dziesietna: " << (int) result << endl;
    cout << "Liczba binarna: ";
    for (int i = 7; i >= 0; i--) {
        cout << ((result >> i) & 1);
    }
    cout << endl;
    
    return 0;
}
