/**
    Nama file       : maksimum.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 20 September 2018
    Deskripsi       : Menentukan besar kecilnya bilangan
*/

#include "stdio.h"

void main ()
{
    int nilai1, nilai2;
    printf("Nilai Pertama = ");
        scanf("%d",&nilai1);
    printf("Nilai Kedua   = ");
        scanf("%d",&nilai2);
    if(nilai1>nilai2)
        printf("%d > %d \n\n",nilai1,nilai2);
    else //bilangan ganjil habis pembagian bukan sama dengan 0
        printf("%d > %d XD\n\n",nilai2,nilai1);
}
