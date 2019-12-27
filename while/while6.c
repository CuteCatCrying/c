/**
Nama file           : while6.c
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
Tanggal pembuatan   : 18 Oktober 2018
Deskripsi           : While tanpa indeks
*/

#include "stdio.h"

void main ()
{
    int bil;
    printf("Input Angka : ");
        scanf("%d",&bil);
    while (bil!=-999)
    {
        printf("Input Angka : ");
            scanf("%d",&bil);
    }
    printf("\n\nHoray");
}
