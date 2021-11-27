#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal {
    public:
        Cat(const char* name="Cat");
        virtual ~Cat();

        void meow();
        void eat();
};

#endif // CAT_HPP
