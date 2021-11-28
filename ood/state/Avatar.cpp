#include "Avatar.hpp"
#include "Gun.hpp"
#include "Rifle.hpp"

Avatar::Avatar(const char* title) {
    this->title = title;
    this->primary = new Gun();
    this->secondary = new Rifle();
}

Avatar::~Avatar() {
    delete(this->primary);
    delete(this->secondary);
}

const char* Avatar::getTitle() const {
    return this->title;
}
\
const Weapon* Avatar::getPrimary() const {
    return this->primary;
}

const Weapon* Avatar::getSecondary() const {
    return this->secondary;
}

void Avatar::attack() {
    this->primary->fire();
}

void Avatar::changeWeapon() {
    Weapon* tmp = this->primary;

    this->primary = this->secondary;
    this->secondary = tmp;
}
