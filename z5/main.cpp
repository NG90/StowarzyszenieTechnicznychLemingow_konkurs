#include <iostream>

#include "anagram.hpp"

int main() {
    std::cout << isAnagram("ABCDE", "AdbEC") << '\n';
    std::cout << isAnagram("Sample text", "Sample  t ext") << '\n';
    std::cout << isAnagram("", "") << '\n';
    std::cout << isAnagram("A B C D E", "ABCDEE") << '\n';
    std::cout << isAnagram("sample text", "other TEXT") << '\n';

    return 0;
}
