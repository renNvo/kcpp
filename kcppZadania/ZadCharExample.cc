#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    // 1. strlen()
    cout << "strlen()" << endl;
    char tekst[] = "Ala ma kota";
    cout << "Dlugosc: " << strlen(tekst) << endl << endl;

    // 2. strcpy()
    cout << "strcpy()" << endl;
    char kopia[50];
    strcpy(kopia, tekst);
    cout << "Kopia: " << kopia << endl << endl;

    // 3. strcat()
    cout << "strcat()" << endl;
    char powitanie[100] = "Witaj ";
    char imie[] = "Janek";
    strcat(powitanie, imie);
    cout << "Po laczeniu: " << powitanie << endl << endl;

    // 4. strcmp()
    cout << "strcmp()" << endl;
    char napis1[] = "abc";
    char napis2[] = "abc";
    char napis3[] = "abd";
    cout << "Porownanie abc z abc: " << strcmp(napis1, napis2) << endl;
    cout << "Porownanie abc z abd: " << strcmp(napis1, napis3) << endl << endl;

    // 5. strchr()
    cout << "strchr()" << endl;
    char zdanie[] = "Programowanie";
    char* znak = strchr(zdanie, 'g');
    cout << "Znaleziono 'g' na pozycji: " << (znak - zdanie) << endl << endl;

    // 6. strstr()
    cout << "strstr()" << endl;
    char tekst_dlugi[] = "To jest przyklad tekstu";
    char* wynik = strstr(tekst_dlugi, "przyklad");
    cout << "Znaleziono: " << wynik << endl << endl;

    // 7. strncpy()
    cout << "strncpy()" << endl;
    char bufor[10];
    char dlugi[] = "Bardzo dlugi napis";
    strncpy(bufor, dlugi, sizeof(bufor) - 1);
    bufor[sizeof(bufor) - 1] = '\0';
    cout << "Skopiowano: " << bufor << endl << endl;

    // 8. strncat()
    cout << "strncat()" << endl;
    char cel[20] = "Hello ";
    char zrodlo[] = "World!";
    strncat(cel, zrodlo, 3);
    cout << "Dolaczono 3 znaki: " << cel << endl << endl;

    // 9. strrchr()
    cout << "strrchr()" << endl;
    char tekst2[] = "Ala ma kota";
    char* ostatnie_a = strrchr(tekst2, 'a');
    cout << "Ostatnie 'a' na pozycji: " << (ostatnie_a - tekst2) << endl << endl;

    // 10. strncmp()
    cout << "strncmp()" << endl;
    char slowo1[] = "abcdef";
    char slowo2[] = "abcXYZ";
    cout << "Porownanie pierwszych 3 znakow: " << strncmp(slowo1, slowo2, 3) << endl << endl;

    return 0;
}