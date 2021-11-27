#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include "AutoPen.hpp"

class AutoPen;

class OutOfInkException {};
class OutOfSpaceException {};

class ClosedPenException {
    public:
        ClosedPenException();
        void handle(AutoPen* pen);
};

#endif // EXCEPTION_HPP
