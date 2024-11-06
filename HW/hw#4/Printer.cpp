#include "Printer.h"
#include <iostream>

Printer::Printer(const std::string& model, const std::string& manufacturer, int availableCount)
    // 생성자 위임을 사용하여 멤버 초기화
    : model(model), manufacturer(manufacturer), printedCount(0), availableCount(availableCount) {}

bool Printer::print(int pages) {
    if (availableCount < pages) {
        std::cout << "용지가 부족하여 프린트할 수 없습니다." << std::endl;
        return false;
    }
    this->availableCount -= pages;
    this->printedCount += pages;
    std::cout << "프린트하였습니다." << std::endl;
    return true;
}
