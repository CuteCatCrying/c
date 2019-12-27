/**
    Nama file       : kalkulator.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 13 September 2018
    Deskripsi       : Kalkulator Sederhana 2 Buah Bilangan Bulat
*/

#include "stdio.h"

void main ()
{
    int bil1, bil2;
    int kali, tambah, kurang, div, mod;
    float bagi;
    printf("\t\tKalkulator Sederhana\n");
    printf("\t\t=====================\n");
    printf("-->Input Angka Pertama = ");
        scanf("%d",&bil1);
    printf("-->Input Angka Kedua   = ");
        scanf("%d",&bil2);
    kali    = bil1*bil2;
    tambah  = bil1+bil2;
    kurang  = bil1-bil2;
    bagi    = (float)bil1/bil2;
    div     = bil1 / bil2;
    mod     = bil1%bil2; ///pada bahasa C, mod --> %
    printf("-------------=\n");
    printf("Hasil Kali   = %d\n",kali);
    printf("Hasil Tambah = %d\n",tambah);
    printf("Hasil Kurang = %d\n",kurang);
    printf("Hasil Bagi   = %.2f\n",bagi);
    printf("Hasil Div    = %d\n",div);
    printf("Hasil Mod    = %d\n",mod);
}
