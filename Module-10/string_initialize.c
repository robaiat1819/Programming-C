#include<stdio.h>
int main()
{
    char a[6]={'N','U','S','R','A','T'};
    for(int i=0;i<6;i++)
    {
        printf("%C",a[i]);
    }
    int NZ= sizeof(a);
    printf("%c\n",NZ);
    return 0;
} 