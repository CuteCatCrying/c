/**
    Nama    : Zukron Alviandy Rahmadhan
    Kelas   : TRPL 1B
    No BP   : 1811081030
*/

#include "stdio.h"

void main ()
{
    int a[100],b[100],c[100];
    int i,n,z;
    printf("Banyak Data : ");
        scanf("%d",&n);
    printf("\n\n");
    printf("Array A\n");
    for (i=1;i<n;i++)
    {
        printf("A[%d] : ",i);
            scanf("%d",&a[i]);
    }
    printf("\nArray B\n");
    for (i=1;i<n;i++)
    {
        printf("B[%d] : ",i);
            scanf("%d",&b[i]);
    }
    printf("\nArray C\n");
    for (i=1;i<n;i++)
    {
        c[i]=a[i]+b[i];
        printf("C[%d] : %d\n",i,c[i]);
    }
}

