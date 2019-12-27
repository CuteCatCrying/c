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
    for (i=a;i>=1;i--)
    {
       printf("\n");
        for (z=b;z>=1;z--)
            printf(" %d",i);
    }printf("\n\n");
}
