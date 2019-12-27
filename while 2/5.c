/**
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
*/

#include "stdio.h"

void main()
{
    int bil,i,a;
    printf("Input Batas Deret : ");
        scanf("%d",&bil);
    a=3;
    for (i=1;a<=bil;i++)
    {
        printf(" %d",a);
        if (i%2==0)
            a=a-5;
        else
            a=(a*2)+a;
    }
}
