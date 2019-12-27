/**
Nama file           : while1.c
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
Tanggal pembuatan   : 18 Oktober 2018
Deskripsi           : Menghitung Jumlah dan Rata rata
*/

#include "stdio.h"

void main ()
{
    int i, jum;
    float rata;
    i=1; jum=0;
    while (i<=10)
    {
        printf("%d\n",i);
        jum = jum + i;
        i++;
    }
    rata = (float)jum/10;
    printf("\nJumlah  = %d\n",jum);
    printf("Rata-rata = %.2f\n",rata);
}
