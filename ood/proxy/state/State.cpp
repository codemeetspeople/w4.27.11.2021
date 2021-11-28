#include "State.hpp"

State::State(const char *title, int hp, Weapon* weapon) {
    this->title = title;
    this->hp = hp;
    this->weapon = weapon;
}

State::~State() {
    delete(this->weapon);
}

const char* State::getTitle() const {
    return this->title;
}

int State::getHP() const {
    return this->hp;
}

const Weapon* State::getWeapon() const {
    return this->weapon;
}

void State::attack() {
    this->weapon->fire();
}
