#include "RifleMan.hpp"

RifleMan::RifleMan(const char *title, int hp, Weapon* weapon) :
    State(title, hp, weapon) {}
