#ifndef DEFAULT_STATE_HPP
#define DEFAULT_STATE_HPP

#include "State.hpp"
#include "../weapon/Weapon.hpp"
#include "../weapon/Gun.hpp"

class DefaultState : public State {
    public:
        DefaultState(const char *title="Default", int hp=100, Weapon* weapon=new Gun());
};

#endif // STATE_HPP
