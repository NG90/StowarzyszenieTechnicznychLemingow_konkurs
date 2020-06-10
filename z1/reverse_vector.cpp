#include "reverse_vector.hpp"

#include <algorithm>
#include <iostream>
#include <random>

void reverseVector1(std::vector<int>& vecToReverse) {
    std::reverse(vecToReverse.begin(), vecToReverse.end());
}

void reverseVector2(std::vector<int>& vecToReverse) {
    std::vector<int> temp = vecToReverse;
    std::reverse_copy(vecToReverse.cbegin(), vecToReverse.cend(), begin(temp));
    vecToReverse = temp;
}

void reverseVector3(std::vector<int>& vecToReverse) {
    std::vector<int> temp{vecToReverse.rbegin(), vecToReverse.rend()};
    vecToReverse = temp;
}

void reverseVector4(std::vector<int>& vecToReverse) {
    std::vector<int> temp = {vecToReverse.rbegin(), vecToReverse.rend()};
    do {
        std::random_shuffle(vecToReverse.begin(), vecToReverse.end());
    } while (!std::equal(vecToReverse.begin(), vecToReverse.begin() + vecToReverse.size(), temp.begin()));
}

void reverseVector5(std::vector<int>& vecToReverse) {
    std::vector<int> temp = {vecToReverse.rbegin(), vecToReverse.rend()};

    std::random_device rd;
    std::mt19937 g(rd());

    do {
        std::shuffle(vecToReverse.begin(), vecToReverse.end(), g);
    } while (!std::equal(vecToReverse.begin(), vecToReverse.begin() + vecToReverse.size(), temp.begin()));
}

void reverseVector6(std::vector<int>& vecToReverse) {
}
