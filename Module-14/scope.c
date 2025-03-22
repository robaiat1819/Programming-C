#include<stdio.h>
void fun(void)
{
    int s=100;
    printf("F Add-%p\n",&s);

}
int main()
{
    int s=200;
    printf("add-%p\n");
    fun();
    return 0;
}