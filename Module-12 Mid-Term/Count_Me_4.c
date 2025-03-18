#include<stdio.h>
int main()
{
    char s[10001];
    int cnt[26]={0};
    scanf("%s",&s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a'&& s[i]<='z')
        {
            cnt[s[i]-'a']++;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(s[i]>0)
        {
            printf("%c - %d\n", 'a' + i,s[i]);
        }
    }
    return 0;
}