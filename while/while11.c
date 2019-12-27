/**
Nama file           : while7.c
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
Tanggal pembuatan   : 18 Oktober 2018
Deskripsi           : Menghitung Kombinasi
*/

#include "stdio.h"

void main()
{
    int f, i, a, x;
    int n, r;
    int kur;
    float perm;
    printf("Kombinasi nKr\n");
    printf("Input n = ");
        scanf("%d",&n);
    printf("Input r = ");
        scanf("%d",&r);
    f   = 1;
    a   = 1;
    x   = 1;
    kur = n-r;
    i=1;
    do
    {
        f   = f*i;
        i++;
    }
    while (i<=n);
    i=1;
    do
    {
        a = a*i;
        i++;
    }
    while (i<=kur);
    i=1;
    do
    {
        x = x*i;
        i++;
    }
    while (i<=r);
    perm = (float)f/(a*x);
    printf("\n\tKombinasi = %.2f",perm);
}
