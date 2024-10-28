#include <iostream>
#include "LinkedList.h";

int main() {
    auto list = new LinkedList();
    
    list->append(20);
    list->append(10);
    list->append(30);
    list->append(40);
    list->prepend(0);

    list->displayList();
    list->pop();

    //delete list;

    return 0;
}