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

// Another little bit "workaroundish" :)
void printVector6(const std::vector<int>& vectorToPrint) {
    std::copy_if(std::begin(vectorToPrint), std::end(vectorToPrint),
                 std::ostream_iterator<int>(std::cout, " "), [](const int el) {
                     (void)el;
                     return true;
                 });
}

void printVector7(const std::vector<int>& vectorToPrint) {
    std::copy_n(std::begin(vectorToPrint), vectorToPrint.size(),
                std::ostream_iterator<int>(std::cout, " "));
}

void printVector8(const std::vector<int>& vectorToPrint) {
    std::transform(std::begin(vectorToPrint), std::end(vectorToPrint),
                   std::ostream_iterator<int>(std::cout, " "), [](const int el) {
                       return el;
                   });
}

void printVector9(const std::vector<int>& vectorToPrint) {
    std::generate_n(std::ostream_iterator<int>(std::cout, " "), vectorToPrint.size(),
                    [i{0}, &vectorToPrint]() mutable {
                        return vectorToPrint[i++];
                    });
}

std::ostream& operator<<(std::ostream& os, const std::vector<int>& vectorToPrint) {
    for (auto const& el : vectorToPrint) {
        os << el << " ";
    }
    return os;
}

void printVector10(const std::vector<int>& vectorToPrint) {
    std::cout << vectorToPrint;
}

void printVector11(const std::vector<int>& vectorToPrint) {
    for (size_t i = 0; i < vectorToPrint.size(); ++i) {
        std::cout << vectorToPrint[i] << ' ';
    }
}

void printVector12(const std::vector<int>& vectorToPrint) {
    for (auto it = std::begin(vectorToPrint); it != std::end(vectorToPrint); ++it) {
        std::cout << *it << ' ';
    }
}

void printVector13(const std::vector<int>& vectorToPrint) {
    auto it = std::begin(vectorToPrint);
    while (it != std::end(vectorToPrint)) {
        std::cout << *it << ' ';
        it++;
    }
}

void printVector14(const std::vector<int>& vectorToPrint) {
    size_t i = 0;
    while (i < vectorToPrint.size()) {
        std::cout << i++ << ' ';
    }
}

void printVector15(const std::vector<int>& vectorToPrint) {
    auto it = std::begin(vectorToPrint);
    do {
        std::cout << *it << ' ';
        it++;
    } while (it != std::end(vectorToPrint));
}

void printVector16(const std::vector<int>& vectorToPrint) {
    size_t i = 0;
    do {
        std::cout << i++ << ' ';
    } while (i < vectorToPrint.size());
}
