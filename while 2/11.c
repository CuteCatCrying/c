/**
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
*/

#include "stdio.h"

void main()
{
    int bil;
    int a,b,c,e;
    printf("Input Banyak Deret : ");
        scanf("%d",&bil);
    a=1;
    b=1;
    while (b<=bil)
    {
        c=0;
        for (e=a;e>=1;e--)
        {
            if (a%e==0)
            {
                c++;
            }
        }
        if (c==2)
        {
            printf(" %d",a);
            b++;
        }
        a++;
    }
}
