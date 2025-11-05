#include <stdio.h>
void printBinaryCompact(unsigned int n) {
    printf("a= %d\t ",n);
    printf("\t0x");
    for(int i=7; i>=0;i--)    (n >> i) & 1 ? printf("1"): printf("0"); 
    printf("\n");
}

int main()
{
   
   int n;
   scanf("%d",&n);
    printBinaryCompact(n);
   // tat bit ngoai cung
   n= (n & (n-1));
   printBinaryCompact(n);
    return 0;
}

    