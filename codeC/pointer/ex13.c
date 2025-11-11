#include <stdio.h>
#include <stdlib.h>
//Linkerlist
typedef struct node{
    int data;
    node *next;
} ;

node *Creat_node( int number )
{
    node *creat = (node *) malloc(sizeof(node));
    if(creat == NULL) {
        printf("fail\n");
        return NULL;
    }
    creat->data = number;
    creat->next = NULL;
    printf("Creat node sucessfull\n");

    return creat;
}
// tạo node 
// them dau
// them bat ki
// xoa dau
// xoa bat kì


int main()
{
    printf("Link list\n");
    return 0;
}