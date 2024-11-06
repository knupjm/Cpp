#include "LaserPrinter.h"

LaserPrinter::LaserPrinter(const std::string& model,
                           const std::string& manufacturer,
                           int availableCount,
                           int availableToner)
    : Printer(model, manufacturer, availableCount), availableToner(availableToner) {
    std::cout << "레이저 : ";
    show();
}

void LaserPrinter::printLaser(int pages) {
    if (this->print(pages)) {
        this->availableToner -= (pages / 2);
    }
}

void LaserPrinter::show() {
    std::cout << this->model
        << " ," << this->manufacturer
        << " ,남은 종이 " << this->availableCount << "장"
        << " ,남은 토너 " << this->availableToner << std::endl;
}
