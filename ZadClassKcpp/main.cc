#include "include/ZadParzysta.h"
#include "include/ZadMetodyAbstrakcyjne.h"
#include "include/ZadForA.h"
#include "include/ZadSwitch.h"
#include "include/ZadArytmetykaWskaznikowSuma.h"
#include "include/ZadPrzeciazaniePotega.h"
#include "include/ZadLGra.h"
#include "include/ZadArytmetykaWskaznikowZamiana.h"
#include "include/ZadDaneNaukoweFormat.h"
#include "include/ZadLSilnia.h"

#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

int main() {
    std::vector<std::unique_ptr<ZadKcpp>> zadania;

    zadania.push_back(std::make_unique<ZadPrzeciazaniePotega>());
    zadania.push_back(std::make_unique<ZadArytmetykaWskaznikowZamiana>());
    zadania.push_back(std::make_unique<ZadArytmetykaWskaznikowSuma>());
    zadania.push_back(std::make_unique<ZadDaneNaukoweFormat>());
    zadania.push_back(std::make_unique<ZadParzysta>());
    zadania.push_back(std::make_unique<ZadSwitch>());
    zadania.push_back(std::make_unique<ZadForA>());
    zadania.push_back(std::make_unique<ZadLSilnia>());
    zadania.push_back(std::make_unique<ZadLGra>());
    zadania.push_back(std::make_unique<ZadMetodyAbstrakcyjne>());

    int wybor;

    while (true) {
        std::cout << "========== MENU INTERAKTYWNE ==========" << std::endl;
        for (size_t i = 0; i < zadania.size(); ++i) {
            std::cout << i + 1 << ". " << zadania[i]->info() << std::endl;
        }
        std::cout << "0. Wyjscie" << std::endl;
        std::cout << "=======================================" << std::endl;
        std::cout << "Wybor: ";
        
        if (!(std::cin >> wybor)) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Nieprawidlowy znak! Sprobuj ponownie." << std::endl << std::endl;
            continue;
        }

        if (wybor == 0) {
            break;
        }

        if (wybor > 0 && wybor <= static_cast<int>(zadania.size())) {
            std::cout << std::endl << "--- Wykonywanie: " << zadania[wybor - 1]->info() << " ---" << std::endl;
            zadania[wybor - 1]->wykonaj();
            std::cout << "---------------------------------------" << std::endl << std::endl;
        } else {
            std::cout << "Nieprawidlowy wybor! Sprobuj ponownie." << std::endl << std::endl;
        }
    }

    return 0;
}