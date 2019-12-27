/**
Nama file           : while7.c
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
Tanggal pembuatan   : 18 Oktober 2018
Deskripsi           : Menghitung permutasi
*/

#include "stdio.h"

void main()
{
    int f, i, a;
    int n, r;
    int kur;
    float perm;
    printf("Permutasi nPr\n");
    printf("Input n = ");
        scanf("%d",&n);
    printf("Input r = ");
        scanf("%d",&r);
    f   = 1;
    a   = 1;
    i   = 1;
    kur = n-r;
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
    perm = (float)f/a;
    printf("\n\tPermutasi = %.2f",perm);
}
