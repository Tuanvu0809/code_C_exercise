#include <stdio.h>
#include <stdlib.h>
// Viết hàm trả về con trỏ trỏ tới phần tử lớn nhất trong mảng.
int *mangnhap(int n)
{
    int *A = (int*) malloc(sizeof(int) * n);
    for(int i=0; i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    return A;
}
void inmang(int *A, int n)
{
     for(int i=0; i<n;i++)
    {
        printf("%d\t",*(A+i));
        
    }
    printf("\n");
}
int *maxptr_find(int *A,int n)
{
    int *max = (int *) malloc( sizeof(int) );
    *max = *A;
    for(int i=0; i<n;i++)
    {
        if(*max< *(A+i))
        {
            *max = *(A+i);
        }
      
    }
    return max;
}
int main()
{

     int n;
    printf("nhap n: ");
    scanf("%d",&n);
    int *manggiatri, *maxptr;
    manggiatri = mangnhap(n);
    inmang(manggiatri,n);
    maxptr = maxptr_find(manggiatri,n);

    printf("gia tri lon nhat la :%d\n ", *maxptr);

    free(manggiatri);
    free(maxptr);
    return 0;
}