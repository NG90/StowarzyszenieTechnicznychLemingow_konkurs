#include <iostream>

#include "remove_4_6.hpp"

int main() {
    std::string testString{"Ala ma kota a kot ma Ale, jednak to bylo dawno temu."};
    std::cout << "Input:\n"
              << testString << "\n\n";
    std::cout << "Output:\n"
              << remove4or6LengthWords(testString) << "\n\n";

    std::string testString2{"Litwo, Ojczyzno moja! ty jestes jak zdrowie; Ile cie trzeba cenic, ten tylko sie dowie, Kto cie stracil."};
    std::cout << "Input2:\n"
              << testString2 << "\n\n";
    std::cout << "Output2:\n"
              << remove4or6LengthWords(testString2) << "\n\n";
    return 0;
}
