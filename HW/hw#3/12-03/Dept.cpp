#include "Dept.h"
#include "iostream"

using namespace std;

Dept::Dept(int size) {
    this->size = size;
    scores = new int[size];
}

Dept::~Dept() {
    delete[] scores;
    cout << "[소멸자] 호출" << endl;
}

int Dept::getSize() {
    return size;
}

void Dept::read() {
    cout << this->size << "개의 점수 입력>> ";
    for (int i = 0; i < size; ++i) {
        cin >> scores[i];
    }
}

bool Dept::isOver60(int index) {
    if (index < 0 || index >= size) {
        cout << "범위를 벗어났습니다." << endl;
        return false;
    }

    return scores[index] > 60;
}

