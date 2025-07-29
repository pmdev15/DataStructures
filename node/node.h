#ifndef NODE_H
#define NODE_H

/* DATA TYPE */

struct Node{

    // The data is stored as a void pointer. Casting is required for proper access
    void *data;
    // pointers for next or prev nodes
    struct Node *next;
    struct Node *prev;
};

// Constructors

//For creating nodes;
struct Node node_construct(void *data,size_t size);
//For destroying;
void node_destructor(struct Node *node);


#endif
