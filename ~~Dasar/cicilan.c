/**
    Nama file       : cicilan.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 20 September 2018
    Deskripsi       : Mwnghitung cicilan peminjaman
*/

#include "stdio.h"

void main ()
{
    int pinjaman, bunga, lama;
    int lama_bulan, tot;
    int tot_pinjam;
    float tot_bunga, tot_bunga2, pinjaman_bulan;
    printf("\t\tMENGHITUNG CICILAN PEMINJAMAN PERBULAN\n");
    printf("\t\t======================================\n\n");
    printf("Jumlah Pinjaman       = ");
        scanf("%d",&pinjaman);
    printf("Besar Bunga(Persen)   = ");
        scanf("%d",&bunga);
    printf("Lama Peminjaman(Tahun = ");
        scanf("%d",&lama);
    lama_bulan     = lama*12; //Lama peminjama dikali 2
    tot_bunga      =(float) bunga/100*pinjaman; //Bunga dijadikan bilangan desimal dan dikalikan dengan pinjaman
    tot_bunga2     =(float) tot_bunga/12; //Total bunga dan pinjaman ubah dari tahun ke bulan dengan dibagi 12
    pinjaman_bulan =(float) pinjaman/lama_bulan; //Pinjaman perbulan, jumlah pinjaman dibagi lama waktu meminjam
    tot            = pinjaman_bulan+tot_bunga2; //Cicilan yang harus dibayar perbulannya
    tot_pinjam     = tot*lama_bulan;
    printf("\n\t\t      Cicilan bunga perbulan\n\t\t\tRp. %.2f",tot_bunga2);
    printf("\n\t\tCicilan yang harus dibayar perbulan\n\t\t\tRp. %d",tot);
    printf("\n\t\tTotal Cicilan selama %d tahun peminjaman\n\t\t\tRp. %d\n\n",lama,tot_pinjam);
}
