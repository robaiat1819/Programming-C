#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int t=1;t<=test;t++)
    {
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);
        int m1_farmers =m1*d;

        int m1_m2_farmers = m1+m2; 

        int finished_day = m1_farmers/m1_m2_farmers;

        int r_days = d-finished_day;

        printf("%d\n",r_days);
    }
   return 0; 
}

// #include<stdio.h>
// int main()
// {
//     int test;
//     scanf("%d", &test);
//     for(int t = 1; t <= test; t++)
//     {
//         int m1, m2, d;
//         scanf("%d %d %d", &m1, &m2, &d);
//         int m1_farmers = m1 * d;

//         int m1_m2_farmers = m1 + (m2 * d); 

//         int finished_day = 0;
//         if (m1_farmers != 0)
//             finished_day = m1_m2_farmers / m1_farmers;

//         int r_days = d - finished_day;

//         printf("%d\n", finished_day);
//         printf("%d\n", r_days);
//     }
//     return 0; 
// }
 