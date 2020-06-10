// Korzystając z gotowych algorytmów umieszczonych w nagłówku <algorithm> i <numeric>
// Spróbuj na jak najwięcej sposobów sprawdzić, czy podany ciąg znaków jest palindromem.
// (Jeden sposób -> 1 punkt).
#include "palindrom.hpp"

bool isPalindrome1(std::string input) {
    std::mismatch(input.begin(), input.end(), input.rbegin()
}
