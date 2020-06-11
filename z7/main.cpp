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
    std::vector<std::string> str{"Ala ", "ma ", "ma ", "kota, ", "a ", "kot ", "ma ", "Ale ", "Ale.. ", "Ala ", "Ala "};
    std::cout << "BEFORE REMOVING DUPLICATES:\n";
    print(str);
    std::cout << "AFTER REMOVING DUPLCAITES:\n";
    removeDuplicates(str);
    print(str);
}