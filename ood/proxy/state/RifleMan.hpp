#ifndef RIFLE_MAN_HPP
#define RIFLE_MAN_HPP

#include "State.hpp"
#include "../weapon/Weapon.hpp"
#include "../weapon/Rifle.hpp"

class RifleMan : public State {
    public:
        RifleMan(const char *title="RifleMan", int hp=200, Weapon* weapon=new Rifle());
};

#endif // RIFLE_MAN_HPP
