#include <stdio.h>
#include <stdlib.h>
#include "linker.h"
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
/*Them node*/
void Insert_node( node **head, int value, int pos)
{
    node *newnode;
    newnode = Creat_node(value);
// chèn ở đầu
    if(*head == NULL || pos<= 0)
    {
        newnode->next = *head;
        *head = newnode;
        return;
    }

    node *temp = (node *) malloc(sizeof(node));
    temp = *head;
    int index = 0;
// chen o vi tri bat kì
    while(temp->next != NULL && index < pos - 1)
    {
        temp = temp->next;
        pos++;
    }

    newnode->next = temp ->next;
    temp->next = newnode;


}

void Printlist(node *head)
{
    node *temp = (node *) malloc(sizeof(node));
    temp = head;
    while ( temp != NULL)
    {
        
        printf(" %d ->", temp->data);
        temp = temp->next;
    
    }
    printf("end");
    printf("\n");

    free(temp);

}

void deletenode(node **head, int value)
{
    if (*head == NULL) return;

    node *temp = *head;

    if (temp->data == value) {
        *head = temp->next;
        free(temp);
        return;
    }


    node *prev = NULL;
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return; 
    prev->next = temp->next;
   // free(temp);
}
