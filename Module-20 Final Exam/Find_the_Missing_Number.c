#include<stdio.h>
int main()
{
    int test;
    scanf("%d",test);
    for(int i=0;i<test;i++)
    {
        long long int mul,a,b,c;
        scanf("%lld %lld %lld %lld",&mul,&a,&b,&c);
        long long int mul1=a*b*c;

        if (mul1 != 0 && mul % mul1 == 0) {
            printf("%lld\n", mul / mul1);
        } else {
            printf("-1\n");
        }
    }
    return 0;
}

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        long long int mul, a, b, c;
        scanf("%lld %lld %lld %lld", &mul, &a, &b, &c);

        long long int mul1 = a * b * c;

        if (mul1 != 0 && mul % mul1 == 0) {
            printf("%lld\n", mul / mul1);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}
