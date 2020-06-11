#include "remove_4_6.hpp"

#include <algorithm>
#include <cctype>
#include <iostream>

std::string remove4or6LengthWords(const std::string& text) {
    std::string textWithRemovals{};

    auto it_start = std::begin(text);
    auto it_found = std::begin(text);

    while (it_found != std::end(text)) {
        it_found = std::find_if(it_start, std::end(text), [](unsigned char c) {
            return std::isspace(c) || std::ispunct(c);
        });
        auto dist = std::distance(it_start, it_found);
        if (dist != 4 && dist != 6) {
            auto s = text.substr(std::distance(std::begin(text), it_start), dist + 1);
            textWithRemovals = textWithRemovals + s;
        } else {
            textWithRemovals = textWithRemovals + *it_found;
        }
        it_start = std::next(it_found);
    }

    return textWithRemovals;
}
