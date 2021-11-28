#include "Avatar.hpp"
#include "Gun.hpp"
#include "Rifle.hpp"

int main() {
    Avatar* a = new Avatar();

    a->attack();
    a->changeWeapon(new Rifle());
    a->attack();

    delete(a);

    return 0;
}