/**
Nama file           : for8.c
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
Tanggal pembuatan   : 11 Oktober 2018
Deskripsi           : 10 Bilangan genap pertama
*/

#include "stdio.h"

void main()
{
    int i, nilai, bil;
    printf("Input Nilai = ");
        scanf("%d",&nilai);
    bil = 2;
    for (i=1;i<=nilai;i++)
    {
        printf("%d. \n",bil);
        bil = bil + 2;
    }
}
