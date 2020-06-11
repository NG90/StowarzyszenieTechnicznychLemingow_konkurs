#include <algorithm>
#include <iostream>

#include "remove_repeating.hpp"

template <typename T>
void print(T vec) {
    for (const auto el : vec) {
        std::cout << el;
    }
}

int main() {
    std::string str{"Ala ma ma kota, a kot ma Ale Ale Ala Ala "};
    std::cout << "BEFORE REMOVING DUPLICATES:\n";
    std::cout << str;
    std::cout << "\nAFTER REMOVING DUPLICATES:\n";
    std::cout << remove_repeating(str);
    std::cout << '\n';
}
