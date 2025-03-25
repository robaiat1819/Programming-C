#include<stdio.h>
int main()
{
    int ar[5]= {10,20,30,40,50};
    printf("oth-%p\n",&ar[0]);

    printf("0th -%p\n",ar);

    printf("0th  -%d\n",ar[0]);

    printf("1th  -%d\n",*(ar+1)); 

    printf("%d\n",*(ar+1));

    printf("%d\n",*(1+ar));

    printf("%d\n",ar[1]);
    
    printf("%d\n",1[ar]);
    return 0;
}