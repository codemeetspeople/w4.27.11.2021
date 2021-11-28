#include "Avatar.hpp"
#include "Gun.hpp"

Avatar::Avatar(const char* title) : title(title), weapon(new Gun()) {}
Avatar::~Avatar() {
    delete(this->weapon);
}

const char* Avatar::getTitle() const {
    return this->title;
}
const Weapon* Avatar::getWeapon() const {
    return this->weapon;
}

void Avatar::attack() {
    this->weapon->fire();
}

void Avatar::changeWeapon(Weapon* newWeapon) {
    Weapon* old = this->weapon;

    this->weapon = newWeapon;

    delete(old);
}
