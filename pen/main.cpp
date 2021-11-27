#include <iostream>
#include "Pen.hpp"
#include "Paper.hpp"
#include "AutoPen.hpp"
// #include "WritingUtencil.hpp"
#include "exception.hpp"

void write(WritingUtencil* wu, Paper* paper, const std::string& message) {
    wu->write(*paper, message);
}

int main() {
    Pen pen = Pen();
    Paper paper = Paper();
    AutoPen ap = AutoPen();
    // WritingUtencil wu = WritingUtencil();

    write(&pen, &paper, "Hello!");

    std::cout << pen << std::endl;
    std::cout << paper << std::endl;

    try {
        write(&ap, &paper, "Hello again!");
    } catch ( ClosedPenException obj ) {
        // obj.handle(&ap);
        ap.click();
        write(&ap, &paper, "Hello again!");
    }


    std::cout << ap << std::endl;
    std::cout << paper << std::endl;

    return 0;
}
