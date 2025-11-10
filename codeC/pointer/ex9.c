#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Dùng con trỏ để đảo ngược chuỗi.
char *Daonguocchuoi(char *chuoi, int n)
{
    char *chuoidao = (char*) malloc(sizeof(char)*(n+1));
    if(chuoi == NULL || chuoidao == NULL)
    {
        printf("error\n");
        return NULL;
    }
    for(int i=0; i< n;i++ )
    {
        chuoidao[i] = chuoi[n-2-i];
      
    }
      chuoidao[n] = '\0';
    return chuoidao;

}
int main()
{
    char chuoikitu[50];
    printf("nhap chuoi ki tu: ");
    fgets(chuoikitu, 50, stdin);
    printf("in chuoi %s ",chuoikitu);
    char *chuoidao;
    chuoidao = Daonguocchuoi(chuoikitu,strlen(chuoikitu));
    printf("in  dao %s \n",chuoidao);
    free(chuoidao);
    return 0;
}