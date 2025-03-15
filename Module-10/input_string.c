#include<stdio.h>
int main()
{
    char a[5];
    scanf("%s",&a);
    printf("%s\n",a);
    int sz=sizeof(a);
    printf("%d\n",sz);
    return 0;
}