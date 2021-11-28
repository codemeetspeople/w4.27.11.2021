#include "Observable.hpp"
#include <iostream>

Observable::Observable(const char* title) {
    this->title = title;
    this->observer = NULL;
}

Observable::~Observable() {
    this->observer->remove(this);
}

const char* Observable::getTitle() const {
    return this->title;
}

const Observer* Observable::getObserver() const {
    return this->observer;
}

void Observable::subscribe(Observer* observer) {
    if ( this->observer != NULL ) {
        return;
    }
    this->observer = observer;
    this->observer->add(this);
}

void Observable::unsubscribe() {
    if ( this->observer == NULL ) {
        return;
    }
    this->observer->remove(this);
    this->observer = NULL;
}

void Observable::receive() {
    std::cout << this->title << " receive notification from ";
    std::cout << this->observer->getTitle() << std::endl;
}

void Observable::remove() {
    this->observer = NULL;
}
