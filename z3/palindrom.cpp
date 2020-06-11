#include "palindrom.hpp"

// equal - self checking
bool isPalindrome1(std::string& input) {
    return equal(input.begin(), input.begin() + input.size() / 2, input.rbegin());
}

// equal - compare with reversed copy
bool isPalindrome2(std::string& input) {
    std::string reversedInput = "";
    std::reverse_copy(input.begin(), input.end(), std::back_inserter(reversedInput));
    return equal(input.begin(), input.end(), reversedInput.begin());
}

// mismatch - self checking
bool isPalindrome3(std::string& input) {
    const auto terminator = input.begin() + input.size() / 2;
    const auto iteratorPair = std::mismatch(input.begin(), terminator, input.rbegin());
    if (iteratorPair.first == terminator) {
        return true;
    } else {
        return false;
    }
}

// mismatch - compare with reversed copy
bool isPalindrome4(std::string& input) {
    std::string reversedInput = "";
    std::reverse_copy(input.begin(), input.end(), std::back_inserter(reversedInput));
    auto iteratorPair = std::mismatch(input.begin(), input.end(), reversedInput.begin());
    if (iteratorPair.first == input.end()) {
        return true;
    } else {
        return false;
    }
}

// recursion
bool isPalindrome5(std::string& input) {
    if (input.size() == 0 || input.size() == 1) {
        return true;
    } else if (*input.begin() == *input.rbegin()) {
        input.pop_back();
        input.erase(input.begin());
        return isPalindrome5(input);
    }
    return false;
}

// equal - compare with reversed copy of second half
bool isPalindrome6(std::string& input) {
    std::string reversedHalfInput = "";
    const auto fTerminator = input.begin() + input.size() / 2;
    const auto rTerminator = input.rbegin() + input.size() / 2;
    std::reverse_copy(input.rbegin(), rTerminator, std::back_inserter(reversedHalfInput));
    return equal(input.begin(), fTerminator, reversedHalfInput.begin());
}

// find_first_of
bool isPalindrome7(std::string& input) {
    const auto fTerminator = input.begin() + input.size() / 2;
    const auto rTerminator = input.rbegin() + input.size() / 2;

    if (std::find_first_of(input.begin(), fTerminator, input.rbegin(),
                           rTerminator) == input.begin()) {
        return true;
    }
    return false;
}

// works similarly in this case
bool isPalindrome8(std::string& input) {
    const auto fTerminator = input.begin() + input.size() / 2;
    const auto rTerminator = input.rbegin() + input.size() / 2;

    if (std::find_end(input.begin(), fTerminator, input.rbegin(),
                      rTerminator) == input.begin()) {
        return true;
    }
    return false;
}
