/**
Nama file           : for6.c
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
Tanggal pembuatan   : 11 Oktober 2018
Deskripsi           : Menghitung hasil x pangkat y
*/

#include "stdio.h"

void main()
{
    int x, y;
    int jum;
    int i;
    printf("Input X = ");
        scanf("%d",&x);
    printf("Input Y = ");
        scanf("%d",&y);
    jum = 1;
    for (i=1;i<=y;i++)
    {
        jum = jum * x;
    }
    printf("%d Pangkat %d = %d\n\n",x,y,jum);
}
