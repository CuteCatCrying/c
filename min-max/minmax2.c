/**
    Pembuat         : Zukron Alviandy Rahmadhan
    No BP           : 1811081030
    Deskripsi       : Min dan Max
*/

#include "stdio.h"

void main ()
{
    int bil;
    int min, max,jum;
    int i,n;
    float rata;
    printf("Input Banyak Data : ");
        scanf("%d",&n);
    printf("Bilangan Pertama  : ");
        scanf("%d",&bil);
    jum=max=min=bil;
    for (i=2;i<=n;i++)
    {
        printf("Bilangan Ke- %d  : ",i);
            scanf("%d",&bil);
        jum= jum+bil;
        if (bil>max)
            max=bil;
        if (bil<min)
            min=bil;
    }
    rata=(float)jum/n;
    printf("\n\n");
    printf("Jumlah Bilangan    : %d\n",jum);
    printf("Rata-rata Bilangan : %.2f\n",rata);
    printf("Nilai Max         -> %d\n",max);
    printf("Nilai Min         -> %d\n",min);
}

