#include "LinkedList.h"
#include <iostream>

void LinkedList::displayList()
{
    // Function to display the linked list
    Node* current = head;

    while (current != nullptr) {
        std::cout << current->data;

        if (current->next != nullptr) {
            std::cout << " -> ";
            current = current->next;
        }
        else {
            return;
        }
    }
}

void LinkedList::append(int value)
{
    if (head == nullptr) {
        auto newNode = new Node();
        newNode->data = value;
        head = newNode;
        return;
    }

    // Function to display the linked list
    Node* current = head;

    while (current != nullptr) {
        if (current->next != nullptr) {
            current = current->next;
        }
        else {
            Node* newNode = new Node();
            newNode->data = value;
            newNode->next = nullptr;
            current->next = newNode;
            break;
        }
    }
}

void LinkedList::clearList() {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = nullptr;
}



LinkedList::~LinkedList()
{
    clearList();
}
