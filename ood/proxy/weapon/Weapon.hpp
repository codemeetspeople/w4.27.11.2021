#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon {
    protected:
        const char* title;

    public:
        Weapon(const char* title);
        virtual ~Weapon();

        virtual const char* getTitle() const;

        virtual void fire() = 0;
};


#endif // WEAPON_HPP
