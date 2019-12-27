/**
Nama file           : while7.c
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
Tanggal pembuatan   : 18 Oktober 2018
Deskripsi           : Konversi Suhu
*/

#include "stdio.h"

void main()
{
    int i;
    float rea, fah;
    int kel;
    printf("\tCelcius\tReamur\tFahrenheit\tKelvin\n");
    i=0;
    while (i<=100)
    {
        rea = i*0.8;
        fah = (i*1.8)+32;
        kel = i+273;
        printf("\t%d\t%.2f\t%.2f\t\t%d\n",i,rea,fah,kel);
        i=i+10;

    }
}
