#include "stdio.h"

void inputAT (int *a, int *b);
void luassegi3 (int a, int t, float *ls);

void main ()
{
    int n,i,alas,tinggi;
    float luas;
    printf("Banyak Segitiga : ");
        scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("Segitiga Ke-%d\n",i);
        inputAT (&alas,&tinggi);
        luassegi3(alas,tinggi,&luas);
        printf("Luas Segitiga = %.2f\n\n",luas);
    }
}

void inputAT (int *a, int *b)
{
    printf("Alas   : ");
        scanf("%d",a);
    printf("Tinggi : ");
        scanf("%d",b);
}

void luassegi3 (int a, int t, float *ls)
{
    *ls = (float)(a*t)/2;
}
