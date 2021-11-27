#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : virtual public Animal {
    public:
        Dog(const char* name="Dog");
        virtual ~Dog();

        void bark();
        void eat();
};

#endif // DOG_HPP
