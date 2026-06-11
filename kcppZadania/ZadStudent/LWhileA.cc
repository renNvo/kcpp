#include <iostream>
using namespace std;

void dodajLiczbe(int liczba, int &suma, int &count) {
    suma += liczba;
    count++;
    cout << "Dotychczas wprowadzono " << count << " liczb, suma: " << suma << endl;
    if(liczba < 0) {
        cout << "Wprowadzono liczbe ujemna!" << endl;
    }
}

int main() {
  int count = 0, liczba, suma = 0;

  cout << "Wprowadzaj liczby (0 konczy program):" << endl;
  cin >> liczba;
  dodajLiczbe(liczba, suma, count);

  while (liczba != 0) {
    suma += liczba;
    cin >> liczba;
    dodajLiczbe(liczba, suma, count);
  }

  cout << "Suma wprowadzonych liczb: " << suma << endl;

  return 0;
}