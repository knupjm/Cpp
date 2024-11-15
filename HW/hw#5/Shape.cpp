#include "Shape.h"

void Shape::setNext(Shape* next) {
    this->next = next;
}

Shape* Shape::getNext() {
    return next;
}

std::string Shape::getType() {
    return "Shape";
}
