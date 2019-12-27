#include "stdio.h"

int tambah (int x, int y);
int kali (int x, int y);
int kurang (int x, int y);
float bagi (int x, int y);
int modulo (int x, int y);

int main ()
{
    int n,r;
    int hsl;
    printf("Angka 1 : ");
        scanf("%d",&n);
    printf("Angka 2 : ");
        scanf("%d",&r);
    hsl = tambah(n,r);
    printf("Hasil Tambah %d + %d = %d\n",n,r,hsl);
    hsl = kurang(n,r);
    printf("Hasil Kurang %d - %d = %d\n",n,r,hsl);
    printf("Hasil Kali   %d * %d = %d\n",n,r,kali(n,r));
    printf("Hasil Bagi   %d / %d = %.2f\n",n,r,bagi(n,r));
    printf("Hasil Modulo %d / %d = %d\n",n,r,modulo(n,r));
}

int tambah (int x, int y)
{
    int z;
    z = x+y;
    return (z);
}

int kurang (int x, int y)
{
    int z;
    z = x-y;
    return (z);
}

int kali (int x, int y)
{
    return(x*y);
}

float bagi (int x, int y)
{
    return ((float)x/y);
}

int modulo (int x, int y)
{
    return(x%y);
}
