#include <stdio.h>
#include <stdlib.h>  
/*hoan vi 2 so khong dung bien tam */
#define permutation(a,b)     a=a^b; b=a^b; a=a^b

int main(int argc, char* argv[])
{ 
    if(argc < 3)
    {
        printf("fail\n");
        return -1;
    }
    int a,b;
    a= atoi(argv[1]);
    b= atoi(argv[2]);
    printf("hoan vi 2 so \n");
    printf("%d\t%d\n",a,b);
    permutation(a,b);
    printf("%d\t%d\n",a,b);

    return 0;
} 