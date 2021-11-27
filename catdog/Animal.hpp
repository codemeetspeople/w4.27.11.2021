#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal {
    protected:
        const char* name;

    public:
        Animal(const char* name="Animal");
        virtual ~Animal();
        virtual const char* getName() const;
        virtual void eat();
};

#endif // ANIMAL_HPP
