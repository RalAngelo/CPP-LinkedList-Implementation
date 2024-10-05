#include <iostream>
#include <limits>
#include "linkList.h"

// Main test to implement a class for a single-linked list
int main() {
    Single_link_list list;

    // Adding elements using user input
    for (int i = 0; i < 3; i++) {
        list.addFromUser();
    }

    // Printing the list
    std::cout << "List after adding elements: ";
    list.print();

    // Removing elements from the list
    list.remove();
    std::cout << "List after removing one element: ";
    list.print();

    list.remove();
    std::cout << "List after removing another element: ";
    list.print();

    list.remove();
    std::cout << "List after removing all elements: ";
    list.print();

    list.remove(); // Attempting to remove from an empty list (handled in remove function)
    std::cout << "Attempting to remove from an empty list: ";
    list.print();

    return 0;
}
