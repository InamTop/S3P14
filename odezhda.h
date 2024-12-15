#ifndef ODEZHDA_H
#define ODEZHDA_H

#include "Towar.h"
#include <string>

class Odezhda : public Towar {
public:
    Odezhda(std::string name, double price, std::string size);
    ~Odezhda() override;
    double getPrice() const override; // Переопределяем для добавления скидки
    void printInfo() const override;
    void setSize(const std::string& newSize);
    std::string getSize() const;


private:
    std::string size;
};

#endif