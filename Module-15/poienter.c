#include<stdio.h>
int main()
{
    int x;
    int *ptr = &x;
    *ptr=300;
    printf("%d",*ptr);
    return 0;
}