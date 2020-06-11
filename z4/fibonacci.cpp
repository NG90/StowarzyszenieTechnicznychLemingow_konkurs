#include "fibonacci.hpp"

#include <algorithm>
#include <vector>

long int fibonacci1(long int require) {
    if (require == 1 || require == 2) {
        return 1;
    }
    return require = fibonacci1(require - 1) + fibonacci1(require - 2);
}

long int fibonacci2(long int require) {
    std::vector<long int> vec(require + 1);
    vec[0] = 0;
    vec[1] = 1;
    std::generate(std::next(vec.begin(), 2), vec.end(), [n = 1, &vec]() mutable {n++; return vec[n-2] + vec[n-1]; });
    return vec[require];
}

long int fibonacci3(long int require) {
    std::vector<long int> vec(require);
    vec[0] = 0;
    vec[1] = 1;
    long int n = 2;
    for (auto& el : vec) {
        el = vec[n - 2] + vec[n - 1];
        n++;
    }
    return vec[require - 1];
}
