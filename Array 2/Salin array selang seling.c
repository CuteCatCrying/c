/**
    Nama    : Zukron Alviandy Rahmadhan
    Kelas   : TRPL 1B
    No BP   : 1811081030
    Deskrip : Gabung Array A dan B ke Array c selang seling
*/

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void main ()
{
    int a[100],b[100],c[100];
    int i,j,na,nb,n;

    srand(time(NULL)); ///seed random
    printf("Banyak Data Array A : ");
        scanf("%d",&na);
    for (i=0;i<na;i++)
    {
        a[i]=rand()/1000;
        printf("%d\t",a[i]);
    }
    printf("\nBanyak Data Array B : ");
        scanf("%d",&nb);
    for (i=0;i<nb;i++)
    {
        b[i]=rand()/1000;
        printf("%d\t",b[i]);
    }
    if (na>nb)
        n = na;
    else
        n = nb;
    j=0;
    for (i=0;i<n;i++)
    {
        if(i<na)
        {
            c[j] = a[i];
            j++;
        }
        if(i<nb)
        {
            c[j] = b[i];
            j++;
        }
    }
    printf("\n\n");
    printf("\nC : ");
    for(i=0;i<j;i++)
    {
        printf("%d\t",c[i]);
    }
}

