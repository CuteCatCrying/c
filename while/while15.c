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
    int a, b, c;
    int i;
    printf("\tDeret Fibonaci\n");
    printf("Banyak Deret : ");
        scanf("%d",&bil);
    a = 0;
    b = 1;
    printf("%d %d",a,b);
    for (i=3;b<=bil;i++)
    {
        c = a+b;
        printf(" %d",c);
        a = b;
        b = c;
    }
}
