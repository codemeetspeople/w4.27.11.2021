#include "Pen.hpp"
#include "exception.hpp"

Pen::Pen(int capacity, const char* title)
    : amount(capacity), capacity(capacity), title(title) {}

Pen::~Pen() {}

int Pen::getAmount() const {
    return this->amount;
}

int Pen::getCapacity() const {
    return this->capacity;
}

const char* Pen::getTitle() const {
    return this->title;
}

void Pen::refill() {
    this->amount = this->capacity;
}

void Pen::write(Paper& paper, const std::string& message) {
    if ( this->amount == 0 ) {
        throw OutOfInkException();
    }
    if ( this->amount < message.length() ) {
        paper.addContent(message.substr(0, this->amount));
        this->amount = 0;
        return;
    }
    paper.addContent(message);
    this->amount -= message.length();
}

std::ostream& operator<<(std::ostream& out, const Pen& pen) {
    out << pen.getTitle() << "(" << pen.getAmount() << "/";
    out << pen.getCapacity() << ")";

    return out;
}
