/**
    Nama file       : wujudair.c
    Pembuat         : Zukron Alviandy Rahmadhan
    Tgl Pembuatan   : 27 September 2018
    Deskripsi       : Menentukan wujud air berdasarkan suhu
*/

#include "stdio.h"

void main ()
{
    int suhu;
    printf("Masukan suhu air = ");
        scanf("%d",&suhu);
    if (suhu<=0)
        printf("Air berwujud padat\n");
    else if (suhu>=100)
        printf("Air berwujud gas\n");
    else ///suhu > 0 and suhu < 100
        printf("Air berwujud cair\n");
    ///endif
}
