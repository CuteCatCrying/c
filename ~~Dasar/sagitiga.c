/**
    Nama file       : segitiga.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 20 September 2018
    Deskripsi       : Menghitung luas segitiga
*/

#include "stdio.h"

void main ()
{
    int x, y;
    float fxy;
    printf("Alas   = ");
        scanf("%d",&x);
    printf("Tinggi = ");
        scanf("%d",&y);
    fxy = (float) 0.5*x*y;
    printf("Hasil Luas = %.2f",fxy);
}
