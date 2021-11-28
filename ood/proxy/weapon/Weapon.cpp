#include "Weapon.hpp"

Weapon::Weapon(const char* title) : title(title) {}
Weapon::~Weapon() {}

const char* Weapon::getTitle() const {
    return this->title;
}
