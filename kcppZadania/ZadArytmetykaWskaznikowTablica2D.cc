#include <iostream>

int main()
{
    int Tab[3][3];

    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            Tab[i][j] = i * 3 + j;
        }
    }

    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            std::cout << "Tab[" << i << "][" << j << "] = " << Tab[i][j] << " adres: " << (&Tab[i][j]) << "\n";
        }
    }
    return 0;
}
