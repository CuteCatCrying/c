/**
    Nama    : Zukron Alviandy Rahmadhan
    Kelas   : TRPL 1B
    No BP   : 1811081030
*/

#include "stdio.h"

void main ()
{
    int a[100],b[100],c[100];
    int i,n;
    printf("Banyak Data : ");
        scanf("%d",&n);
    printf("\n\n");
    printf("Array A\n");
    for (i=0;i<n;i++)
    {
        printf("A[%d] : ",i+1);
            scanf("%d",&a[i]);
    }
    printf("\nArray B\n");
    for (i=0;i<n;i++)
    {
        printf("B[%d] : ",i+1);
            scanf("%d",&b[i]);
    }
    printf("\nArray C\n");
    for (i=0;i<n;i++)
    {
        if (a[i]>b[i])
        {
            c[i]=a[i];
        }
        else if (b[i]>a[i])
        {
            c[i]=b[i];
        }
        printf("C[%d] : %d\n",i,c[i]);
    }
}

