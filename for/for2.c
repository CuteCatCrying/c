/**
Nama file           : for2.c
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
Tanggal pembuatan   : 11 Oktober 2018
Deskripsi           : Menghitung Jumlah dan Rata
*/

#include "stdio.h"

void main()
{
    int i, jum;
    float rata;
    jum = 0;
    for (i=1;i<=10;i++)
    {
        printf("%d\n",i);
        jum = jum + 1;
    }
    rata = (float)jum/10;
    printf("\nJumlah = %d\n",jum);
    printf("Rata-rata= %d\n\n",rata);
}
