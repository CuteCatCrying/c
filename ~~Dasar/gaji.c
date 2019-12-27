/**
    Nama file       : gaji.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 20 September 2018
    Deskripsi       : Mwnghitung gaji perbulan seorang karyawan
*/

#include "stdio.h"

void main ()
{
    int jam_kerja, lembur, ang_keluarga;
    int gaji_jam, gaji_lembur, tunjangan, tot, gaji_tot;
    printf("\t\tMENGHITUNG GAJI PERBULAN SEORANG KARYAWAN\n");
    printf("\t\t=====================================\n\n");
    printf("Jumlah Jam Kerja        = ");
        scanf("%d",&jam_kerja);
    printf("Jumlah jam Lembur       = ");
        scanf("%d",&lembur);
    printf("Jumlah Anggota Keluarga = ");
        scanf("%d",&ang_keluarga);
    gaji_jam    = 10000*jam_kerja;
    gaji_lembur = 20000*lembur;
    tunjangan   = 100000*ang_keluarga;
    tot         = 1000000+gaji_jam+gaji_lembur+tunjangan;
    gaji_tot    = tot-(0.025*tot);
    printf("\n\t\tTotal Gaji perbulan\n\t\t\t%d\n\n",gaji_tot);
}
