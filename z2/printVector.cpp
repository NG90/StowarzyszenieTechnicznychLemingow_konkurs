#include "printVector.hpp"

#include <iostream>

void printVector1(const std::vector<int>& vectorToPrint) {
    for (auto el : vectorToPrint) {
        std::cout << el << ' ';
    }
}
