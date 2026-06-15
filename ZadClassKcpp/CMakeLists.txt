cmake_minimum_required(VERSION 4.2)
project(kcpp_zadania)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(kcpp
        src/ZadParzysta.cc
        src/ZadMetodyAbstrakcyjne.cc
        src/ZadForA.cc
        src/ZadSwitch.cc
        src/ZadArytmetykaWskaznikowSuma.cc
        src/ZadPrzeciazaniePotega.cc
        src/ZadLGra.cc
        src/ZadArytmetykaWskaznikowZamiana.cc
        src/ZadDaneNaukoweFormat.cc
        src/ZadLSilnia.cc
        main.cc
)
