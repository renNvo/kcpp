#include <iostream>
#include <sstream>
#include <string>

// Przykład użycia std::stringstream z biblioteki <sstream>
int main() {
	// 1) Parsowanie liczb ze stringa
	std::string data = "10 20 30 4.5 tekst";
	std::stringstream ss(data);

	int a, b, c;
	double d;
	std::string word;

	ss >> a >> b >> c >> d >> word;
	std::cout << "Wczytane wartosci:\n";
	std::cout << "a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << ", word='" << word << "'\n";

	std::stringstream out;
	out << "Suma calkowita: " << (a + b + c) << ", srednia: " << ((a + b + c) / 3.0);
	std::string result = out.str();
	std::cout << "Zbudowany napis: " << result << "\n";

	out.str("");
	out.clear();
	out << "Przykladowy tekst: " << word;
	std::cout << out.str() << "\n";

	return 0;
}
