#include <stdio.h>
void swap(int *target1,int *target2)
{
    *target1 = *target1 ^ *target2;
    *target2 = *target1 ^ *target2;
    *target1 = *target1 ^ *target2;

}
int main()
{
    int a = 10 ;
    int b = 6;
    printf("a= %d b= %d\n",a,b);
    printf("---swap----\n");
    swap(&a,&b);
    printf("a= %d b= %d\n",a,b);

    return 0;
}