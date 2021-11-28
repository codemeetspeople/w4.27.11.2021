#include "Observer.hpp"

Observer::Observer(const char* title) {
    this->title = title;
    this->observables = new std::set<Observable*>();
}

Observer::~Observer() {
    std::set<Observable*>::iterator it;
    for ( it = this->observables->begin(); it != this->observables->end(); it++ ) {
        (*it)->remove();
    }

    delete(this->observables);
}

const char* Observer::getTitle() const {
    return this->title;
}

const std::set<Observable*>& Observer::getObservables() const {
    return *this->observables;
}

void Observer::add(Observable* observable) {
    this->observables->insert(observable);
}

void Observer::remove(Observable* observable) {
    this->observables->erase(observable);
}

void Observer::notify() {
    std::set<Observable*>::iterator it;

    for ( it = this->observables->begin(); it != this->observables->end(); it++ ) {
        (*it)->receive();
    }
}
