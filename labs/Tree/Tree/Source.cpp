#include <iostream>

int main() {
    int countLvl;
    std::cin >> countLvl;

    int baseSpaces = countLvl + 1; // ��������� ������� ������ ����� ��������� ������� ����
    int maxLines = 3;              // ʳ������ ����� �� �����, ��� ���������� � ������ �����

    // ���� �� ������� ���� ������
    for (int level = 0; level < countLvl; level++) {
        int spaces = baseSpaces;   // �������� ������� ������ ��� ������ ����
        int stars = 1;             // ʳ������ ���� ���������� � 1 �� ��������� ����� ������� ����

        // ������� ���� ���� ��� ��������� ����
        for (int line = 0; line < maxLines; line++) {
            // �������� ������ ��� ����������� ����
            for (int s = 0; s < spaces; s++)
                std::cout << " ";

            // �������� ���� ��� ��������� �����
            for (int st = 0; st < stars; st++)
                std::cout << "*";

            std::cout << std::endl;

            // �������� ������� ������ � �������� ������� ���� ��� ���������� �����
            spaces--;
            stars += 2;
        }

        maxLines++; // �������� ������� ����� ��� ���������� ����
    }

    // ������� "�������" ������ � ���� �����
    for (int i = 0; i < 2; i++) {
        for (int s = 0; s < baseSpaces; s++)
            std::cout << " ";
        std::cout << "*" << std::endl;
    }

    return 0;
}
