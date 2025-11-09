#include <stdio.h>
// Gán con trỏ p trỏ tới mảng a[5], in giá trị bằng p.
int main()
{
    int A[5] ={1,2,23,45,67};
    printf("In mang\n");
    int *ptr ;
    ptr = A;
    for(int i= 0; i<5;i++)
    {
        printf("%d ", *(ptr+i));
    }
    printf("\n");
    return 0;
}