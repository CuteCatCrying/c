/**
Nama file           : while1.c
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
Tanggal pembuatan   : 18 Oktober 2018
Deskripsi           : Menghitung Jumlah dan Rata rata, awal dan akhir input user Bilangan genap
*/

#include "stdio.h"

void main ()
{
    int i, jum, n;
    int aw, ak;
    float rata;
    printf("Input Awal  : ");
        scanf("%d",&aw);
    printf("Input Akhir : ");
        scanf("%d",&ak);
    i=aw; jum=0; n=0;
    while (i<=ak)
    {
        if (i%2==0)
        {
            printf("%d\t",i);
            jum = jum + i;
            n   = n + 1;
        }
        i++;
    }
    rata = (float)jum/n;
    printf("\n\n");
    printf("Banyak bilangan genap = %d\n",n);
    printf("Jumlah                = %d\n",jum);
    printf("Rata-rata             = %.2f\n",rata);
}
