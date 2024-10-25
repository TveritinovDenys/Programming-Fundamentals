#include <iostream>

int main() {
    int countLvl;
    std::cin >> countLvl;

    int baseSpaces = countLvl + 1; // Початкова кількість пробілів перед верхівкою кожного рівня
    int maxLines = 3;              // Кількість рядків на рівень, яка збільшується з кожним рівнем

    // Цикл по кожному рівню ялинки
    for (int level = 0; level < countLvl; level++) {
        int spaces = baseSpaces;   // Скидання кількості пробілів для нового рівня
        int stars = 1;             // Кількість зірок починається з 1 на верхньому рядку кожного рівня

        // Малюємо ряди зірок для поточного рівня
        for (int line = 0; line < maxLines; line++) {
            // Виводимо пробіли для вирівнювання зірок
            for (int s = 0; s < spaces; s++)
                std::cout << " ";

            // Виводимо зірки для поточного рядка
            for (int st = 0; st < stars; st++)
                std::cout << "*";

            std::cout << std::endl;

            // Зменшуємо кількість пробілів і збільшуємо кількість зірок для наступного рядка
            spaces--;
            stars += 2;
        }

        maxLines++; // Збільшуємо кількість рядків для наступного рівня
    }

    // Малюємо "стовбур" ялинки з двох рядків
    for (int i = 0; i < 2; i++) {
        for (int s = 0; s < baseSpaces; s++)
            std::cout << " ";
        std::cout << "*" << std::endl;
    }

    return 0;
}
