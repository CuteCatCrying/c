/**
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
*/

#include "stdio.h"

void main()
{
    int bil,i;
    printf("Input Batas Deret Prima : ");
        scanf("%d",&bil);
    i=1;
    while (i<=bil)
    {
        if (i==2 || i==3 || i==5 || i!=1 && (i%2==1 && i%3!=0 && i%5!=0))
            printf(" %d",i);
        i++;
    }
}
