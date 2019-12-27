/**
    Nama    : Zukron Alviandy Rahmadhan
    Kelas   : TRPL 1B
    No BP   : 1811081030
    Deskrips: Max Short
*/

#include "stdio.h"
#include "time.h"

void main ()
{
    int *a;
    int n,i,x;
    int swap,imax;

    printf("Input Banyak Data : ");
        scanf("%d",&n);
    printf("\n");
    a=(int*)malloc(n*sizeof(int));
    srand(time(NULL));

    for(i=0;i<n;i++)
    {
        a[i]=rand()/1000;
    }
    printf("Isi Array Sebelum\n");
    for(i=0;i<n;i++)
    {
        printf("A[%d] : %d\n",i+1,a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        imax=i;
        for(x=i+1;x<=n-1;x++)
        {
            if(a[imax]<a[x])
                imax=x;
        }
        swap    = a[imax];
        a[imax] = a[i];
        a[i]    = swap;
    }
    printf("\n\n");
    printf("Isi Array Menjadi\n");
    for(i=0;i<n;i++)
    {
        printf("A[%d] : %d\n",i,a[i]);
    }
}

