#include <iostream>
#include <vector>
#include "Towar.h"
#include "Odezhda.h"
#include "Produkty.h"
#include <algorithm>

int main() {
    std::vector<Towar*> tovary;
    tovary.push_back(new Odezhda("�������", 100.0, "M"));
    tovary.push_back(new Produkty("����", 30.0, "2024-10-27"));
    tovary.push_back(new Odezhda("������", 200.0, "S"));
    tovary.push_back(new Produkty("������", 50.0, "2024-10-26"));

    int choice;
    do {
        std::cout << "\n����:\n";
        std::cout << "1. �������� ���������� � �������\n";
        std::cout << "2. �������� �������� ������\n";
        std::cout << "3. ����� ����� ������� �����\n";
        std::cout << "4. �����\n";
        std::cout << "��� �����: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            for (size_t i = 0; i < tovary.size(); ++i) {
                std::cout << i + 1 << ". ";
                tovary[i]->printInfo();
            }
            break;
        case 2: {
            int index;
            std::cout << "������� ����� ������ ��� ���������: ";
            std::cin >> index;
            if (index >= 1 && index <= tovary.size()) {
                tovary[index - 1]->printInfo();
                
            }
            else {
                std::cout << "�������� ����� ������.\n";
            }
            break;
        }
        case 3: {
            double maxPrice = 0;
            int maxIndex = -1;
            for (size_t i = 0; i < tovary.size(); ++i) {
                if (tovary[i]->getPrice() > maxPrice) {
                    maxPrice = tovary[i]->getPrice();
                    maxIndex = i;
                }
            }
            if (maxIndex != -1) {
                std::cout << "����� ������� �����: ";
                tovary[maxIndex]->printInfo();
            }
            else {
                std::cout << "������� ���.\n";
            }
            break;
        }
        case 4:
            std::cout << "����� �� ���������.\n";
            break;
        default:
            std::cout << "�������� �����. ���������� ��� ���.\n";
        }
    } while (choice != 4);

    for (Towar* t : tovary) {
        delete t;
    }

    return 0;
}