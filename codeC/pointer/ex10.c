#include <stdio.h>
#include <stdlib.h>
// Dùng con trỏ để cộng hai ma trận.
int *nhapmatran( int row, int colum, char ten)
{
    int *matrix = (int *) malloc(sizeof(int)* row * colum);
    for(int i=0 ; i<row;i++)
    {
        for(int j=0; j<colum ; j++)
        {
            printf("%c [%d][%d] = ",ten,i,j);
            scanf("%d",&matrix[i * colum + j]);
        }
    }
    return matrix;
}

void Inmatran(int *A,  int row ,int colum)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            printf("%d\t", A[i * colum + j]);
        }
        printf("\n");
    }
}

int *congmatran(int *A, int *B, int row, int colum)
{
    int *tong = (int *) malloc(sizeof(int)* row * colum);
      for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
           tong[i * colum + j] = A[i * colum + j] + B[i * colum + j];
        }
       
    }
    return tong;
}
void free_matran(int *matrix)
{
    free(matrix);
    printf("matrix free ok \n");
}

int main()
{
    int row, colum;
    printf("nhap so hang va so cot: ");
    scanf("%d %d",&row,&colum);

    // ma tran A
    int *A ;
    A = nhapmatran(row, colum , 'A');

    int *B; 
    B = nhapmatran(row,colum,'B');
    printf("in ma tran A\n");
    Inmatran(A,row,colum);
    printf("in ma tran B\n");
    Inmatran(B,row,colum);

    int *tong;
    tong = congmatran(A,B,row,colum);
    printf("in tong ma tran\n");
    Inmatran(tong,row,colum);

    free_matran(A);
    free_matran(B);
    free_matran(tong);

    return 0;
}