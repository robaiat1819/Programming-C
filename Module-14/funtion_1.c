#include<stdio.h>
int sum(int x, int y)
{
    int sum= x+y;
    return sum;
}
int main()
{
    printf("%d\n",sum(10,20));
    printf("%d\n",sum(100,500));
    return 0;
}