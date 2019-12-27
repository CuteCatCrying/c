/**
    Nama file       : kelulusan.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 20 September 2018
    Deskripsi       : Menentukan status kelulusan siswa
*/

#include "stdio.h"

void main ()
{
    int nilai;
    printf("Nilai siswa = ");
        scanf("%d",&nilai);
    if(nilai>=60)
        printf("Selamat Anda Lulus\n");
    else ///Nilai <60
        printf("Maaf Anda Gagal XD\n");
    //end
}
