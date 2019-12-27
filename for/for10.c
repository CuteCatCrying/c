/**
Nama file           : for10.c
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
Tanggal pembuatan   : 11 Oktober 2018
Deskripsi           : Kelipatan 3 (Versi 2)
*/

#include "stdio.h"

void main()
{
    int i, nilai, bil;
    printf("Input Nilai = ");
        scanf("%d",&nilai);
    for (i=1;i<=nilai;i++)
    {
        bil = i * 3;
        printf("%d. \n",bil);
    }
}
