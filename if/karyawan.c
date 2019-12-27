/**
    Nama file       : karyawan.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 27 September 2018
    Deskripsi       : Menghitung total upah lembur karyawan perusahaan
*/

#include "stdio.h"

void main ()
{
    int jam, lb;
    printf("Input jumlah jam kerja = ");
        scanf("%d",&jam);
    if (jam<=20 && jam>0)
    {
        lb = jam*2000;
    }
    else if (jam>20 && jam<50)
    {
        lb = jam*3000;
    }
    else if (jam>50)
    {
        lb = 50 *3000;

    }
    else
    {
        lb = 0;

    }
printf("Upah lenbur perjam adalah Rp. %d,00\n\n",lb);
}
