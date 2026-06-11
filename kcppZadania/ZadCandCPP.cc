
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

void show_c()
{
	puts("--- C ---");

	char buf[64];
	std::printf("Podaj slowo (C): ");
	if (std::scanf("%63s", buf) == 1) {
		std::printf("Wpisales : %s\n", buf);
	}

	char *mem = (char*)std::malloc(16);
	if (mem) {
		std::strcpy(mem, "c");
		std::printf("C: %s\n", mem);
		std::free(mem);
	}
}

void show_cpp()
{
	std::cout << "--- C++ ---\n";

	std::string s;
	std::cout << "Podaj slowo (C++): ";
	if (std::cin >> s) {
		std::cout << "Wpisales (C++): " << s << '\n';
	}

	std::string *p = new std::string("cpp");
	std::cout << "C++: " << *p << '\n';
	delete p;
}

int main()
{
	show_c();
	show_cpp();
	return 0;
}
