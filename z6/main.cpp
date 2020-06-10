#include <iostream>

#include "remove_4_6.hpp"

int main() {
    std::string testString{"Ala ma kota a kot ma Ale, jednak to bylo dawno temu."};

    std::cout << "Input:\n"
              << testString << "\n\n";
    std::cout << "Output:\n"
              << remove4or6LengthWords(testString) << "\n\n";
    return 0;
}
