#include "remove_4_6.hpp"

#include <cctype>
#include <iostream>

std::string remove4or6LengthWords(const std::string& text) {
    std::string textWithRemovals{};

    std::string tmp{};
    for (const auto c : text) {
        if (!std::isalnum(c)) {
            if (!(tmp.size() == 4) || (tmp.size() == 6)) {
                textWithRemovals = textWithRemovals + tmp;
            }
            textWithRemovals += c;
            tmp.erase(std::begin(tmp), std::end(tmp));
        } else {
            tmp += c;
        }
    }

    return textWithRemovals;
}
