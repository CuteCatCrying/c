/**
Nama file           : for5.c
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
Tanggal pembuatan   : 11 Oktober 2018
Deskripsi           : Faktorial
*/

#include "stdio.h"

void main()
{
    int f, i, a;
    printf("Input Nilai = ");
        scanf("%d",&a);
    f = 1;
    for (i=1;i<=a;i++)
    {
        printf("%d. \n",i);
        f = f*i;
    }
    printf("\n\tFaktorial %d! = %d",a,f);
}
