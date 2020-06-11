#include "remove_repeating.hpp"

#include <algorithm>

void removeDuplicates(std::vector<std::string>& str) {
    std::transform(begin(str), end(str), begin(str), [](std::string& s) {
        s.erase(std::remove_if(s.begin(), s.end(),
                               [](unsigned char ch) {
                                   return ch == '.';
                               }),
                end(s));
        return s;
    });
    str.erase(std::unique(str.begin(), std::prev(str.end())), str.end());
}
