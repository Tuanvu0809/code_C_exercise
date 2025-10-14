#include <stdio.h>

/*tat 1 bit*/
#define OFF_BIT_N(A,x)      A = A&(~(1<<x))

void printBinaryCompact(unsigned int n) {
    printf("a= %d\t ",n);
    printf("\t0x");
    for(int i=7; i>=0;i--)    (n >> i) & 1 ? printf("1"): printf("0"); 
    printf("\n");
}

int main()
{
    int a= 255;
    
    printBinaryCompact(a);
    OFF_BIT_N(a,1);
    printBinaryCompact(a);
  
    return 0;
}