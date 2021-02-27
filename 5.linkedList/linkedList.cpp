// https://www.bitdegree.org/learn/linked-list-c-plus-plus
//struct node comprises int data and next node with a pointer called next
// struct Node {
//     int data;
//     struct Node *next;
// };

//#include <bits/stdc++.h> //standard header including all files // doesn't compile why not?
#include <cstddef>      //standard header file
#include <iostream>

//First create a class
//include functions to control the node
using namespace std;

class Node {
        public:
            int data;
        Node * next;
    };

void print_list(Node * n) {
    while(n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

//insert at the start
void push(struct Node ** head_ref, int new_data) {
    struct Node * new_node = (struct Node * ) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = ( * head_ref);
    ( * head_ref) = new_node;
}

//insert at the end
void append(struct Node ** head_ref, int new_data) {
    struct Node * new_node = (struct Node * ) malloc(sizeof(struct Node));
    struct Node * last = * head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
}

//insert at a specific position
void insertAfter(struct Node * prev_node, int new_data){
    if (prev_node == NULL){
        printf("the given previous node cannot be NULL");
        return;
    }
    struct Node * new_node = (struct Node * ) malloc(sizeof(struct Node));          //*malloc(size_t size) allocates the requested memory and returns a pointer to it
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}


int main() {
    Node * head = NULL;
    Node * second = NULL;
    Node * third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head-> data = 1;
    head-> next = second;

    second-> data = 2;
    second-> next = third;

    third-> data = 3;
    third-> next = NULL;

    print_list(head);
    //push(&head, 11);              //1 2 3 11 1 2 3 
    //append(&head, 11);            //1 2 3 1 2 3 11 
    insertAfter(third, 11);         //1 2 3 1 2 3 11
    print_list(head);       
}