#include "stdio.h"

void main()
{
    int i,j,k,a,n;
    printf("masukkan bilangan anda = "); scanf("%d",&n);
    n = (n*2)-1;
    for(a=1;a<=n;a++)
    {
        printf("*");
    }
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=(n/2);j>=i;j--)
        {
            printf(" * ");
        }
        for(k=2;k<=i;k++)
        {
            printf("   ");
        }
        for(j=1;j<=i;j++)
        {
            printf("   ");
        }
        for(k=(n/2);k>=i;k--)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
