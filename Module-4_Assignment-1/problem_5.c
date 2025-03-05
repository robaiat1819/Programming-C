#include<stdio.h>
int main()
{
    int A;
    scanf("%d",&A);
    if (A>=1000)
    {
        printf("I will buy Punjabi\n");
        if(A>=500)
        {
            printf("Alisa will buy new shoes\n");
            A-=1000;
        }
    else
    {
        printf("Bad Luck\n");
        return 0;
        if (A>100)
        {
            printf("I will buy new shoes\n");
        }
        else
        {
            printf("Bad Luck!\n");
            return 0;
        }
        if (A>500)
        {
            printf("Alisa will buy new shoes\n");
        }
        else
        {
            printf("Bad luck!\n");
        }
    }   return 0;
    }
}