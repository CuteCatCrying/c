/**
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
*/

#include "stdio.h"

void main()
{
    int bil,i;
    int x,y;
    x=0;
    y=-1;
    do
    {
        printf("Input Angka : ");
            scanf("%d",&bil);
            if (bil%2==0)
                x=x+bil;
            y=y+1;
    }while (bil%2==0);
    printf("\tMaaf %d Bukan Bilangan Genap\n\n",bil);
    printf("\n\nBanyak Bilangan Genap, %d Angka\n",y);
    printf("Jumlah Bilangan Genap, %d Angka\n",x);
}
