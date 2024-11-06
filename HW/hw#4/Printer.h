#ifndef PRINTER_H
#define PRINTER_H

#include <string>

class Printer {
protected:
    std::string model; // 모델명
    std::string manufacturer; // 제조사
    int printedCount; // 출력한 페이지 수
    int availableCount; // 남은 종이 수
    Printer(const std::string& model, const std::string& manufacturer, int availableCount);
    bool print(int pages);
};

#endif // PRINTER_H
