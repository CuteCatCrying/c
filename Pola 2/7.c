/**
    Pembuat         : Zukron Alviandy Rahmadhan
    No BP           : 1811081030
    Deskripsi       : Pola
*/

#include "stdio.h"

void main ()
{
    int i,a,b;
    int bil;
    printf("Input Ukuran : "); scanf("%d",&bil);
    for (i=1;i<=bil;i++)
    {
        for (a=1;a<=i;a++)
        {
            printf(" ");
        }
        for (b=1;b<=((bil-i)+1);b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
}

