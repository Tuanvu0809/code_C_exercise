#include <stdio.h>
#include <stdlib.h>
// Dùng con trỏ để tính tổng các phần tử mảng.
int *mangnhap(int n)
{
    int *A = (int*) malloc(sizeof(int) * n);
    for(int i=0; i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    return A;
}
void inmang(int *A)
{
    while(*A != '\0')
    {
        printf("%d\t",*A);
        A++;
    }
    printf("\n");
}
int tinhtong(int *A,int n)
{
    int  tong =0 ;
    for(int i=0; i<n;i++)
    {
        tong = tong + *(A+i);

    }
    return tong;
}    
int main()
{
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    int *manggiatri;
    manggiatri = mangnhap(n);
    inmang(manggiatri);
    printf("Tong mang = %d\n", tinhtong(manggiatri,n));
    return 0;

}