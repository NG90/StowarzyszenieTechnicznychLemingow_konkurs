#include "printVector.hpp"

#include <iostream>

int main() {
    std::vector<int> testVector{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printVector1(testVector);
    std::cout << '\n';
    printVector2(testVector);

    return 0;
}
