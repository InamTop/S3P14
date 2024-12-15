#include <iostream>
#include <vector>
#include "Towar.h"
#include "Odezhda.h"
#include "Produkty.h"
#include <algorithm>

int main() {
    std::vector<Towar*> tovary;
    tovary.push_back(new Odezhda("Рубашка", 100.0, "M"));
    tovary.push_back(new Produkty("Хлеб", 30.0, "2024-10-27"));
    tovary.push_back(new Odezhda("Платье", 200.0, "S"));
    tovary.push_back(new Produkty("Молоко", 50.0, "2024-10-26"));

    int choice;
    do {
        std::cout << "\nМеню:\n";
        std::cout << "1. Показать информацию о товарах\n";
        std::cout << "2. Изменить свойства товара\n";
        std::cout << "3. Найти самый дорогой товар\n";
        std::cout << "4. Выход\n";
        std::cout << "Ваш выбор: ";
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
            std::cout << "Введите номер товара для изменения: ";
            std::cin >> index;
            if (index >= 1 && index <= tovary.size()) {
                tovary[index - 1]->printInfo();
                
            }
            else {
                std::cout << "Неверный номер товара.\n";
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
                std::cout << "Самый дорогой товар: ";
                tovary[maxIndex]->printInfo();
            }
            else {
                std::cout << "Товаров нет.\n";
            }
            break;
        }
        case 4:
            std::cout << "Выход из программы.\n";
            break;
        default:
            std::cout << "Неверный выбор. Попробуйте еще раз.\n";
        }
    } while (choice != 4);

    for (Towar* t : tovary) {
        delete t;
    }

    return 0;
}