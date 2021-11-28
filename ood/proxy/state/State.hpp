#ifndef STATE_HPP
#define STATE_HPP

#include "../weapon/Weapon.hpp"

class State {
    protected:
        const char *title;
        int hp;
        Weapon* weapon;

    public:
        State(const char *title, int hp, Weapon* weapon);
        virtual ~State();

        const char* getTitle() const;
        int getHP() const;
        const Weapon* getWeapon() const;

        void attack();

};

#endif // STATE_HPP
