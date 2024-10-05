#include "linkList.h"
#include <iostream> //input and output access
#include <limits> //access to various definitions and functions related to the limits of fundamental data types, such as integers and floating-point numbers

Node::Node(int value) : data(value), next(nullptr) {}

Single_link_list::Single_link_list() : head(nullptr), tail(nullptr) {}

Single_link_list::~Single_link_list() {//Destructor (for deallocating the memory occupied by the nodes)
    Node* current = head;
    Node* nextNode;

    while (current != nullptr) { //The loop continues as long as current isn't nullptr
        nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

void Single_link_list::add(int value) {
    Node* newNode = new Node(value);
    if (tail == nullptr) {//Checks if the list is empty
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void Single_link_list::remove() {
    //Checks for empty and single-node cases
    if (head == nullptr) {
        std::cout << "List is empty, nothing to remove." << std::endl;
        return;
    }

    if (head == tail) {
        delete head;
        head = tail = nullptr;
        return;
    }

    Node* current = head;
    while (current->next != tail) { //loop continues until current->next is not tail
        current = current->next;
    }

    delete tail; //Deletes the last node pointed to by tail
    tail = current; //make the new last node
    tail->next = nullptr; //Sets the next pointer of the new tail to nullptr
}

void Single_link_list::print() const {//prints the contents of the linked list and specifies that the method doesn't modify the linked list
    Node* current = head;
    while (current != nullptr) {//loop continues as long as current isn't nullptr
        std::cout << current->data << " "; //Prints the data value
        current = current->next;
    }
    std::cout << std::endl;
}

void Single_link_list::addFromUser() {
    int value;
    std::cout << "Enter a value to add to the list: ";
    std::cin >> value;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cerr << "Invalid input. Please enter an integer." << std::endl;
        return;
    }
    add(value);
}
