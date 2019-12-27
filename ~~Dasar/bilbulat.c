/**
    Nama file       : bilbulat.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 13 September 2018
    Deskripsi       : Proses beberapa buah bilangan bulat
*/

#include "stdio.h"

void main ()
{
    int a,b,c;
    //a = 10; ///mengisi variabel a dengan 10
    //b = 4; ///mengisi variabel b dengan 4
    printf("A = ");
        scanf("%d",&a);
    printf("B = ");
        scanf("%d",&b);
    a = a + b; ///a yang baru= a lama + b
    c = (2*a)+b;
        printf("Nilai A yang baru = %d\n",a);
        printf("%d adalah nilai B\n",b);
        printf("%d = (2*%d)+%d\n",c,a,b);
}
