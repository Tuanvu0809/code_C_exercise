#ifndef LINKER_H
#define LINKER_H
//Linkerlist
typedef struct node {
    int data;
    struct node *next;
} node;

node *Creat_node( int number );
void Insert_node( node **head, int value, int pos);
void Printlist(node *head);
void deletenode(node **head, int value);



#endif