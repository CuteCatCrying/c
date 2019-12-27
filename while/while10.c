/**
Nama file           : while7.c
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
Tanggal pembuatan   : 18 Oktober 2018
Deskripsi           : Menghitung Kombinas
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
    for (i=1;i<=n;i++)
    {
        f   = f*i;
    }
    for (i=1;i<=kur;i++)
    {
        a = a*i;
    }
    for (i=1;i<=r;i++)
    {
        x = x*i;
    }
    perm = (float)f/(a*x);
    printf("\n\tKombinasi = %.2f",perm);
}
