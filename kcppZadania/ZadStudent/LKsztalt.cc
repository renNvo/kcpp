#include <iostream>
using namespace std;

int main() {
  int rozmiar;
  cout << "Podaj rozmiar kwadratu: ";
  cin >> rozmiar;

  cout << "\nKwadrat:" << endl;
  for (int i = 0; i < rozmiar; i++) {
    for (int j = 0; j < rozmiar; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  cout << "\nTrojkat prostokatny:" << endl;
  for (int i = 0; i < rozmiar; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  cout << "\nTrojkat rownoramienny:" << endl;
  for (int i = 0; i < rozmiar; i++) {
    for (int j = 0; j < rozmiar - i - 1; j++) {
      cout << " ";
    }
    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  cout << "\nPiramida z liczb:" << endl;
  for (int i = 1; i <= rozmiar; i++) {
    for (int j = 0; j < rozmiar - i; j++) {
      cout << " ";
    }
    for (int j = 1; j <= i; j++) {
      cout << i;
      if (j < i) cout << " ";
    }
    cout << endl;
  }


  return 0;
}