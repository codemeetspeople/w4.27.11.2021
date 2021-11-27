#include <iostream>
#include "Pen.hpp"
#include "Paper.hpp"
#include "AutoPen.hpp"
#include "exception.hpp"

void write(Pen* pen, Paper* paper, const std::string& message) {
    pen->write(*paper, message);
}

int main() {
    Pen pen = Pen();
    Paper paper = Paper();
    AutoPen ap = AutoPen();

    write(&pen, &paper, "Hello!");

    std::cout << pen << std::endl;
    std::cout << paper << std::endl;

    try {
        write(&ap, &paper, "Hello again!");
    } catch ( ClosedPenException obj ) {
        obj.handle(&ap);
        write(&ap, &paper, "Hello again!");
    }


    std::cout << ap << std::endl;
    std::cout << paper << std::endl;

    return 0;
}
