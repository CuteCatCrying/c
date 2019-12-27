/**
Nama file           : while1.c
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
Tanggal pembuatan   : 18 Oktober 2018
Deskripsi           : Menghitung Jumlah dan Rata rata, awal dan akhir input user
*/

#include "stdio.h"

void main ()
{
    int i, jum;
    int aw, ak;
    float rata;
    printf("Input Awal  : ");
        scanf("%d",&aw);
    printf("Input Akhir : ");
        scanf("%d",&ak);
    i=aw; jum=0;
    while (i<=ak)
    {
        printf("%d\n",i);
        jum = jum + i;
        i++;
    }
    rata = (float)jum/((ak-aw)+1);
    printf("\nJumlah  = %d\n",jum);
    printf("Rata-rata = %.2f\n",rata);
}
