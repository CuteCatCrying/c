#include "stdio.h"

int jam_kerja (int x);
int lembur (int x);
int golongan (char x);
int gaji_total (int x, int y);

int main ()
{
    char gol;
    int jam;
    int tot;
    printf("Golongan : ");
        scanf(" %c",&gol);
    printf("Jam      : ");
        scanf("%d",&jam);
    tot = gaji_total(gol,jam);
    printf("Gaji Anda Rp. %d\n\n",tot);
}

int gaji_total (int x, int y)
{
    return(golongan(x) + jam_kerja(y));
}

int golongan (char x)
{
    if (x=='A' || x=='a')
    {
        return(1000000);
    }
    else if (x=='B' || x=='b')
    {
        return(1500000);
    }
}

int jam_kerja (int x)
{
    int lol;
    if (x<=160)
    {
        return(x*2000);
    }
    else if (x>160)
    {
        lol = (160*2000)+lembur(x-160);
        return(lol);
    }
}

int lembur (int x)
{
    if(x<40)
    {
        return(x*4000);
    }
    else
    {
        return(40*4000);
    }
}
