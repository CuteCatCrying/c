/**
    Nama file           : Segitiga8.c
    Nama pembuat        : Ramanda Syahputra
    Tanggal pembuatan   : 1 November 2018
    Deskripsi           : Membuat pola segitiga
*/
#include "stdio.h"

void main ()
{
    int i,a,b;
    int bil;
    printf("Input Ukuran : "); scanf("%d",&bil);
    for (i=bil;i>=1;i--)
    {
        for (a=1;a<=i;a++)
        {
            printf("   ");
        }
        for (b=bil;b>=i;b--)
        {
            printf(" %d ",b);
        }
        printf("\n");
    }
}

