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
    std::for_each(std::begin(vectorToPrint), std::end(vectorToPrint), [](const int el) {
        std::cout << el << ' ';
    });
}

void printVector4(const std::vector<int>& vectorToPrint) {
    std::for_each_n(std::begin(vectorToPrint), vectorToPrint.size(), [](const int el) {
        std::cout << el << ' ';
    });
}

// Ugly, but works :)
void printVector5(const std::vector<int>& vectorToPrint) {
    std::all_of(std::begin(vectorToPrint), std::end(vectorToPrint), [](const int el) {
        std::cout << el << ' ';
        return true;
    });
}
