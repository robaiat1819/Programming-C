#include<stdio.h>
void fun(int *ary,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",ary[i]);
    }
}
int main()
{
    int ary[5]={10,20,30,40,50};
    fun(ary,5);
    return 0;
}