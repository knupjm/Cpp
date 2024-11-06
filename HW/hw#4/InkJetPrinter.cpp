#include "InkJetPrinter.h"

InkJetPrinter::InkJetPrinter(const std::string& model,
                             const std::string& manufacturer,
                             int availableCount,
                             int availableInk)
    : Printer(model, manufacturer, availableCount), availableInk(availableInk) {
    std::cout << "잉크젯 : ";
    show();
}

void InkJetPrinter::printInkJet(int pages) {
    if (this->print(pages)) {
        this->availableInk -= pages;
    }
}

void InkJetPrinter::show() {
    std::cout << this->model
        << " ," << this->manufacturer
        << " ,남은 종이 " << this->availableCount << "장"
        << " ,남은 잉크 " << this->availableInk << std::endl;
}
