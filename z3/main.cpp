#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#include "palindrom.hpp"

void performTests(std::string testString) {
    std::cout << testString << ": \t";
    std::cout << isPalindrome1(testString) << " ";
    std::cout << isPalindrome2(testString) << " ";
    std::cout << isPalindrome3(testString) << " ";
    std::cout << isPalindrome4(testString) << " ";
    std::cout << isPalindrome5(testString) << " ";
    std::cout << isPalindrome6(testString) << " ";
    std::cout << isPalindrome7(testString) << " ";
    std::cout << isPalindrome8(testString) << " ";

    std::cout << "\n";
}

int main() {
    std::vector<std::string> testStrings = {
        "kajak",
        "Kajak",
        "pies",
        "anna"};

    for (const auto& testString : testStrings) {
        performTests(testString);
    }
}
