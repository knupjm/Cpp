#ifndef LASERPRINTER_H
#define LASERPRINTER_H

#include "Printer.h"
#include <iostream>

class LaserPrinter : public Printer {
    int availableToner;

public:
    LaserPrinter(const std::string& model, const std::string& manufacturer, int availableCount, int availableToner);
    void printLaser(int pages);
    void show();
};


#endif // LASERPRINTER_H
