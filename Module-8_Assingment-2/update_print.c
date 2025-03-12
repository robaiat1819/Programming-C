#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d",&x);
    int a[x];
    for(int i=0; i<x; i++);
    {
        scanf("%d",&a[x]);
    }
    scanf("%d %d",&y,&z);
    if(y>=0 && y>x)
    {
        a[y] =z;
    }
    else
    {
        printf("index!\n");
        return 1;
    }
    for(int i=x-1;i>=0; i--)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}