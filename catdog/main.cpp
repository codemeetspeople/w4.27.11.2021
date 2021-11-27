#include <iostream>
#include "CatDog.hpp"


int main() {
    CatDog cd = CatDog();

    cd.meow();
    cd.bark();
    cd.Cat::eat();
    cd.Dog::eat();
    cd.eat();
    cd.Animal::eat();

    return 0;
}