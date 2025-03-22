#include<stdio.h>
int main()
{
    int x=10;
    printf("%p\n",&x);
    int *p=&x;
    printf("%d\n",&p);
    return 0;
}