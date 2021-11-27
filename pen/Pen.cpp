#include "Pen.hpp"

Pen::Pen(int capacity, const char* title) : WritingUtencil(capacity, title) {}

Pen::~Pen() {}


void Pen::refill() {
    this->amount = this->capacity;
}

void Pen::write(Paper& paper, const std::string& message) {
    WritingUtencil::write(paper, message);
}

std::ostream& operator<<(std::ostream& out, const Pen& pen) {
    out << *((WritingUtencil*) &pen);

    return out;
}
