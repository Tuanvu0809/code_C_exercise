#include <stdio.h>

//Dùng con trỏ để đếm số ký tự trong chuỗi.
void Count_kitu(char  *p)
{
    int tong = 0;
    while(*p != '\0')
    {
        if(*p != ' ')
        {
            tong ++;
        }
        p++;

    }
    printf("count ki tu la %d\n", tong);
}

int main()
{
    char chuoikitu[50];
    printf("nhap chuoi ki tu: ");
    fgets(chuoikitu, 50, stdin);
    printf("in chuoi %s \n",chuoikitu);
    Count_kitu(chuoikitu);
    return 0;
}