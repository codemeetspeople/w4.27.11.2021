#include "Paper.hpp"
#include "exception.hpp"

Paper::Paper(int symbols) {
    this->symbols = symbols;
    this->content = new std::string();
}

Paper::~Paper() {
    delete(this->content);
}

const std::string& Paper::getContent() const {
    return *this->content;
}

int Paper::getSymbols() const {
    return this->symbols;
}

void Paper::addContent(const std::string& message) {
    if ( this->content->length() == this->symbols ) {
        throw OutOfSpaceException();
    }
    int available = this->symbols - this->content->length();

    if ( message.length() > available ) {
        *this->content += message.substr(0, available);
    }
    *this->content += message;
}

void Paper::show() {
    std::cout << *this->content << std::endl;
}


std::ostream& operator<<(std::ostream& out, const Paper& paper) {
    out << "Paper(" << paper.getContent().length() << "/";
    out << paper.getSymbols() << ")";

    return out;
}
