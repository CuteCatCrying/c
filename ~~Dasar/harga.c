/**
    Nama file       : harga.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 13 September 2018
    Deskripsi       : Menghitung dan menampilkan total belanjaan masing masing, serta diskon
*/

#include "stdio.h"

void main ()
{
    int buk, pul, pen, tipe;
    int has_buk, has_pul, has_pen, has_tipe, tot, dis, has_dis;
    printf("\t\tMenghitung Harga Belanja Sebelum dan Sesudah Diskon\n");
    printf("\t\t===================================================\n");
    printf("Buku   = ");
        scanf("%d",&buk);
    printf("Pulpen = ");
        scanf("%d",&pul);
    printf("Pensil = ");
        scanf("%d",&pen);
    printf("Tipe-X = ");
        scanf("%d",&tipe);
        has_buk = buk*4000;
        has_pul = pul*3000;
        has_pen = pen*2000;
        has_tipe= tipe*5000;
        tot     = has_buk + has_pen + has_pul + has_tipe;
    printf("\t\tHarga Buku                   =Rp. %d\n",has_buk);
    printf("\t\tHarga Pulpen                 =Rp. %d\n",has_pul);
    printf("\t\tHarga Pensil                 =Rp. %d\n",has_pen);
    printf("\t\tHarga Tipe-X                 =Rp. %d\n",has_tipe);
    printf("\t\t----------------------------------------+\n");
    printf("\t\tTotal Belanja Sebelum Diskon =Rp. %d\n\n",tot);
        dis     = tot*0.1;
    printf("==========================================\n");
    printf("||Besaran Diskon               =Rp. %d||\n",dis);
    printf("==========================================\n\n");
        has_dis = tot-dis;
    printf("\t\t>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<\n");
    printf("\t\t=======================================\n");
    printf("\t\tTotal Belanja Sesudah Diskon =Rp. %d\n\n",has_dis);
}
