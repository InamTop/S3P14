#include "Producty.h"

Producty::Producty(std::string name, double price, std::string size) : Towar(name, price), size(size) {}

Producty::~Producty() {}

double Producty::getPrice() const { return price * 0.9; } // Скидка 10%

void Producty::printInfo() const {
    Towar::printInfo();
    std::cout << "Размер: " << size << std::endl;
}

void Producty::setSize(const std::string& newSize) { size = newSize; }

std::string Producty::getSize() const { return size; }