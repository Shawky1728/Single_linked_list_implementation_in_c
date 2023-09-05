#ifndef SINGLE_LIST_H
#define SINGLE_LIST_H

#include <stdio.h>
#include <stdlib.h>
#define DEBUG

// struct of single List

typedef struct Node
{
    void *dataPtr;
    struct Node *nodeLink;
};

void insert_Node_At_Beginning(struct Node **List);
void insert_Node_At_End(struct Node **List);
void insert_Node_After(struct Node *List);
void delete_Node_At_Beginning(struct Node **List);
void delete_Node(struct Node *List);
void display_Node(struct Node *List);
unsigned int get_Length(struct Node *List);
#endif
