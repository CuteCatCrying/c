/**
    Nama    : Zukron Alviandy Rahmadhan
    Kelas   : TRPL 1B
    No BP   : 1811081030
*/

#include "stdio.h"

void main ()
{
    int nilai [10];
    int i,jum;
    float rata;

    printf("\tPembacaan Data Nilai\n");
    for (i=0;i<10;i++)
    {
        printf("Nilai Mahasiswa ke-%d = ",i+1);
            scanf("%d",&nilai[i]);
    }
    jum = 0;
    for (i=0;i<10;i++)
    {
        jum=jum+nilai[i];
    }
    rata=(float)jum/10;
    printf("\n\n\tMenampilkan Data Nilai\n");
    for (i=0;i<10;i++)
    {
        printf("Nilai Mahasiswa Ke-%d = %3d\n",i+1,nilai[i]);
    }
    printf("jum     = %d\n",jum);
    printf("Rata rata = %.2f\n\n",rata);
}
