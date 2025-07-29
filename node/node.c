#include<stdlib>
#include<stdio.h>
#include<string.h>

#include"node.h"

void node_constructor(void *data,size_t size){ // size = sizeof(data)
    if(size<1){
     // Confirm the size of the data is at least one, otherwise exit with an error message.
        printf("Invalid data size for node...\n");
        exit(1);
    }
    // Create a Node instance to be returned
    struct Node node;
    // Allocate space for the data if it is of a supported type
    node.data = malloc(size);
    memcpy(node.data, data, size);
    // Initialize the pointers.
    node.next = NULL;
    node.previous = NULL;
    return node;
}

void node_destructor(struct Node *node){
    free(node->data);
    free(node);
}
