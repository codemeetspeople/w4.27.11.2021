#include "Avatar.hpp"

int main() {
    Avatar* a = new Avatar();

    a->attack();
    a->changeWeapon();
    a->attack();
    a->changeWeapon();
    a->attack();

    delete(a);

    return 0;
}