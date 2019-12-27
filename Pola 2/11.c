/*
Nama    : Alvin Faiz
Kelas   : TRPL 1B
No.BP   : 1811081025
*/
#include "stdio.h"

void main()
{
    int i,j,k,l,m,a,b,n;
    printf("Masukkan ukuran = ");scanf("%d", &n);
    m=(n*2)-1;
    b=n-1;
    for(a=1;a<=m;a++)
    {
        printf(" ");
    }
    printf("\n");
    for(i=b;i>=1;i--)
    {
        for(j=b;j>=i;j--)
        {
            printf(" ");

        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        for(k=2;k<=i;k++)
        {
            printf("*");
        }
        for(l=b;l>=i;l--)
        {
            printf(" ");
        }
        printf("\n");

    }
    for(i=2;i<=b;i++)
    {
        for(j=b;j>=i;j--)
        {
            printf(" ");

        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        for(k=2;k<=i;k++)
        {
            printf("*");
        }
        for(l=b;l>=i;l--)
        {
            printf(" ");
        }
        printf("\n");
    }

}
