#include "remove_repeating.hpp"

#include <iostream> 
#include <string>
#include <iterator>
#include <sstream>

int main(){
    std::ostringstream str = remove_repeating("Ala ma ma kota, a kot ma ma Ale Ale");
    std::cout << str.str();
    return 0;
}