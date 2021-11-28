#include "Weapon.hpp"

class Gun : public Weapon {
    public:
        Gun(const char* title="Gun");
        ~Gun();

        virtual void fire();
};
