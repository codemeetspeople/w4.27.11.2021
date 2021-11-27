#ifndef PEN_HPP
#define PEN_HPP

#include <iostream>
#include "Paper.hpp"
#include "WritingUtencil.hpp"

class Pen : public WritingUtencil {
    public:
        Pen(int capacity=4096, const char* title="Pen");
        virtual ~Pen();

        void refill();
        virtual void write(Paper& paper, const std::string& message);
};

std::ostream& operator<<(std::ostream& out, const Pen& pen);

#endif //PEN_HPP
