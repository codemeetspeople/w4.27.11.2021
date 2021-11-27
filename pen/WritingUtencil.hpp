#ifndef WRITING_UTENCIL_HPP
#define WRITING_UTENCIL_HPP

#include <iostream>
#include "Paper.hpp"

// Abnstract class (contains pure virtual method(s))
class WritingUtencil {
    protected:
        int amount;
        int capacity;
        const char* title;

    public:
        WritingUtencil(int capacity=4096, const char* title="Utencil");
        virtual ~WritingUtencil();

        int getAmount() const;
        int getCapacity() const;
        const char* getTitle() const;

        // Pure virtual method
        virtual void write(Paper& paper, const std::string& message) = 0;
};

std::ostream& operator<<(std::ostream& out, const WritingUtencil& wu);

#endif // WRITING_UTENCIL_HPP
