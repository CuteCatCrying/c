/**
Nama file           : for11.c
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
Tanggal pembuatan   : 11 Oktober 2018
Deskripsi           : Pengulangan Input
*/

#include "stdio.h"

void main()
{
    int i, banyak, bil;
    int nilai;
    float rata;
    printf("Input Banyak = ");
        scanf("%d",&banyak);
    bil = 0;
    for (i=1;i<=banyak;i++)
    {
        printf("Input Nilai Ke-%d : ",i);
            scanf("%d",&nilai);
        bil = bil + nilai;
    }
    rata = (float)bil/banyak;
    printf("\nJumlah = %d\n",bil);
    printf("Rata-rata= %.2f\n\n",rata);
}
