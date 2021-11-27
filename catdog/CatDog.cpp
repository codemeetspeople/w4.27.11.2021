#include "CatDog.hpp"
#include <iostream>

CatDog::CatDog(const char* name) {
    // Why Animal without explicit initialization?
    this->name = name;
    std::cout << "CatDog()" << std::endl;
}
CatDog::~CatDog() {
    std::cout << "~CatDog()" << std::endl;
}

void CatDog::eat() {
    std::cout << this->getName() << " eats meat and fish..." << std::endl;
}

const char* CatDog::getName() const {
    return this->name;
}
