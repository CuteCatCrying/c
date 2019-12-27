#include "stdio.h"

void tukar (int x, int y);

void main ()
{
    int a,b;
    printf("Angka 1 : ");
        scanf("%d",&a);
    printf("Angka 2 : ");
        scanf("%d",&b);
    printf("\tNilai Sebelumnya\n");
    printf("A = %d\n",a);
    printf("B = %d\n",b);
    tukar(a,b);
    printf("\tNilai Setelahnya\n");
    printf("A = %d\n",a);
    printf("B = %d\n",b);
}

void tukar (int x, int y)
{
    int temp;
    temp = x;
    x    = y;
    y    = temp;
    printf("\tNilai Didalam Fungsi Tukar\n");
    printf("A = %d\n",x);
    printf("B = %d\n",y);
}
