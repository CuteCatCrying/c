/**
    Nama    : Zukron Alviandy Rahmadhan
    Kelas   : TRPL 1B
    No BP   : 1811081030
    Deskrips: Bubble Short
*/

#include "stdio.h"

void main ()
{
    int a[100];
    int n,i,x;
    int swap;

    printf("Input Banyak Data : ");
        scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("A[%d] : ",i+1);
            scanf("%d",&a[i]);
    }
    for(i=1;i<=(n-1);i++)
    {
        for (x=n-1;x>=i;x--)
        {
            if (a[x] < a[x-1])
            {
                swap = a[x];
                a[x] = a[x-1];
                a[x-1] = swap;
            }
        }
    }
    printf("Isi Array Menjadi\n");
    for(i=0;i<n;i++)
    {
        printf("A[%d] : %d\n",i+1,a[i]);
    }
}
