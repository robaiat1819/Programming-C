#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001],t[1001];
    scanf("%s %s",&s,&t);
    int sz=strlen(s);
    int st=strlen(t);
    printf("%d %d\n",sz,st);
    printf("%s %s\n",s,t);
    return 0;
}