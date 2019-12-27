/// Kabataku Menggunakan Prosedur

#include "stdio.h"

void tambah (int a, int b); ///Prosedur dengan parameter input
int kurang (int a, int b); ///Fungsi
void kali (int a, int b, int *c); ///C merupakan parameter ouput
void bagi (int a, int b, float *c); ///C parameter output

void main ()
{
    int bil1, bil2, hsl;
    float hsl2;
    printf("Angka 1 : ");
        scanf("%d",&bil1);
    printf("Angka 2 : ");
        scanf("%d",&bil2);
    tambah(bil1,bil2);
    printf("%d - %d = %d\n",bil1,bil2,kurang(bil1,bil2));
    kali(bil1, bil2, &hsl);
    printf("%d * %d = %d\n",bil1,bil2,hsl);
    bagi(bil1,bil2, &hsl2);
    printf("%d / %d = %.2f\n",bil1,bil2,hsl2);
}

void tambah (int a, int b)
{
    int c;
    c = a+b;
    printf("%d + %d = %d\n",a,b,c);
}
int kurang (int a, int b)
{
    int c;
    c = a-b;
    return c;
}
void kali (int a, int b, int *c)
{
    *c = a*b;
}
void bagi (int a, int b, float *c)
{
    *c = (float)a/b;
}
