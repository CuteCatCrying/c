/**
    Nama file       : bilangan.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 27 September 2018
    Deskripsi       : Menentukan sebuah bilangan kelipatan 3 yang genap
*/

#include "stdio.h"

void main ()
{
    int bil;
    printf("Input sebuah angka = ");
        scanf("%d",&bil);
    if      ((bil%3==0) && (bil%2==0))
        printf("\n\t\tAngka tersebut kelipatan 3 yang genap\n\n");
    else if ((bil%3==0) && (bil%2!=0))
        printf("\n\t\tAngka tersebut kelipatan 3 tapi bukan angka genap\n\n");
    else if ((bil%3!=0) && (bil%2==0))
        printf("\n\t\tAngka tersebut bukan kelipatan 3 tetapi angka genap\n\n");
    else
        printf("\n\t\tAngka tersebut bukan kelipatan 3 dan bukan angka genap\n\n");
}
