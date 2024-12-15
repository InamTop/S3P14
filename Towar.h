#ifndef TOWAR_H
#define TOWAR_H

#include <string>
#include <iostream>
 
class Towar {
public:
    Towar(std::string name, double price);
    virtual ~Towar(); 
    virtual double getPrice() const;
    std::string getName() const;
    virtual void printInfo() const; // ����������� �������

protected:
    std::string name;
    double price;
};

#endif // TOWAR_H