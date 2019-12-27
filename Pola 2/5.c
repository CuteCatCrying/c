/**
    Pembuat         : Zukron Alviandy Rahmadhan
    No BP           : 1811081030
    Deskripsi       : Pola dengan ukuran sesuai input user
*/

#include "stdio.h"

void main ()
{
   int i,j,k,l,m,a,b,n;
    printf("==============================================\n");
    printf("Nama\t: Alvin Faiz\nKelas\t: TRPL 1B\nNo.BP\t: 1811081025\nProgram\t: Program perulangan\n");
    printf("==============================================\n");
    printf("Masukkan ukuran = \t");scanf("%d", &n);
    m=(n*2)-1;
    b=n-1;
    for(a=1;a<=m;a++)
    {
        printf("*");
    }
    printf("\n");
    for(i=1;i<=b;i++)
    {
        for(j=b;j>=i;j--)
        {
            printf("*");
        }
        for(k=1;k<=i;k++)
        {
            printf("z");
        }
        for(k=2;k<=i;k++)
        {
            printf("x");
        }
        for(l=b;l>=i;l--)
        {
            printf("*");
        }
        printf("\n");

    }
}
