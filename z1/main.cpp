#include <iostream>

#include "reverse_vector.hpp"

template <typename T>
void print(T vec) {
    for (const auto el : vec) {
        std::cout << el << ' ';
    }
}

int main() {
    std::cout << "\nreverseVector1\n";
    std::cout << "before: \n";
    std::vector<int> test1{1, 2, 3, 4, 5};
    print(test1);
    reverseVector1(test1);
    std::cout << "after: \n";
    print(test1);

    std::cout << "\nreverseVector2\n";
    std::cout << "before: \n";
    std::vector<int> test2{1, 2, 3, 4, 5};
    print(test2);
    reverseVector2(test2);
    std::cout << "after: \n";
    print(test2);

    std::cout << "\nreverseVector3\n";
    std::cout << "before: \n";
    std::vector<int> test3{1, 2, 3, 4, 5};
    print(test3);
    reverseVector3(test3);
    std::cout << "after: \n";
    print(test3);

    std::cout << "\nreverseVector4\n";
    std::cout << "before: \n";
    std::vector<int> test4{1, 2, 3, 4, 5};
    print(test4);
    reverseVector4(test4);
    std::cout << "after: \n";
    print(test4);

    std::cout << "\nreverseVector5\n";
    std::cout << "before: \n";
    std::vector<int> test5{1, 2, 3, 4, 5};
    print(test5);
    reverseVector5(test5);
    std::cout << "after: \n";
    print(test5);

    std::cout << "\nreverseVector6\n";
    std::cout << "before: \n";
    std::vector<int> test6{1, 2, 3, 4, 5};
    print(test6);
    reverseVector6(test6);
    std::cout << "after: \n";
    print(test6);

    std::cout << "\nreverseVector7\n";
    std::cout << "before: \n";
    std::vector<int> test7{1, 2, 3, 4, 5};
    print(test7);
    reverseVector7(test7);
    std::cout << "after: \n";
    print(test7);

    std::cout << "\nreverseVector8\n";
    std::cout << "before: \n";
    std::vector<int> test8{1, 2, 3, 4, 5};
    print(test8);
    reverseVector8(test8);
    std::cout << "after: \n";
    print(test8);
    return 0;
}
