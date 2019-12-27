/**
    Pembuat         : Zukron Alviandy Rahmadhan
    No BP           : 1811081030
    Deskripsi       : Pola dengan ukuran sesuai input user
*/

#include "stdio.h"

void main ()
{
    int i,a,b,c,d,e,f,r;
    int bil;
    printf("Input Ukuran : ");
        scanf("%d",&bil);
    for (i=1;i<=bil;i++)
    {
        for (a=bil;a>=i;a--)
        {
            printf(" ");
        }
        for (c=1;c<=i;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (f=2;f<=bil;f++)
    {
        for (e=1;e<=f;e++)
        {
            printf(" ");
        }
        for (r=bil;r>=f;r--)
        {
            printf("*");
        }
        printf("\n");
    }
}
