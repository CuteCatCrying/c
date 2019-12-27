/**
    Nama    : Zukron Alviandy Rahmadhan
    Kelas   : TRPL 1B
    No BP   : 1811081030
*/

#include "stdio.h"

void main ()
{
    int nilai [10];
    int i,jum,bil,max,id;
    float rata;

    printf("Input Banyak Mahasiswa : ");
        scanf("%d",&bil);
    printf("\n");
    max=jum=id=0;
    printf("\tPembacaan Data Nilai\n");
    for (i=0;i<bil;i++)
    {
        printf("Nilai Mahasiswa ke-%d = ",i+1);
            scanf("%d",&nilai[i]);
        jum=jum+nilai[i];
        if (nilai[i]>max)
        {
            max=nilai[i];
            id=i+1;
        }
    }
    rata=(float)jum/10;
    printf("\n\n\tMenampilkan Data Nilai\n");
    for (i=0;i<bil;i++)
    {
        printf("Nilai Mahasiswa Ke-%d = %d\n",i+1,nilai[i]);
    }
    printf("\n");
    printf("Nilai Max = %d\n",max);
    printf("\tMahasiswa ke-%d tertinggi dengan nilai %d\n",id,max);
    printf("jum       = %d\n",jum);
    printf("Rata rata = %.2f\n\n",rata);
}
