#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int t=0;t<test;t++)
    {
        int n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        int tiger=0;
        int pathan=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='T')
            {
                tiger++;
            }
            else if(s[i]=='P')
            {
                pathan++;
            }
        }
        if(tiger>pathan)
        {
            printf("Tiger\n");
        }
        else if(tiger<pathan)
        {
            printf("Pathan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
    return 0;
}