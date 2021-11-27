#include "Animal.hpp"
#include <iostream>

Animal::Animal(const char* name) : name(name) {
    std::cout << "Animal()" << std::endl;
}
Animal::~Animal() {
    std::cout << "~Animal()" << std::endl;
}

const char* Animal::getName() const {
    return this->name;
}

void Animal::eat() {
    std::cout << this->getName() << " eats everything..." << std::endl;
}
