#include <stdio.h>
int main()
{
    int a = 50;
    int *ptr;
    ptr = &a;
    printf("gia tri a = %d va dia chi la %p\n ", a, &a);
    printf("gia tri ptr = %p va tro den dia chi co gia tri la %d\n ", ptr, *ptr);
    return 0;
}