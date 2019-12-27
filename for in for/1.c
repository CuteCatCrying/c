/**
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
*/

#include "stdio.h"

void main()
{
    int a,b,i,z;
    printf("Input Ukuran Pertama : "); scanf("%d",&a);
    printf("Input Ukuran Kedua   : "); scanf("%d",&b);
    for (i=1;i<=a;i++)
    {
       printf("\n");
        for (z=1;z<=b;z++)
            printf(" %d",z);
    }printf("\n\n");
}
