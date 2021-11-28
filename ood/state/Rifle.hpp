#include "Weapon.hpp"

class Rifle : public Weapon {
    public:
        Rifle(const char* title="Rifle");
        ~Rifle();

        virtual void fire();
};
