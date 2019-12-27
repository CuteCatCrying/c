/**
    Nama file       : namabulan.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 27 September 2018
    Deskripsi       : Menentukan nama bulan dari angka 1-12
*/

#include "stdio.h"

void main ()
{
    int bil;
    printf("Masukan sebuah bilangan (1-12) = ");
        scanf("%d",&bil);
    switch(bil)
    {
        case 1  : printf("Januari\n"); break;
        case 2  : printf("Februari\n"); break;
        case 3  : printf("Maret\n"); break;
        case 4  : printf("April\n"); break;
        case 5  : printf("Mei\n"); break;
        case 6  : printf("Juni\n"); break;
        case 7  : printf("Juli\n"); break;
        case 8  : printf("Agustus\n"); break;
        case 9  : printf("September\n"); break;
        case 10 : printf("Oktober\n"); break;
        case 11 : printf("November\n"); break;
        case 12 : printf("Desember\n"); break;
        default : printf("Tidak ada nama bula untuk angka %d\n",bil);
    }
}
