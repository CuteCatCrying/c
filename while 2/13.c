/**
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
*/

#include "stdio.h"

void main()
{
    int bil,i;
    int a,b,c;
    a=0;
    b=1;
    printf("Input Batas Deret Fibonacci : ");
        scanf("%d",&bil);
    while (a<=bil)
    {
        c=a;
        printf(" %d",c);
        a=a+b;
        b=c;
    }
}
