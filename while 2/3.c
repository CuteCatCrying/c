/**
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
*/

#include "stdio.h"

void main()
{
    int bil,i,a,b;
    printf("Input Banyak Deret : ");
        scanf("%d",&bil);
    a=1;
    b=1;
    for (i=1;i<=bil;i++)
    {
        printf(" %d",a);
        a=a+b;
        b=(b%3)+1;
    }
}
