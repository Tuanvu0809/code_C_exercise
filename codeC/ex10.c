
#include <stdio.h>
int main()
{
   
    int n;
    scanf("%d",&n);
    int lsb = 0; 
    while ((n&1) ==0 && n) { 
        lsb++; 
        n >>= 1; 
    }
    printf("lsb : %d\n", lsb);
    return 0;
}

    