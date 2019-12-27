/**
    Nama file       : menubalok.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 27 September 2018
    Deskripsi       : Piliham menghitung balok
*/

#include "stdio.h"

void main ()
{
    int menu;
    int p,l,t;
    int la,lp, v;

    printf("Menu Balok \n");
    printf("1.Hitung luas alas\n");
    printf("2.Hitung luas permukaan\n");
    printf("3.Hitung volume\n");
    printf("4.Keluar program\n");
    printf("=======================\n");
    printf("Masukan menu pilihan anda (1/2/3/4) : ");
        scanf("%d",&menu);
    switch (menu)
    {
        case 1 : {printf("Panjang = ");
                    scanf("%d",&p);
                  printf("Lebar   = ");
                    scanf("%d",&l);
                  la = p*l;
                  printf("Luas Alas = %d\n",la);
                  break;
                 }
        case 2 : {printf("Panjang = ");
                    scanf("%d",&p);
                  printf("Lebar   = ");
                    scanf("%d",&l);
                  printf("Tinggi  = ");
                    scanf("%d",&t);
                  lp = (2*p*l) + (2*p*t) + (2*l*t);
                  printf("Luas Permukaan = %d\n",lp);
                  break;
                 }
        case 3 : {printf("Panjang = ");
                    scanf("%d",&p);
                  printf("Lebar   = ");
                    scanf("%d",&l);
                  printf("Tinggi  = ");
                    scanf("%d",&t);
                  v = p*l*t;
                  printf("Volume = %d\n",v);
                  break;
                 }
        case 4 : {printf("Keluar Program.. Byeee....\n");
                  break;
                 }
        default: printf("Pilihan tidak tersedia\n");
    }
}
