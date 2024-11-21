#include "GraphicEditor.h"
#include "Line.h"
#include "Circle.h"
#include "Rect.h"
#include <iostream>

int main() {
    GraphicEditor editor;

    int choice;
    do {
        std::cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            // 삽입
            int shapeType;
            std::cout << "선:1, 원:2, 사각형:3 >> ";
            std::cin >> shapeType;
            Shape* shape = nullptr;

            if (shapeType == 1) {
                shape = new Line();
            } else if (shapeType == 2) {
                shape = new Circle();
            } else if (shapeType == 3) {
                shape = new Rect();
            } else {
                std::cout << "잘못된 도형 타입입니다." << std::endl;
                continue;
            }
            editor.addShape(shape);
            break;
        }
        case 2: {
            // 삭제
            int indexToDelete;
            std::cout << "삭제하고자 하는 도형의 인덱스 >> ";
            std::cin >> indexToDelete;
            editor.removeShape(indexToDelete);
            break;
        }
        case 3: {
            // 모두보기
            editor.showAllShapes();
            break;
        }
        case 4: {
            // 종료
            break;
        }
        default: {
            std::cout << "잘못된 선택입니다." << std::endl;
        }
        }
    } while (choice != 4);

    return 0;
}
