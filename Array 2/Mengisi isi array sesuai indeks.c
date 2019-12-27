/**
    Nama    : Zukron Alviandy Rahmadhan
    Kelas   : TRPL 1B
    No BP   : 1811081030
    Deskrip : Insert Array
*/

#include "stdio.h"

void main ()
{
    int a[100];
    int i,n,x;
    printf("Banyak Array A : ");
        scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("A[%d] : ",i+1);
            scanf("%d",&a[i]);
    }
    printf("Indeks yang diinsert : ");
        scanf("%d",&x);
    for(i=n;i>x-1;i--)
    {
        a[i]=a[i-1];
    }
        printf("Tambah : ");
            scanf("%d",&a[i]);
    for(i=0;i<n+1;i++)
    {
        printf("A[%d] : %d\n",i+1,a[i]);
    }
}

