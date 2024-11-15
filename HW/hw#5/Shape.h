#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
    Shape* next;

public:
    void setNext(Shape* next);
    Shape* getNext();

    virtual std::string getType();
};

#endif // SHAPE_H
