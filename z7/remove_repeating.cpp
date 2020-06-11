
#include "remove_repeating.hpp"

#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <iterator>
#include <sstream>



std::vector<std::string> getWord(std::string str){
    std::vector<std::string> allwrords(std::count(str.begin(), str.end(), ' ') + 1);
    std::generate(allwrords.begin(), allwrords.end(), [&allwrords, &str, n{0}]() mutable {
        std::string finalstr = str.substr(0, str.find(' '));
        str.erase(0, str.find(' ') + 1);
        return finalstr;
    });
    return allwrords;
}

std::ostringstream remove_repeating(std::string str){
    std::vector<std::string> vecofstr = getWord(str);
    auto foremove = std::unique(vecofstr.begin(), vecofstr.end());
    vecofstr.erase(foremove, vecofstr.end());
    std::ostringstream vts; 
    std::ostream_iterator<std::string>(vts, " ");
    return vts;
}