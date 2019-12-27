/**
    Nama file       : ganjilgenap.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 20 September 2018
    Deskripsi       : Menentukan bilangan ganjil atau genap
*/

#include "stdio.h"

void main ()
{
    int nilai;
    printf("Nilai = ");
        scanf("%d",&nilai);
    if(nilai%2==0)
        printf("Bilangan anda genap :v\n\n");
    else //bilangan ganjil habis pembagian bukan sama dengan 0
        printf("Ganjil XD\n\n");
}
