#include "DefaultState.hpp"

DefaultState::DefaultState(const char *title, int hp, Weapon* weapon) :
    State(title, hp, weapon) {}
