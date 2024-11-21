#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H
#include <vector>

class Shape;
using namespace std;

class GraphicEditor {
    vector<Shape*> v;

public:
    GraphicEditor();
    ~GraphicEditor();
    void addShape(Shape* pShape);
    void removeShape(int index);
    void showAllShapes();
};


#endif //GRAPHICEDITOR_H
