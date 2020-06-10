#include "anagram.hpp"

void isAnagram(std::string firstSentence, std::string secondSentence){
    firstSentence = permutateString(firstSentence);
    secondSentence = permutateString(secondSentence);
    

    if(firstSentence == secondSentence){
        std::cout << "This 2 sentences are anagrams" << '\n';
    } else{
        std::cout << "This 2 sentences aren't anagrams " << '\n';
    }
}
std::string permutateString(std::string sentence){
    std::sort(sentence.begin(), sentence.end());
    if(std::count(sentence.begin(), sentence.end(), ' ') > 0){
        sentence.erase(std::remove(sentence.begin(), sentence.end(), ' '), sentence.end());
    }

    return sentence;
}