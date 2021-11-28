#include "Avatar.hpp"
#include "state/DefaultState.hpp"

Avatar::Avatar() {
    this->state = new DefaultState();
}

Avatar::~Avatar() {
    delete(this->state);
}

const char* Avatar::getTitle() const {
    return this->state->getTitle();
}
int Avatar::getHP() const {
    return this->state->getHP();
}
const Weapon* Avatar::getWeapon() const {
    return this->state->getWeapon();
}

void Avatar::attack() {
    this->state->attack();
}

void Avatar::changeState(State* newState) {
    State* old = this->state;

    this->state = newState;

    delete(old);
}

std::ostream& operator<<(std::ostream& out, const Avatar& av) {
    out << av.getTitle() << ':' << std::endl;
    out << "- hp: " << av.getHP() << std::endl;
    out << "- weapon: " << av.getWeapon()->getTitle() << std::endl;

    return out;
}