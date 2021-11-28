#ifndef AVATAR_HPP
#define AVATAR_HPP

#include "Weapon.hpp"

class Avatar {
    private:
        const char* title;
        Weapon* primary;
        Weapon* secondary;

    public:
        Avatar(const char* title="Avatar");
        ~Avatar();

        const char* getTitle() const;
        const Weapon* getPrimary() const;
        const Weapon* getSecondary() const;

        void attack();
        void changeWeapon();
};

#endif // AVATAR_HPP
