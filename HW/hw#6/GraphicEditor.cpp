#include "GraphicEditor.h"
#include "Shape.h"
#include <iostream>

using namespace std;

GraphicEditor::GraphicEditor() {
    cout << "그래픽 에디터입니다." << std::endl;
}

GraphicEditor::~GraphicEditor() {
    vector<Shape*>::iterator it;
    for (it = v.begin(); it != v.end(); it++) {
        delete *it;
    }
}

void GraphicEditor::addShape(Shape* pShape) {
    v.push_back(pShape);
}

void GraphicEditor::removeShape(int index) {
    delete v[index];
    v.erase(v.begin() + index);
}

void GraphicEditor::showAllShapes() {
    vector<Shape*>::iterator it;
    int i = 0;
    for (it = v.begin(); it != v.end(); it++) {
        cout << i << ": ";
        (*it)->paint();
        i++;
    }
}
