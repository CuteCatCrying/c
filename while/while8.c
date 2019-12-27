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
    while (i<=n)
    {
        f   = f*i;
        i++;
    }
    i=1;
    while (i<=kur)
    {
        a = a*i;
        i++;
    }
    perm = (float)f/a;
    printf("\n\tPermutasi = %.2f",perm);
}
