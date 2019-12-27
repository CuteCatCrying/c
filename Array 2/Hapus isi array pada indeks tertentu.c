/**
    Nama    : Zukron Alviandy Rahmadhan
    Kelas   : TRPL 1B
    No BP   : 1811081030
    Deskrip : Delete Array
*/

#include "stdio.h"

void main ()
{
    int a[100];
    int i,n,x;

    printf("Banyak data array A : ");
        scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("A[%d] : ",i+1);
            scanf("%d",&a[i]);
    }
    printf("Array Hapus diindeks     : ");
        scanf("%d",&x);
    for(i=x-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    printf("\n\nHasil\n\n");
    for(i=0;i<n-1;i++)
    {
        printf("A[%d] : %d\n",i+1,a[i]);
    }
}
