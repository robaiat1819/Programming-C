#include<stdio.h>
int main()
{
    double x = 5.26;
    double *ptr=&x;
    *ptr =10.20;
    printf("%0.2lf\n",x);
    printf("%d\n",sizeof(ptr));
    printf("%c\n",x);
    return 0;
}