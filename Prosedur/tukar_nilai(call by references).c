#include "stdio.h"

void tukar (int *px, int *py);

void main ()
{
    int a,b;
    printf("Angka 1 : ");
        scanf("%d",&a);
    printf("Angka 2 : ");
        scanf("%d",&b);
    printf("\tNilai Sebelum\n");
    printf("A = %d\n",a);
    printf("B = %d\n",b);
    tukar (&a,&b);
    printf("\tNilai Setelahnya\n");
    printf("A = %d\n",a);
    printf("B = %d\n",b);
}

void tukar (int *px, int *py)
{
    int temp;
    temp = *px;
    *px  = *py;
    *py  = temp;
    printf("\tNilai Didalam fungsi tukar\n");
    printf("A = %d\n",*px);
    printf("B = %d\n",*py);
}
