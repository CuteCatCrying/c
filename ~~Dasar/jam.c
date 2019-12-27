/**
    Nama file       : jam.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 13 September 2018
    Deskripsi       : Mengkonversi bilangan bulat dalam satuan detik ke jam, menit, detik
*/

#include "stdio.h"

void main ()
{
    int jam, men, det, sec;
    printf("\t\tKonversi Bilangan Bulat Detik ke Jam, Menit, dan Detik\n");
    printf("\t\t=======================================================\n");
    printf("Input Satuan Detik = ");
        scanf("%d",&sec);
    jam   = sec/3600;
    men   = sec%3600/60;
    det   = sec%3600%60;
    printf("->> Jam %d\n",jam);
    printf("-->> Menit %d\n",men);
    printf("--->> Detik %d\n",det);
}
