#include <stdio.h>
int main()
{
    printf("Kiem tra chan le\n");
    int n;
    scanf("%d",&n);
    (n&(1<<0)) ==0 ?printf("chan\n"): printf ("le\n");
    return 0;
}