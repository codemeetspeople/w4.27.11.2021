#ifndef OBSERVABLE_HPP
#define OBSERVABLE_HPP

#include "Observer.hpp"

class Observer;

class Observable {
    private:
        const char* title;
        Observer* observer;

    public:
        Observable(const char* title="Observable");
        ~Observable();

        const char* getTitle() const;
        const Observer* getObserver() const;

        void subscribe(Observer* observer);
        void unsubscribe();

        void receive();
        void remove();
};

#endif // OBSERVABLE_HPP
