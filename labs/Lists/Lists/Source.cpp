#include <iostream>

struct Node {
	int data;
	Node* next;
};

inline void addToFront(Node** head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

inline void removeFromFront(Node** head) {
    if (*head != nullptr) {
        Node* temp = *head;
        *head = (*head)->next;
        delete temp;
    }
}

inline void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "null" << std::endl;
}

inline void addToEnd(Node** head, int value) {
    // Перевірка, чи список пустий
    if (*head == nullptr) {
        addToFront(head, value);
        return;
    }
    else {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        Node* current = *head;
        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = newNode;
    }
}

// Функція для видалення останнього елемента з пов'язаного списку
inline void removeFromEnd(Node** head) {
    // Перевірка, чи список пустий
    if (*head == nullptr) {
        return;
    }
    // Якщо в списку тільки один елемент
    else if ((*head)->next == nullptr) {
        delete* head; 
        *head = nullptr;
        return;
    }
    // Перевірка на випадок, якщо список не пустий
    else if (*head != nullptr) {
        Node* current = *head; 
        // Проходимо до передостаннього елемента
        while (current->next->next != nullptr) {
            current = current->next; 
        }

        delete current->next; // Видаляємо останній елемент
        current->next = nullptr; // Оновлюємо вказівник на наступний елемент як nullptr
    }
}

// Функція для пошуку елемента за значенням
inline Node* searchElement(Node** head, int value) {
    // Перевірка, чи список не пустий
    if (*head != nullptr) {
        Node* current = *head; 

        // Проходимо по всіх елементах списку
        while (current != nullptr) {
            // Перевіряємо, чи значення поточного елемента дорівнює шуканому
            if (current->data == value)
                return current;

            current = current->next; 
        }
    }

    return nullptr; // Якщо елемент не знайдено, повертаємо nullptr
}


int main() {
    Node* head = nullptr;
    
    // Додаємо елементи до списку
    addToEnd(&head, 10);
    addToEnd(&head, 20);
    addToFront(&head, 0);
    addToEnd(&head, 30);

    // Виводимо список
    printList(head);

    // Шукаємо елемент за значенням
    std::cout << searchElement(&head, 20) << std::endl;

    // Видаляємо на 1 елемент більше, ніж було в списку
    removeFromEnd(&head);
    removeFromEnd(&head);
    removeFromEnd(&head);
    removeFromEnd(&head);
    removeFromEnd(&head);

    // Шукаємо неіснуючий елемент
    std::cout << searchElement(&head, 20) << std::endl;

    return 0;
}