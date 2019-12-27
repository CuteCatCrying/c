/**
    Nama file       : suhu.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 13 September 2018
    Deskripsi       : Menghitung Suhu Celcius ke Reamur, Fahrenheit, dan Kelvin
*/

#include "stdio.h"

void main ()
{
    float cel, rer, fah;
    int kel;
    printf("\t\tKonverter Suhu Celcius ke Reamur, Fahrenheit, dan Kelvin\n");
    printf("\t\t=========================================================\n");
    printf("Input Suhu Celcius -> ");
        scanf("%f",&cel);
    rer = 0.8*cel;
    fah = (1.8*cel)+32;
    kel = (int)273+cel;
    printf("Suhu Reamur     = %.2f\n",rer);
    printf("Suhu Fahrenheit = %.2f\n",fah);
    printf("Suhu Kelvin     = %d\n",kel);

}
