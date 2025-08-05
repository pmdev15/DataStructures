#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include"../node/node.h"

// DATA TYPE

struct LinkedList{

    // first node
    struct Node *head;
    //lenght of list - no of node
    int lenght;

     /* PUBLIC MEMBER METHODS */
    // Insert adds new items to the chain at a specified location - this function creates the new nodes.
    void (*insert)(struct LinkedList *linked_list, int index, void *data, unsigned long size);
    // Remove deletes an item from the chain and handles the deallocation of memory.
    void (*remove)(struct LinkedList *linked_list, int index);
}

// CONSTRUCTORS

struct LinkedList list_constructor(void);
void list_destructor(struct LinkedList *linked_list);

#endif
