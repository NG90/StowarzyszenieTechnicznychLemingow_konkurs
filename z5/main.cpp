#include "anagram.hpp"

#include <iostream>

int main(){
    isAnagram("ABCDE", "ADBEC");
    isAnagram("Sample text", "Sample  t ext");
    isAnagram("", "");
    isAnagram("A B C D E", "ABCDEE");
    isAnagram("sample text", "other TEXT");
    
    return 0;
}