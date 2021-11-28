#include <iostream>
#include "Observer.hpp"
#include "Observable.hpp"

int main() {
    Observer* parent = new Observer("Parent");

    Observable* child1 = new Observable("Child 1");
    Observable* child2 = new Observable("Child 2");
    Observable* child3 = new Observable("Child 3");

    child1->subscribe(parent);
    child2->subscribe(parent);
    child3->subscribe(parent);

    std::cout << child1->getObserver() << std::endl;
    std::cout << child2->getObserver() << std::endl;
    std::cout << child3->getObserver() << std::endl;

    delete(parent);

    std::cout << child1->getObserver() << std::endl;
    std::cout << child2->getObserver() << std::endl;
    std::cout << child3->getObserver() << std::endl;

    return 0;
}
