/**
    Nama file       : nilai.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 13 September 2018
    Deskripsi       : Menghitung nilai akhir mahasiswa dengan komposisi
                      15% Tugas, 10% Kuis, 35% UTS, dan 40% UAS
*/

#include "stdio.h"

void main ()
{
    float tugas, kuis, uts, uas, na;
    printf("\t\tPerhitungan Nilai Mahasiswa\n");
    printf("\t\t============================\n");
    printf("-> Nilai Tugas = ");
        scanf("%f",&tugas);
    printf("-> Nilai Kuis  = ");
        scanf("%f",&kuis);
    printf("-> Nilai UTS   = ");
        scanf("%f",&uts);
    printf("-> Nilai UAS   = ");
        scanf("%f",&uas);
    printf("------------=\n");
        na = (0.15*tugas) + (0.1*kuis) + (0.35*uts) + (0.4*uas);
    printf("Nilai Akhir = %.2f",na);
}
