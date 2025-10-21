#include <stdio.h>
#include <stdbool.h>
bool Check(int n)
{
    if (n > 0 && (n & (n - 1)) == 0)
        return true;
    else 
        return false;
}
int main()
{
    printf("Check luy thua 2: \n");
    printf("nhap n: ");
    int n;
    scanf("%d",&n);
    Check(n)==true? (printf("Luy thua cua 2\n")): (printf("khong phai Luy thua cua 2\n"));

    return 0;
}