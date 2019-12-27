#include "stdio.h"

int jurusan (int x);
void orang ();
int diskon (int x);
void total (int x);

void main ()
{
    int n;
    printf("\t\tBus Jurusan Padang-Jakarta\n");
    printf("   Kelas\t\tHarga/Orang\n");
    printf("1. Ekonomi\t\tRp. 150.000,-\n");
    printf("2. Eksekutif\t\tRp. 250.000,-\n");
    printf("2. Super Eksekutif\tRp. 350.000,-\n");
    printf("Pilih Kelas  : ");
        scanf("%d",&n);
    total(n);
}

int jurusan (int x)
{
    if (x==1)
        return 150000;
    else if (x==2)
        return 250000;
    else if (x==3)
        return 350000;
}

void orang ()
{
    int tik;
    printf("Banyak Tiket : ");
        scanf("%d",&tik);
    diskon(tik);
}

int diskon (int x)
{
    int tot;
    if (x<=4)
    {
        tot=x*jurusan(x);
        return tot;
    }
    else
    {
        tot=(x*jurusan(x))*0.1;
        return tot;
    }
}

void total (int x)
{
    int tot,or1;

     tot = jurusan(x)-orang();
    printf("Biaya Yang Harus Dibayar Adalah %d\n",or1);
}
