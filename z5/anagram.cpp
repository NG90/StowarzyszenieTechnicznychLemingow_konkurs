#include "anagram.hpp"

#include <algorithm>
#include <iostream>

std::string permutateString(std::string sentence) {
    std::transform(sentence.begin(), sentence.end(), sentence.begin(),
                   [](char& character) -> char { return std::toupper(character); });
    std::sort(sentence.begin(), sentence.end());
    if (std::count(sentence.begin(), sentence.end(), ' ') > 0) {
        sentence.erase(std::remove(sentence.begin(), sentence.end(), ' '), sentence.end());
    }

    return sentence;
}
bool isAnagram(const std::string& firstSentence, const std::string& secondSentence) {
    std::string newFirst = permutateString(firstSentence);
    std::string newSecond = permutateString(secondSentence);

    return (newFirst == newSecond);
}
