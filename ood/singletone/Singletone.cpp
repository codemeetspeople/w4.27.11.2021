#include "Singletone.hpp"
#include <iostream>


Singletone* Singletone::instance = NULL;

Singletone* Singletone::getInstance() {
    if ( instance == NULL ) {
        instance = new Singletone();
    }
    return instance;
}

Singletone::~Singletone() {
    instance = NULL;
}

Singletone::Singletone() {}
