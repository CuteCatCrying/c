/**
    Nama file       : tukar.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 13 September 2018
    Deskripsi       : Proses menukar isi 2 buah variabel
*/

#include "stdio.h"

void main ()
{
    int a,b,c;
    //a = -5;
    //b = 7;
    printf("A = ");
        scanf("%d",&a);
    printf("B = ");
        scanf("%d",&b);
        printf("\t=========Sebelum Ditukar=======\n");
        printf("\tNilai A = %d\n",a);
        printf("\tNilai B = %d\n\n",b);
    c = a;
    a = b;
    b = c;
        printf("\t=========Setelah Ditukar=======\n");
        printf("\tNilai A yang baru = %d\n\tNilai B yang baru = %d",a,b);
}
