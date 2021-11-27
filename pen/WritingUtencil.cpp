#include "WritingUtencil.hpp"
#include "exception.hpp"

WritingUtencil::WritingUtencil(int capacity, const char* title) :
    amount(capacity), capacity(capacity), title(title) {}

WritingUtencil::~WritingUtencil() {}

int WritingUtencil::getAmount() const {
    return this->amount;
}

int WritingUtencil::getCapacity() const {
    return this->capacity;
}

const char* WritingUtencil::getTitle() const {
    return this->title;
}

void WritingUtencil::write(Paper& paper, const std::string& message) {
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

std::ostream& operator<<(std::ostream& out, const WritingUtencil& wu) {
    out << wu.getTitle() << "(" << wu.getAmount() << "/";
    out << wu.getCapacity() << ")";

    return out;
}
