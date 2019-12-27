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
    int i;
    int bil;
    int a, b;
    printf("Input : ");
        scanf("%d",&bil);
    a = 1;
    b = 1;
    for (i=1;i<=bil;i++)
    {
        a = a+b;
        printf("%d\n",a);

    }
}
