#include "Singletone.hpp"
#include <iostream>

int main() {
    Singletone* s = Singletone::getInstance();
    std::cout << s << std::endl;

    s = Singletone::getInstance();
    std::cout << s << std::endl;

    return 0;
}
