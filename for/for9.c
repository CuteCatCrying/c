/**
Nama file           : for8.c
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
Tanggal pembuatan   : 11 Oktober 2018
Deskripsi           : Kelipatan 3 (Versi 1)
*/

#include "stdio.h"

void main()
{
    int i, nilai, bil;
    printf("Input Nilai = ");
        scanf("%d",&nilai);
    bil = 3;
    for (i=1;i<=nilai;i++)
    {
        printf("%d. \n",bil);
        bil = bil + 3;
    }
}
