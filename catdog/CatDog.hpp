#ifndef CAT_DOG_HPP
#define CAT_DOG_HPP

#include "Dog.hpp"
#include "Cat.hpp"

class CatDog : public Dog, public Cat {
    public:
        CatDog(const char* name="CatDog");
        ~CatDog();

        virtual const char* getName() const;

        void eat();
};


#endif // CAT_DOG_HPP
