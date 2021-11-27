#include "Dog.hpp"
#include <iostream>

Dog::Dog(const char* name) : Animal(name) {
    std::cout << "Dog()" << std::endl;
}

Dog::~Dog() {
    std::cout << "~Dog()" << std::endl;
}

void Dog::bark() {
    std::cout << this->getName() << " say woof-woof..." << std::endl;
}

void Dog::eat() {
    std::cout << this->getName() << " eats meat..." << std::endl;
}
