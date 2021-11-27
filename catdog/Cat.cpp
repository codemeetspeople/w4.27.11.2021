#include "Cat.hpp"
#include <iostream>

Cat::Cat(const char* name) : Animal(name) {
    std::cout << "Cat()" << std::endl;
}

Cat::~Cat() {
    std::cout << "~Cat()" << std::endl;
}

void Cat::meow() {
    std::cout << this->getName() << " say meow..." << std::endl;
}

void Cat::eat() {
    std::cout << this->getName() << " eats fish..." << std::endl;
}
