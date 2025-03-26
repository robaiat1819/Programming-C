#include<stdio.h>
int sum(int x,int y)
{
    int sum =x+y;
    return sum;
}
int main()
{
    int a,b;
    int c=sum(5,2);
    printf("%d\n",c);
    return 0;
}