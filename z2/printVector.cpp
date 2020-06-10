#include "printVector.hpp"

#include <algorithm>
#include <iostream>
#include <iterator>

void printVector1(const std::vector<int>& vectorToPrint) {
    for (auto el : vectorToPrint) {
        std::cout << el << ' ';
    }
}

void printVector2(const std::vector<int>& vectorToPrint) {
    std::copy(std::begin(vectorToPrint), std::end(vectorToPrint),
              std::ostream_iterator<int>(std::cout, " "));
}

void printVector3(const std::vector<int>& vectorToPrint) {
    std::for_each(std::begin(vectorToPrint), std::end(vectorToPrint), [](const int c) {
        std::cout << c << ' ';
    });
}
