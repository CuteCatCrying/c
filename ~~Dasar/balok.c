/**
    Nama file       : balok.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 27 September 2018
    Deskripsi       : Menghitung luas alas, luas permukaan dan volume balok
*/

#include "stdio.h"

void main ()
{
    int lbr, pjg, tgi;
    int l_alas, l_prmk, vlm;
    printf("Panjang = ");
        scanf("%d",&pjg);
    printf("Lebar   = ");
        scanf("%d",&lbr);
    printf("Tinggi  = ");
        scanf("%d",&tgi);
    l_alas = pjg*lbr;
    l_prmk = 2*((pjg*lbr)+(pjg*tgi)+(tgi+lbr));
    vlm    = pjg*lbr*tgi;
    printf("\n\t\tHASIL\n");
    printf("\t\t=====\n");
    printf("\tLuas permukaan = %d cm^2\n",l_prmk);
    printf("\tLuas alas      = %d cm^2\n",l_alas);
    printf("\tVolume         = %d cm^3\n",vlm);
}
