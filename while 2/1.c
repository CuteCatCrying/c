/**
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
*/

#include "stdio.h"

void main()
{
    int bil,i,a;
    printf("Input Banyak Deret : ");
        scanf("%d",&bil);
    a=1;
    for (i=1;i<=bil;i++)
    {
        printf(" %d",a);
        if (i%2==0)
            a=a-2;
        else
            a=a+4;
    }
}
