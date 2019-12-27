/**
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
*/

#include "stdio.h"

void main()
{
    int a,b,i,z,x;
    printf("Input Ukuran Pertama : "); scanf("%d",&a);
    printf("Input Ukuran Kedua   : "); scanf("%d",&b);
    x=1;
    for (i=1;i<=a;i++)
    {
       printf("\n");
        for (z=1;z<=b;z++)
            printf(" %d",x);
            x=x+1;
    }printf("\n\n");
}
