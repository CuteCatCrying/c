/**
Nama file           : while7.c
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
Tanggal pembuatan   : 18 Oktober 2018
Deskripsi           : Deret Fibonaci
*/

#include "stdio.h"

void main()
{
    int bil;
    int q,w,e;
    int a,b,c;
    a=b=c=0;
    q=w=e=0;
    do
    {
        printf("Input Angka : ");
            scanf("%d",&bil);
        if (bil%2!=0 && bil!=999)
            {
                q=q+bil;
                a=a+1;
            }
        if (bil%4==0)
            {
                w=w+bil;
                b=b+1;
            }
        if (bil>100 && bil!=999)
            {
                e=e+bil;
                c=c+1;
            }
    }while(bil!=999);
    printf("Jumlah Bilangan Ganjil         : %d\n",q);
    printf("Banyak Bilangan Ganjil         : %d\n",a);
    printf("Jumlah Bilangan Kelipatan 4    : %d\n",w);
    printf("Banyak Bilangan Kelipatan 4    : %d\n",b);
    printf("Jumlah Bilangan Lebih Dari 100 : %d\n",e);
    printf("Banyak Bilangan Lebih Dari 100 : %d\n",c);
}
