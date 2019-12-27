/**
    Nama file       : uang.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 20 September 2018
    Deskripsi       : Mengkonversikan nilai uang kedalam uang pecahan
*/

#include "stdio.h"

void main ()
{
    int bilbul, pul, rib, gop, mat, pec;
    printf("Bilangan bulat = ");
        scanf("%d",&bilbul);
    pul = bilbul/50000;
    rib = bilbul%50000/5000;
    gop = bilbul%50000%5000/2000;
    mat = bilbul%50000%5000%2000/500;
    pec = bilbul%50000%5000%2000%500/100;
    printf("\n\t\tHASIL\n");
    printf("\t\t=====\n\n");
    printf("\tUang Rp. 50000 = %d lembar\n",pul);
    printf("\tUang Rp. 5000  = %d lembar\n",rib);
    printf("\tUang Rp. 2000  = %d lembar\n",gop);
    printf("\tUang Rp. 500   = %d lembar\n",mat);
    printf("\tUang Rp. 100   = %d lembar\n",pec);
}
