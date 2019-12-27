/**
    Nama    : Zukron Alviandy Rahmadhan
    Kelas   : TRPL 1B
    No BP   : 1811081030
    Deskrips: Mencari Array
*/

#include "stdio.h"

void main ()
{
    int a[100];
    int i,n,x,z;

    printf("Banyak data array A : ");
        scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("A[%d] : ",i+1);
            scanf("%d",&a[i]);
    }
    printf("\n");
    printf("Cari : ");
        scanf("%d",&x);

    for (i=0;i<n;i++)
    {
        if (a[i]==x)
        {
            printf("Hasil A[%d] : %d",i+1,a[i]);
        }
        else if (a[i]!=x && z==1)
        {
            printf("Tidak");
        }
    }

}
