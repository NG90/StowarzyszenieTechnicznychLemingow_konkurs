#include "reverse_vector.hpp"

#include <algorithm>
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
    auto first = vecToReverse.begin();
    auto last = vecToReverse.end();
    while ((first != last) && (first != --last)) {
        std::iter_swap(first++, last);
    }
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
    std::vector<int> temp = vecToReverse;
    reverseVector1(temp);
    vecToReverse.swap(temp);
}

void reverseVector7(std::vector<int>& vecToReverse) {
    std::vector<int> temp = vecToReverse;
    std::copy_backward(vecToReverse.rbegin(), vecToReverse.rend(), temp.end());
    vecToReverse = temp;
}

void reverseVector8(std::vector<int>& vecToReverse) {
    std::vector<int> temp{};
    std::copy(vecToReverse.rbegin(), vecToReverse.rend(), std::back_inserter(temp));
    vecToReverse = temp;
}

void reverseVector9(std::vector<int>& vecToReverse) {
    std::vector<int> temp{};
    std::transform(vecToReverse.rbegin(), vecToReverse.rend(), std::back_inserter(temp), [](const int el) {
        return el;
    });
    vecToReverse = temp;
}

void reverseVector10(std::vector<int>& vecToReverse) {
    std::vector<int> temp{};
    std::generate_n(std::back_inserter(temp), vecToReverse.size(), [&vecToReverse, i{vecToReverse.size() - 1}]() mutable {
        return vecToReverse[i--];
    });
    vecToReverse = temp;
}
