#include <stdio.h>
#include <stdlib.h>
#include "linker.h"

int main()
{
    printf("Link list\n");

    node *head = NULL;

    // Tạo danh sách ban đầu
    Insert_node(&head, 10, 0); 
    Insert_node(&head, 20, 1); 
    Insert_node(&head, 30, 2); 
    Insert_node(&head, 100,4);

    Printlist(head);

    printf("Xoa phan tu 20...\n");
    deletenode(&head, 20);
    Printlist(head);

    free(head);
    return 0;
}