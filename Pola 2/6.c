/**
    Nama file           : Segitiga1.c
    Nama pembuat        : Ramanda Syahputra
    Tanggal pembuatan   : 1 November 2018
    Deskripsi           : Membuat pola segitiga dengan *
*/

#include "stdio.h"

void main ()
{
    int i,a,b,z;
    int kali;
    int bil;
    printf("Input Banyak : ");scanf("%d",&bil);
    kali=bil*bil;
    for (i=bil;i>=1;i--)
    {
        kali=bil*bil;
        for(a=1;a<=bil;a++)
        {
            printf("%d ",kali);
            kali=kali-1;
        }
        printf("\n");
    }
}

