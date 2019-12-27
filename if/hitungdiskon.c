/**
    Nama file       : hitungdiskon.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 27 September 2018
    Deskripsi       : Menghitung diskon dengan minimal belanja 200ribu
*/

#include "stdio.h"

void main ()
{
    int b_belanja, diskon, tot;
    printf("Input Total = Rp. ");
        scanf("%d",&b_belanja);
    if (b_belanja>=200000)
    {
        diskon = (float)b_belanja*0.01;
        tot    = b_belanja-diskon;
        printf("\n\t\tBesar diskon yang didapatkan Rp. %d\n\n",diskon);
        printf("\n\t\tTotal Belanja Anda Rp. %d\n\n",tot);
    }
    else
        printf("\n\t\tAnda tidak mendapatkan diskon\n\n\n\t\tTotal Belanja Anda Rp. %d\n\n",b_belanja);
}
