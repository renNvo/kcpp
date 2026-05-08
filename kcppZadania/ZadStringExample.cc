#include <iostream>
#include <string>

using namespace std;

int main() {  
  string s = "Ala ma kota i psa";
  
  // 1. empty()
  cout << "1. empty()" << endl;
  cout << "Czy napis jest pusty? " << (s.empty() ? "Tak" : "Nie") << endl << endl;
  
  // 2. size() i length()
  cout << "2. size() i length()" << endl;
  cout << "size(): " << s.size() << endl;
  cout << "length(): " << s.length() << endl << endl;
  
  // 3. at()
  cout << "3. at()" << endl;
  cout << "Znak na pozycji 1: " << s.at(1) << endl;
  cout << "Zmiana znaku na pozycji 0: ";
  s.at(0) = 'h';
  cout << s << endl << endl;
  
  // 4. clear()
  cout << "4. clear()" << endl;
  cout << "Przed clear: " << s << endl;
  s.clear();
  cout << "Po clear: " << s << endl << endl;
  
  s = "Ala ma kota i psa";
  
  // 5. erase()
  cout << "5. erase()" << endl;
  cout << "Przed erase: " << s << endl;
  s.erase(3, 3);
  cout << "Po erase(3,3): " << s << endl;
  
  s = "Ala ma kota i psa";
  
  // 6. find()
  cout << "6. find()" << endl;
  size_t pos = s.find("kota");
  if (pos != string::npos) {
    cout << "Znaleziono na pozycji: " << pos << endl;
  }
  
  // 7. swap()
  cout << "7. swap()" << endl;
  string s1 = "Pierwszy";
  string s2 = "Drugi";
  cout << "Przed swap: s1 = " << s1 << ", s2 = " << s2 << endl;
  s1.swap(s2);
  cout << "Po swap: s1 = " << s1 << ", s2 = " << s2 << endl << endl;
  
  // 8. substr()
  cout << "8. substr()" << endl;
  string tekst = "Ala ma kota i psa";
  cout << "Tekst: " << tekst << endl;
  string podciag = tekst.substr(0, 13);
  cout << "substr(0,13): " << podciag << endl;
  podciag = tekst.substr(14, 2);
  cout << "substr(14,2): " << podciag << endl;
  podciag = tekst.substr(17);
  cout << "substr(17): " << podciag << endl << endl;
  
  // 9. append()
  cout << "9. append()" << endl;
  string str = "Hello";
  cout << "Przed append: " << str << endl;
  str.append(" World");
  cout << "Po append: " << str << endl;

  return 0;
}