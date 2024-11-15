#include "GraphicEditor.h"
#include <iostream>

GraphicEditor::GraphicEditor() : pStart(nullptr), pLast(nullptr) {
    std::cout << "그래픽 에디터입니다." << std::endl;
}

GraphicEditor::~GraphicEditor() {
    Shape* current = pStart;
    while (current != nullptr) {
        Shape* next = current->getNext();
        delete current;
        current = next;
    }
}

void GraphicEditor::addShape(Shape* pShape) {
    if (pStart == nullptr) {
        pStart = pLast = pShape;
        pShape->setNext(nullptr);
    } else {
        pLast->setNext(pShape);
        pShape->setNext(nullptr);
        pLast = pShape;
    }
}

void GraphicEditor::removeShape(int index) {
    Shape* current = pStart;
    Shape* previous = nullptr;
    int currentIndex = 0;

    while (current != nullptr && currentIndex < index) {
        previous = current;
        current = current->getNext();
        currentIndex++;
    }

    if (current == nullptr) {
        std::cout << "인덱스 초과" << std::endl;
        return;
    }

    Shape* next = current->getNext();

    if (previous != nullptr) {
        previous->setNext(next);
    } else {
        pStart = next;
    }

    if (next == nullptr) {
        pLast = previous;
    }

    delete current;
}

void GraphicEditor::showAllShapes() {
    int index = 0;
    Shape* current = pStart;
    while (current != nullptr) {
        std::cout << index << ": " << current->getType() << std::endl;
        current = current->getNext();
        index++;
    }
}
