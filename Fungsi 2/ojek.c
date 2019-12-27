#include "stdio.h"

int HitungTarif (int x);
int HitungGratis (int x);
int HitungBiaya (int x, int y);

int main ()
{
    int trans;
    int jarak, biaya;
    printf("PROMO : Diskopn 1 km setiap perjalanan 10 km (berlaku kelipatan)\n");
    printf("Jara Tempuh : ");
        scanf("%d",&jarak);
    printf("Pilihan moda Transportasi\n");
    printf("1. Motor (2000/km\n");
    printf("2. Mobil (4000/km\n");
    printf("Pilihan anda (1/2) : ");
        scanf("%d",&trans);
    biaya = HitungBiaya(trans,jarak);
    printf("Biaya perjalanan Anda : %d\n",biaya);
}

int HitungTarif (int x)
{
    int tf;
    if (x==1)
        tf = 2000;
    else if (x==2)
        tf = 4000;
    else
        tf = 0;
    return(tf);
}

int HitungGratis (int x)
{
    int gr;
    gr = x/10;
    return(gr);
}

int HitungBiaya (int x, int y)
{
    int gr,by,tf;
    gr = HitungGratis(y);
    tf = HitungTarif(x);
    printf("Anda Mendapatkan Gratis %d km\n",gr);
    printf("Jarak yang dibayarkan %d km\n",y-gr);
    by = (y-gr)*tf;
    return(by);
}
