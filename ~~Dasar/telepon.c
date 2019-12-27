/**
    Nama file       : jam.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 20 September 2018
    Deskripsi       : Menghitung biaya bicara telepon
*/

#include "stdio.h"

void main ()
{
    int aw_jam, aw_menit, aw_detik;
    int ak_jam, ak_menit, ak_detik;
    int tot_aw, tot_ak, selisih;
    int jum_jam, jum_menit, jum_detik;
    int biaya;
    printf("\tPembicaraan Awal\n");
    printf("Jam   = ");
        scanf("%d",&aw_jam);
    printf("Menit = ");
        scanf("%d",&aw_menit);
    printf("Detik = ");
        scanf("%d",&aw_detik);
    tot_aw = (aw_jam*3600)+(aw_menit*60)+aw_detik;
    printf("\n\tPembicaraan Akhir\n");
    printf("Jam   = ");
        scanf("%d",&ak_jam);
    printf("Menit = ");
        scanf("%d",&ak_menit);
    printf("Detik = ");
        scanf("%d",&ak_detik);
    tot_ak = (ak_jam*3600)+(ak_menit*60)+ak_detik;
    selisih = tot_ak-tot_aw;
    jum_jam = selisih/3600;
    jum_menit = selisih%3600/60;
    jum_detik = selisih%3600%60;

    printf("\n\tSelisih %d Jam %d Menit %d Detik\n",jum_jam,jum_menit,jum_detik);
    biaya =((float)selisih/5)*100;
    printf("\tBiaya Bicara Adalah Rp. %d",biaya);
}
