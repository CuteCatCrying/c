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
    int z,x;
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
    z=1;
    for (i=1;i<n;i++)
    {
        if (a[i]%2==0)
        {
            b[i]=a[i];
            printf("B[%d] : %d\n",z,b[i]);
            z++;
        }
    }
    printf("\nArray C\n");
    x=1;
    for (i=0;i<n;i++)
    {
        if (a[i]%2!=0)
        {
            c[i]=a[i];
            printf("C[%d] : %d\n",x,c[i]);
            x++;
        }
    }
}


