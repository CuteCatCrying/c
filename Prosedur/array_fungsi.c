#include "stdio.h"

int i; ///Variabel Global
void input(int x[], int jumlah);
int hitung_total(int x[], int jumlah);

void main ()
{
    int n,total;
    int nilai[999];
    printf("Jumlah Data = ");
        scanf("%d",&n);
    input(nilai,n);
    total = hitung_total(nilai,n);
    printf("Total Nilai = %d\n",total);
}

void input (int x[], int jumlah)
{
    for (i=0;i<jumlah;i++)
    {
        printf("Data Ke-%d = ",i+1);
            scanf("%d",&x[i]);
    }
}

int hitung_total (int x[],int jumlah)
{
    int total;
    total = 0;
    for (i=0;i<jumlah;i++)
        total = total+x[i];
    return total;
}
