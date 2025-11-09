#include <stdio.h>
int main()
{
     int n;
    scanf("%d",&n);
    // kiem tra boi cua 8
    (n%8 == 0 || (n & 0x7) == 0) ? printf("yes\n") : printf("no\n");
    return 0;
}