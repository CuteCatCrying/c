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
        b=i%2;
        for (a=1;a<=i;a++)
        {
            printf(" %d",i);
            /*printf(" %d",b);
            if (b==0)
                b=1;
            else
                b=0;*/
        }
        printf("\n");
    }
}

