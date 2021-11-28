#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include <set>
#include "Observable.hpp"

class Observable;

class Observer {
    private:
        const char* title;
        std::set<Observable*>* observables;

    public:
        Observer(const char* title="Observer");
        ~Observer();

        const char* getTitle() const;
        const std::set<Observable*>& getObservables() const;

        void notify();
        void remove(Observable* observable);
        void add(Observable* observable);
};

#endif // OBSERVER_HPP
