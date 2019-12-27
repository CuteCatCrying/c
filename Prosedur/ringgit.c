#include "stdio.h"

int hitung (int x);
void kur500 (int x);
void leb500 (int x);
void min (int x);

void main ()
{
    int n;
    printf("Banyak Uang Ringgit = ");
        scanf("%d",&n);
    hitung(n);
}

int hitung (int x)
{
    if (x<5)
    {
        min(x);
    }
    else if (x<=500)
    {
        kur500(x);
    }
    else
    {
        leb500(x);
    }
}

void min (int x)
{
    printf("\nUang yang Dikirimkan tidak memenuhi syarat\n");
    printf("Seharusnya Lebih dari RM5\n");
}

void kur500 (int x)
{
    int hsl;
    hsl = (x*4000)-20000;
    printf("\nDalam Ringgit = RM%d\n",x-5);
    printf("Harga Rupiah Anda : Rp. %d\n",hsl);
}

void leb500 (int x)
{
    int hsl;
    hsl = (x*4000)-40000;
    printf("\nDalam Ringgit = RM%d\n",x-10);
    printf("Harga Rupiah Anda : Rp. %d\n",hsl);
}
