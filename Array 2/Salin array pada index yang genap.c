/**
    Nama    : Zukron Alviandy Rahmadhan
    Kelas   : TRPL 1B
    No BP   : 1811081030
*/

#include "stdio.h"

void main ()
{
    int a[20],b[20];
    int i,c,n;
    c=1;
    printf("Banyak Data : ");
        scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("A[%d] : ",i);
            scanf("%d",&a[i]);
    }
    printf("\nHasil\n");
    for (i=1;i<=n;i++)
    {
        if (a[i]%2==0)
        {
            b[i]=a[i];
            printf("B[%d] : %d\n",c,b[i]);
            c++;
        }
    }
}
