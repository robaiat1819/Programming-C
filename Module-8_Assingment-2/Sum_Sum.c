#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int pos_sum=0,neg_sum;
    for(int i=0;i<n;i++)
    {
        int num;
        scanf("%d",&num);
        if(num>0)
        {
            pos_sum+=num;
        }
        else
        {
            neg_sum+=num;
        }
    }

    printf("%d %d\n",pos_sum, neg_sum);


    return 0;
}