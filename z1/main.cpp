#include <iostream>

#include "reverse_vector.hpp"

template <typename T>
void print(T vec) {
    for (const auto el : vec) {
        std::cout << el << ' ';
    }
}

int main() {
    std::vector<int> test{1, 2, 3, 4, 5};
    reverseVector8(test);
    print(test);
    return 0;
}