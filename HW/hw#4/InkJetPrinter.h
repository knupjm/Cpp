#ifndef INKJETPRINTER_H
#define INKJETPRINTER_H

#include "Printer.h"
#include <iostream>

class InkJetPrinter : public Printer {
private:
    int availableInk;

public:
    InkJetPrinter(const std::string& model, const std::string& manufacturer, int availableCount, int availableInk);
    void printInkJet(int pages);
    void show();
};

#endif // INKJETPRINTER_H
