#ifndef PEN_HPP
#define PEN_HPP

#include <iostream>
#include "Paper.hpp"

class Pen {
    protected:
        int amount;
        int capacity;
        const char* title;

    public:
        Pen(int capacity=4096, const char* title="Pen");
        virtual ~Pen();

        int getAmount() const;
        int getCapacity() const;
        const char* getTitle() const;

        void refill();

        virtual void write(Paper& paper, const std::string& message);
};

std::ostream& operator<<(std::ostream& out, const Pen& pen);

#endif //PEN_HPP
