#include "exception.hpp"

void ClosedPenException::handle(AutoPen* pen) {
    pen->click();
}
