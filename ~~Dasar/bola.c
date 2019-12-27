/**
    Nama file       : bola.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 20 September 2018
    Deskripsi       : Menghitung volume dan luas permukaan bola
*/

#include "stdio.h"

void main ()
{
    float jr_bl, per, phi, vlm, l_prmk;
    printf("Jari-jari = ");
        scanf("%f",&jr_bl);
    per    =(float) 4/3;
    phi    =(float) 22/7;
    l_prmk = 4*phi*jr_bl*jr_bl;
    vlm    = per*phi*jr_bl*jr_bl*jr_bl;
    printf("\n\t\t\tHASIL\n");
    printf("\t\t\t=====\n");
    printf("\tLuas Permukaan Bola = %.1f\n",l_prmk);
    printf("\tVolume Bola         = %.1f\n",vlm);
}
