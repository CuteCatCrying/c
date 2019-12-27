/**
    Nama file       : upahkaryawan.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 27 September 2018
    Deskripsi       : Menghitung upah karyawan yang diterima
*/

#include "stdio.h"

void main ()
{
    int jam, h_upah, h_lembur, tot;
    printf("Input jumlah jam kerja = ");
        scanf("%d",&jam);
    if (jam>=100 && jam<=125)
    {
        h_upah   = 100*20000;
        h_lembur = (jam-100)*30000;
    }
    else if (jam>125)
    {
        h_upah   = 100*20000;
        h_lembur = 25*30000;
    }
    else
    {
        h_upah   = jam*200000;
        h_lembur = 0;
    }
    tot          = h_upah+h_lembur;
    printf("Upah jam kerja normal     = Rp. %d,00",h_upah);

}
