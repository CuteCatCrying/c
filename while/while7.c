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
    int p;
    float perm;
    printf("Permutasi nPr\n");
    printf("Input n = ");
        scanf("%d",&n);
    printf("Input r = ");
        scanf("%d",&r);
    f   = 1;
    a   =1;
    kur = n-r;
    for (i=1;i<=n;i++)
    {
        f   = f*i;
    }
    for (i=1;i<=kur;i++)
    {
        a = a*i;
    }
    perm = (float)f/a;
    printf("\n\tPermutasi = %.2f",perm);
}
