#include <stdio.h>
int main()
{
    printf("kiem tra 2 so co bang nhau khong\n");
    int a,b;
    scanf("%d %d",&a,&b);

    (a^b) == 0 ? printf("bang nhau\n"): printf("khong bang\n");
    return 0;
}