#include<stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for(int t = 1; t <= test; t++)+
    {
        char s[10001];
        scanf("%s",&s);
        int capital=0,small=0,digit=0;
        for(int i=0;s[i]!='\0';i++)
        {
            
            if(s[i]>= 'A' &&s[i]<='Z')
            {
                capital++;
            }
            else if(s[i]>='a' &&s[i]<='z')
            {
                small++;
            }
            else if(s[i]>='0'&&s[i]<='9')
            {
                digit++;
            }
        }printf("%d %d %d\n",capital,small,digit);
    } 
    return 0;
}