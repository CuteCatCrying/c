/**
    Nama file           : Segitiga1.c
    Nama pembuat        : Ramanda Syahputra
    Tanggal pembuatan   : 1 November 2018
    Deskripsi           : Membuat pola segitiga dengan *
*/

#include "stdio.h"

void main ()
{
    int i,a,b;
    int bil;
    printf("Input Banyak : ");scanf("%d",&bil);
    for (b=1;b<=bil;b++)
    {
        for (i=1;i<=3;i++)
        {
            for (a=9;a>=7;a--)
            {
                printf(" %d",a);
            }
            printf("\n");
        }
        printf("\n");
    }
}

