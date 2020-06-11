#include "remove_repeating.hpp"

#include <algorithm>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>

std::string remove_repeating(std::string& text) {
    auto numberSpacesAndPuncts = std::count_if(std::begin(text), std::end(text), [](unsigned char c) {
        return std::isspace(c) || std::ispunct(c);
    });

    auto iterStartFind = std::begin(text);
    auto iterFound = std::begin(text);
    std::vector<std::string> vectorOfCorrectWords;

    std::generate_n(std::back_inserter(vectorOfCorrectWords), numberSpacesAndPuncts, [&iterFound, &iterStartFind, &text]() {
        iterFound = std::find_if(iterStartFind, std::end(text), [](unsigned char c) {
            return std::isspace(c) || std::ispunct(c);
        });
        auto wordLength = std::distance(iterStartFind, iterFound);
        auto correctWord = text.substr(std::distance(std::begin(text), iterStartFind), wordLength + 1);
        iterStartFind = std::next(iterFound);
        return correctWord;
    });

    vectorOfCorrectWords.erase(std::unique(std::begin(vectorOfCorrectWords), std::end(vectorOfCorrectWords)),
                               std::end(vectorOfCorrectWords));

    std::ostringstream oss;
    if (!vectorOfCorrectWords.empty()) {
        std::copy(std::begin(vectorOfCorrectWords), std::end(vectorOfCorrectWords), std::ostream_iterator<std::string>(oss));
    }

    return oss.str();
}
