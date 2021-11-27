#include "AutoPen.hpp"

AutoPen::AutoPen(int capacity, const char* title)
    : Pen(capacity, title), isOpen(false) {}

AutoPen::~AutoPen() {}

bool AutoPen::open() const {
    return this->isOpen;
}

void AutoPen::click() {
    this->isOpen = !this->isOpen;
}

void AutoPen::write(Paper& paper, const std::string& message) {
    if ( !this->open() ) {
        throw ClosedPenException();
    }
    Pen::write(paper, message);
}


std::ostream& operator<<(std::ostream& out, const AutoPen& ap) {
    std::cout << (Pen) ap;
    std::cout << (( ap.open() ) ? " open" : " closed");

    return out;
}