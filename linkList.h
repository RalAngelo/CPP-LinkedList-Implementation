#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

class Node {
public: //Can be accessed from outside the class
    int data;
    Node* next;

    Node(int value); //Constructor init
};

class Single_link_list {
private:
    Node* head;
    Node* tail;

public:
    Single_link_list();
    ~Single_link_list();

    void add(int value);
    void remove();
    void print() const;
    void addFromUser();
};

#endif
