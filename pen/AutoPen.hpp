#ifndef AUTO_PEN_HPP
#define AUTO_PEN_HPP

#include "Pen.hpp"
#include "exception.hpp"

class AutoPen : public Pen {
    private:
        bool isOpen;

    public:
        AutoPen(int capacity=4096, const char* title="AutoPen");
        virtual ~AutoPen();

        bool open() const;
        void click();
        virtual void write(Paper& paper, const std::string& message);
};

std::ostream& operator<<(std::ostream& out, const AutoPen& ap);

#endif // AUTO_PEN_HPP
