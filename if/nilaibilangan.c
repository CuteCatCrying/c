/**
    Nama file       : nilaibilangan.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 27 September 2018
    Deskripsi       : Menentukan sebuah bilangan kelipatan 5
*/

#include "stdio.h"

void main ()
{
    int bil;
    printf("Input sebuah angka = ");
        scanf("%d",&bil);
    if (bil%5==0)
        printf("\n\t\tAngka tersebut kelipatan 5\n\n");
    else
        printf("\n\t\tAngka tersebut bukan kelipatan 5\n\n");
}
