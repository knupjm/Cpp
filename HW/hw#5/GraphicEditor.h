#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H
#include "Shape.h"


class GraphicEditor {
    Shape* pStart;
    Shape* pLast;

public:
    GraphicEditor();
    ~GraphicEditor();
    void addShape(Shape* pShape);
    void removeShape(int index);
    void showAllShapes();
};


#endif //GRAPHICEDITOR_H
