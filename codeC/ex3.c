#include <stdio.h>
/*dao 1 bit */
#define REVERSE_BIT_N(A,x)      A = A^((1<<x))

void printBinaryCompact(unsigned int n,char x) {
    printf("%c= %d\t ",x,n);
    printf("\t0x");
    for(int i=7; i>=0;i--)    (n >> i) & 1 ? printf("1"): printf("0"); 
    printf("\n");
}

int main()
{
    int a= 255;
    int b = 0;
    
    printBinaryCompact(a,'a');
    REVERSE_BIT_N(a,1);
    printBinaryCompact(a,'a');
    printBinaryCompact(b,'b');
    REVERSE_BIT_N(b,1);
    printBinaryCompact(b,'b');
  
    return 0;
}