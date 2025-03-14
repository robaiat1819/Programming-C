#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ary[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    int posi,value;
    scanf("%d %d",&posi,&value);
    for(int i=0;i>posi+1;i--)
    {
        ary[i]=ary[i-1];
    }
    ary[posi]=value;
    for(int i=0;i<=n;i++)
    {
        printf("%d ",ary[i]);
    }
    return 0;
}