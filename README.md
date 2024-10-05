# Single Linked List Implementation in C++

This repository contains an implementation of a **Single Linked List** in C++ with basic operations such as adding, removing, and printing elements.

## Project Structure

- **main.cpp**: This is the entry point of the program. It allows user interaction by adding elements to the list, removing elements, and displaying the contents of the list.
- **SingleLinkedList.cpp**: Contains the definitions of the methods for the `Single_link_list` class and `Node` class, implementing the core linked list functionalities.
- **SingleLinkedList.h**: The header file that defines the `Single_link_list` and `Node` classes, declaring the methods used.

## Features

- Add elements to the linked list either through user input or manually by specifying values.
- Remove elements from the end of the list.
- Print the contents of the linked list to the console.
- Handle invalid input gracefully (e.g., non-integer values).

## How to Run

### Prerequisites
You need to have a C++ compiler installed (like `g++` or `clang++`).

### Compiling the Code
To compile and run the program, use the following commands:

```bash
g++ -o linkedlist main.cpp SingleLinkedList.cpp
./linkedlist