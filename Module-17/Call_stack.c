#include<stdio.h>
void world()
{
    printf("world start\n");
    printf("world end\n");
}
void hello()
{
    printf("Hello start\n");
    world();
    printf("Hello end\n");
}
int main()
{
    printf("Main start\n");
    hello();
    printf("End\n");
    return 0;
}