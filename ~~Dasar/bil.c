/**
    Nama file       : bil.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 20 September 2018
    Deskripsi       : f(x,y)=x^2 +2xy -y^2
*/

#include "stdio.h"

void main ()
{
    int x, y, fxy;
    printf("X = ");
        scanf("%d",&x);
    printf("Y = ");
        scanf("%d",&y);
    fxy = (x*x)+(2*x*y)-(y*y);
    printf("Hasil = %d",fxy);
}
