#include <stdio.h>
int main()
{
   
    int n;
    scanf("%d",&n);
    int msb = -1; 
    while (n) { 
        msb++; 
        n >>= 1; 
    }
    printf("Msb : %d\n", msb);
    return 0;
}

    