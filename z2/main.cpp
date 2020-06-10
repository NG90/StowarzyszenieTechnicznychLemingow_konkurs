#include <iostream>

#include "printVector.hpp"

int main() {
    std::vector<int> testVector{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::cout << "1:     ";
    printVector1(testVector);
    std::cout << "\n2:     ";
    printVector2(testVector);
    std::cout << "\n3:     ";
    printVector3(testVector);
    std::cout << "\n4:     ";
    printVector4(testVector);
    std::cout << "\n5:     ";
    printVector5(testVector);
    std::cout << "\n6:     ";
    printVector6(testVector);

    std::cout << "\n";

    return 0;
}
