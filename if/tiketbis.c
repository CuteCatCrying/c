/**
    Nama file       : tiketbis.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 27 September 2018
    Deskripsi       : Program Pembelian Tiket
*/

#include "stdio.h"

void main ()
{
    int menu, jum_tiket;
    long int harga, tot_awal;
    float diskon, tot_bayar;

    printf("PROGRAM PEMBELIAN TIKET BUS\n");
    printf("=======================\n");
    printf("|     KELAS            || HARGA/ORANG   |\n");
    printf("|1. Ekonomi            || Rp. 150.000,- |\n");
    printf("|2. Eksekutif          || Rp. 250.000,- |\n");
    printf("|3. Super Eksekutif    || Rp. 350.000,- |\n");
    printf("Masukan kelas tiket pilihan anda (1/2/3) : ");
        scanf("%d",&menu);
    printf("Masukan jumlah tiket yang ingin dibeli   : ");
        scanf("%d",&jum_tiket);
    switch (menu)
    {
        case 1 : { printf("Tiket Kelas Ekonomi sebanyak %d buah\n",jum_tiket);
                   harga = 150000;
                   break;
                 }
        case 2 : { printf("Tiket Kelas Eksekutif sebanyak %d buah\n",jum_tiket);
                   harga = 250000;
                   break;
                 }
        case 3 : { printf("Tiket Kelas Super Eksekutif sebanyak %d buah\n",jum_tiket);
                   harga = 350000;
                   break;
                 }
        default: {printf("Maaf, pilihan tidak tersedia\n");
                  harga = 0;
                 }
    }
    tot_awal = jum_tiket*harga;
    if (jum_tiket>4 && tot_awal!=0)
    {
        printf("Selamat anda mendapatkan diskon 10%!!\n");
        diskon = 0.1 * tot_awal;
    }
    else //jum_tiket<=4
        diskon = 0;
    ///endif
    tot_bayar = tot_awal-diskon;
    printf("Biaya tiket yang harus dibayar = %0.2f",tot_bayar);
}

