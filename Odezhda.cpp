#include "Odezhda.h"

Odezhda::Odezhda(std::string name, double price, std::string size) : Towar(name, price), size(size) {}

Odezhda::~Odezhda() {}

double Odezhda::getPrice() const { return price * 0.9; } // Скидка 10%

void Odezhda::printInfo() const {
    Towar::printInfo();
    std::cout << "Размер: " << size << std::endl;
}

void Odezhda::setSize(const std::string& newSize) { size = newSize; }

std::string Odezhda::getSize() const { return size; }