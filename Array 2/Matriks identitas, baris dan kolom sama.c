/**
    Nama    : Zukron Alviandy Rahmadhan
    Kelas   : TRPL 1B
    No BP   : 1811081030
    Deskrips: Matriks Identitas
*/

#include "stdio.h"
#include "time.h"

void main ()
{
    int a[100][100];
    int j,i;
    int brs,klm;

    printf("Input Baris : ");
        scanf("%d",&brs);
    printf("Input Kolom : ");
        scanf("%d",&klm);
    if (brs==klm)
    {
        for (i=0;i<klm;i++)
        {
            for (j=0;j<brs;j++)
            {
                if (i==j)
                    a[i][j] = 1;
                else
                    a[i][j] = 0;
            }
        }
        for (i=0;i<klm;i++)
        {
            for (j=0;j<brs;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n\n");
        printf("Baris dengan Kolom Berbeda\n");
    }
}



