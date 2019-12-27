/**
Nama file           : for7.c
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
Tanggal pembuatan   : 11 Oktober 2018
Deskripsi           : 10 Bilangan ganjil pertama
*/

#include "stdio.h"

void main()
{
    int i, nilai, bil;
    printf("Input Nilai = ");
        scanf("%d",&nilai);
    bil = 1;
    for (i=1;i<=nilai;i++)
    {
        printf("%d. \n",bil);
        bil = bil + 2;
    }
}
