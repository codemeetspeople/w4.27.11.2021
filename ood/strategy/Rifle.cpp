#include "Rifle.hpp"
#include <iostream>

Rifle::Rifle(const char* title) : Weapon(title) {}
Rifle::~Rifle() {}

void Rifle::fire() {
    std::cout << this->getTitle() << " makes Boooom!!!" << std::endl;
}
