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

inline void removeFromEnd(Node** head) {
    if (*head == nullptr)
        return;
    else if ((*head)->next == nullptr) {
        delete* head;
        *head = nullptr;
        return;
    }
    else if (*head != nullptr) {
        Node* current = *head;
        while (current->next->next != nullptr) {
            current = current->next;
        }

        delete current->next;
        current->next = nullptr;
    }
}

inline Node* searchElement(Node** head, int value) {
    if (*head != nullptr) {
        Node* current = *head;

        while (current != nullptr) {
            if (current->data == value)
                return current;

            current = current->next;
        }
    }
    
    return nullptr;
}

int main() {
    Node* head = nullptr;
    
    addToEnd(&head, 10);
    addToEnd(&head, 20);
    addToFront(&head, 0);
    addToEnd(&head, 30);

    printList(head);

    std::cout << searchElement(&head, 20) << std::endl;

    removeFromEnd(&head);
    removeFromEnd(&head);
    removeFromEnd(&head);
    removeFromEnd(&head);
    removeFromEnd(&head);
    std::cout << searchElement(&head, 20) << std::endl;
    printList(head);


    return 0;
}