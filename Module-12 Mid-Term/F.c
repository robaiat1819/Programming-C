#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);
        int m1_farmers =m1*d;

        int m1_m2_farmers = d*(m1+m2);

        int finished_day = m1_m2_farmers/m1_farmers;

        int r_days = d-finished_day;

        printf("%d\n",finished_day);

        printf("%d",r_days);
    }
    return 0;
}