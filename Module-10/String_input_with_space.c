#include<stdio.h>
#include<string.h>
int main()
{
    char a[21];
    fgets(a,23,stdin);
    printf("%s",a);
    return 0;
}