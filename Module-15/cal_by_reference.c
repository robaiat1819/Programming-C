#include<stdio.h>
void fun(int *p)
{
    // printf("value of x main-%d\n",*p);
    *p=500;
}
int main()
{
    int x=100;
    // printf("x er addres-%p\n",&x);
    fun(&x);
    printf("%d",x);
    return 0;
}