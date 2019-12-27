/**
    Nama    : Zukron Alviandy Rahmadhan
    Kelas   : TRPL 1B
    No BP   : 1811081030
    Deskrips: Hintung Matrix
*/

#include "stdio.h"
#include "time.h"

void main ()
{
    int a[5][5];
    int j,i,jum;

    printf("Input Angka Matriks 3 x 3\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("Baris %d Kolom %d = ",i+1,j+1);
                scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n");
    printf("Matriks\n");
    for (i=0;i<=2;i++)
    {
        jum = 0;
        for (j=0;j<=2;j++)
        {
            jum = jum+a[i][j];
            printf("A[%d][%d] : %d\n",i+1,j+1,a[i][j]);
        }
        printf("Jumlah = %d\n\n",jum);
    }
}


