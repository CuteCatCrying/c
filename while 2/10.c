/**
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
*/

#include "stdio.h"

void main()
{
    int bil;
        printf("Input Bilangan Prima : ");
            scanf("%d",&bil);
    if (bil==2 || bil==3 || bil==5 || bil!=1 && (bil%2==1 && bil%3!=0 && bil%5!=0))
        printf("\n\tAngka %d adalah bilangan prima\n\n",bil);
    else
        printf("\n\tAngka %d Bukan Bilangan Prima\n\n",bil);
}
