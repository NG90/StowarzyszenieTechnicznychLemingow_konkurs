#include "christmas_tree.hpp"

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void draw_tree(int height) {
    const size_t size = height * height * 2;
    std::string tree(size, '.');
    std::vector<int> f1(size);
    std::vector<int> f2(size);

    std::generate(f1.begin(), f1.end(), [height, x{0}]() mutable {
        return (-1) * std::abs(x++ % (height * 2) - height);
    });

    std::generate(f2.begin(), f2.end(), [height, x{0}]() mutable {
        return (x++ / (2 * height));
    });

    std::transform(f1.begin(), f1.end(), f2.begin(), tree.begin(), [height](int x1, int x2) {
        if ((x1 + x2) >= 0) {
            return '*';
        } else if (x1 == (height * (-1))) {
            return '\n';
        } else {
            return ' ';
        }
    });

    std::cout << "Merry Christmas!\n"
              << tree << "\n";
}

