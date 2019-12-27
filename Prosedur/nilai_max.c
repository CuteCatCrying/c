#include "stdio.h"

int max2 (int x, int y);

void main ()
{
    int a,b,c,d,e;
    printf("Angka Ke-1 : ");
        scanf("%d",&a);
    printf("Angka Ke-2 : ");
        scanf("%d",&b);
    printf("Angka Ke-3 : ");
        scanf("%d",&c);
    printf("Angka Ke-4 : ");
        scanf("%d",&d);
    printf("Angka Ke-5 : ");
        scanf("%d",&e);
    printf("Nilai Yang Terbesar = %d\n\n",max2(a,max2(b,max2(c,max2(d,e)))));
}

int max2 (int x, int y)
{
    if (x>y)
        return x;
    else
        return y;
}
