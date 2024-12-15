#include "Towar.h"

Towar::Towar(std::string name, double price) : name(name), price(price) {}

Towar::~Towar() {}

double Towar::getPrice() const { return price; }

std::string Towar::getName() const { return name; }

void Towar::printInfo() const {
    std::cout << "��������: " << name << ", ����: " << price << std::endl;
}