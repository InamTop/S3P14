#ifndef PRODUKTY_H
#define PRODUKTY_H

#include "Towar.h"
#include <string>

class Produkty : public Towar {
public:
    Produkty(std::string name, double price, std::string expirationDate);
    ~Produkty() override;
    void printInfo() const override;
    void setExpirationDate(const std::string& newDate);
    std::string getExpirationDate() const;

private:
    std::string expirationDate;
};

#endif