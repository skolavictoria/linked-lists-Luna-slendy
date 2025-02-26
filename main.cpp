#include <iostream>
#include <stdlib.h>
using namespace std;

class Node {
private:
    int value;
    Node* next_member = nullptr;
public:
    Node(int value) : value(value) {}
    void add_next_member(Node* ptr) { next_member = ptr; }
    int get_value() { return value; }
    Node* get_next_member() { return next_member; }
};

class LinkedList {
public:
    Node* head = nullptr;
    LinkedList(Node* head) : head(head) {}

    void display() {
        Node* mmbr = head;
        while (mmbr) {
            cout << mmbr->get_value() << endl;
            mmbr = mmbr->get_next_member();
        }
    }

    // Methods to implement
    
    void insert(int p, int v) {
        Node* n_n = new Node(v);  // n_n - new node, v - value, p - position
    if (p == 0) {
        n_n->add_next_member(head); // positioning as first node (works if List empty)  
        head = n_n;  
        return;
    }
    }


    void append(int value) {}
    void push(int value) {}
    int pop() {}
    void del(int position) {}
    Node* get_elem_by_index(int index) {}
    void reverse() {}
    void sort() {}
    void shuffle() {}
    bool search(int value) {}
};