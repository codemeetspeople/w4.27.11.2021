#include "Gun.hpp"
#include <iostream>

Gun::Gun(const char* title) : Weapon(title) {}
Gun::~Gun() {}

void Gun::fire() {
    std::cout << this->getTitle() << " makes BANG!!!" << std::endl;
}
