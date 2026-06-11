#include <iostream>

using namespace std;

int main() {
    int arr[10];
    int* ptr = arr;
    
    for (int i = 0; i < 10; i++) {
        *(ptr + i) = i + 1;
    }
    
    cout << "Tablica: ";
    for (int i = 0; i < 10; i++) {
        cout << *(ptr + i) << " ";
    }

    cout << "\n\n";
    
    int sum = 0;
    int* p = arr;
    for (int i = 0; i < 10; i++) {
        sum += *p;
        p++;
    }

    cout << "Suma elementow: " << sum << "\n";
    
    int* maxPtr = arr;
    int* searchPtr = arr;
    for (int i = 0; i < 10; i++) {
        if (*searchPtr > *maxPtr) {
            maxPtr = searchPtr;
        }
        searchPtr++;
    }
    cout << "Maksymalny element: " << *maxPtr << "\n\n";
    
    int* left = arr;
    int* right = arr + 9;
    
    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
    
    cout << "Tablica po odwroceniu: ";
    for (int i = 0; i < 10; i++) {
        cout << *(arr + i) << " ";
    }
    cout << "\n";
    
    return 0;
}