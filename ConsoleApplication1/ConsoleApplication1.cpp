#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    int data;
    Node* next;


    Node(int element) {
        data = element;
        next = NULL;
    }
};

class StackLinkedList {
private:
    Node* top;

public:
    // Constructor
    StackLinkedList() {
        top = NULL;
    }
};