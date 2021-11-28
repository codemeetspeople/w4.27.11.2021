#ifndef AVATAR_HPP
#define AVATAR_HPP

#include <iostream>
#include "state/State.hpp"

class Avatar {
    private:
        State* state;

    public:
        Avatar();
        virtual ~Avatar();

        const char* getTitle() const;
        int getHP() const;
        const Weapon* getWeapon() const;

        void attack();

        void changeState(State* newState);

};

std::ostream& operator<<(std::ostream& out, const Avatar& av);

#endif // AVATAR_HPP
