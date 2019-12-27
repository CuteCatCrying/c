/**
    Nama    : Zukron Alviandy Rahmadhan
    Kelas   : TRPL 1B
    No BP   : 1811081030
*/

#include "stdio.h"

void main ()
{
    int a[100],b[100];
    char huruf[100];
    int na,nb,nc,nd,ne;
    int i,n;
    printf("Banyak Input Nilai : ");
        scanf("%d",&n);
    na=nb=nc=nd=ne=0;
    for (i=1;i<=n;i++)
    {
        printf("Nilai Mahasiswa Ke-%d: ",i);
            scanf("%d",&a[i]);
    }
    for (i=1;i<=n;i++)
    {
        if (a[i]>=81 && a[i]<=100)
        {
            huruf[i]='A';
            na=na+1;
        }
        else if (a[i]>=71 && a[i]<=80)
        {
            huruf[i]='B';
            nb=nb+1;
        }
        else if (a[i]>=56 && a[i]<=70)
        {
            huruf[i]='C';
            nc=nc+1;
        }
        else if (a[i]>=41 && a[i]<=55)
        {
            huruf[i]='D';
            nd=nd+1;
        }
        else
        {
            huruf[i]='E';
            ne=ne+1;
        }
    }
    printf("\n\n");
    for (i=1;i<=n;i++)
    {
        printf("Nilai Mahasiswa %d = %c\n",a[i],huruf[i]);
    }
    printf("\n\n");
    printf("Banyak Mahasiswa Nilai A : %d\n",na);
    printf("Banyak Mahasiswa Nilai B : %d\n",nb);
    printf("Banyak Mahasiswa Nilai C : %d\n",nc);
    printf("Banyak Mahasiswa Nilai D : %d\n",nd);
    printf("Banyak Mahasiswa Nilai E : %d\n",ne);


}


