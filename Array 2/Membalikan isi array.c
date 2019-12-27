/**
    Nama    : Zukron Alviandy Rahmadhan
    Kelas   : TRPL 1B
    No BP   : 1811081030
*/

#include "stdio.h"

void main ()
{
    int bil[20],bil2[20];
    int i,n,z;
    z=0;
    printf("Banyak Data : ");
        scanf("%d",&n);
    printf("\n");
    for (i=n;i>=1;i--)
    {
        z=z+1;
        printf("A[%d] : ",z);
            scanf("%d",&bil[i]);
            bil2[i]=bil[i];
    }
    printf("\n");
    printf("Kebalikan Array A\n");
    for (i=1;i<=n;i++)
    {
        printf("B[%d] : %d\n",i,bil2[i]);
    }
}
