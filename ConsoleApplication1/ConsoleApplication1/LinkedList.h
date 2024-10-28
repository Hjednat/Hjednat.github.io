#pragma once
#include "Node.h"

class LinkedList
{
	Node* head;
    Node* tail;

public:
    // Function to display the linked list
    void displayList();

    // Function to add a node at the start of the list
    void append(int value);

    void prepend(int value);

    void insertByIndex(int index, int value);

    void clearList();

    // Remove last item from list.
    void pop();

    void removeByIndex(int index);

    void reverse();

    ~LinkedList();
};

