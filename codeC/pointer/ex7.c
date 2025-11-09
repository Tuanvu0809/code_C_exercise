#include <stdio.h>
void my_str_cpy(char *ori, char *des)
{
    while(*ori != '\0')
    {
        *des = *ori;
        des++;
        ori++;
    }
    *des = '\0';
}
int main()
{
     char chuoikitu[50], saochep[50];
    printf("nhap chuoi ki tu: ");
    fgets(chuoikitu, 50, stdin);
    printf("in chuoi %s",chuoikitu);
    my_str_cpy(chuoikitu,saochep);
    printf("in chuoi sao chep %s ",saochep);

    return 0;
}
