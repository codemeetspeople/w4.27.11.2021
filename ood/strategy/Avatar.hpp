#ifndef AVATAR_HPP
#define AVATAR_HPP

#include "Weapon.hpp"

class Avatar {
    private:
        const char* title;
        Weapon* weapon;

    public:
        Avatar(const char* title="Avatar");
        ~Avatar();

        const char* getTitle() const;
        const Weapon* getWeapon() const;

        void attack();
        void changeWeapon(Weapon* newWeapon);
};

#endif // AVATAR_HPP
