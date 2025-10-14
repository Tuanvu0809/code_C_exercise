#include <stdio.h>

/*bat 1 bit*/
#define ON_BIT_N(A,x)       A= A|(1<<x) 
#define OFF_BIT_N(A,x)      A = A&(~(1<<x))

void printBinaryCompact(unsigned int n) {
    printf("\t0x");
    for(int i=7; i>=0;i--)    (n >> i) & 1 ? printf("1"): printf("0"); 
    printf("\n");
}

int main()
{
    int a= 0;
    printf("a= %d\t ",a);
    printBinaryCompact(a);
    ON_BIT_N(a,1);
    printf("a= %d\t ",a);
    printBinaryCompact(a);
    OFF_BIT_N(a,1);
    printf("a= %d\t ",a);
    printBinaryCompact(a);
  

    return 0;
}