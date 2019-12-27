#include "stdio.h"

void faktorial (int x, int *y);
void permutasi (int x, int y);

void main ()
{
    int n,r;
    int fn,fr,fnr,ncr;
    printf("Nilai n : ");
        scanf("%d",&n);
    printf("Nilai r : ");
        scanf("%d",&r);
    permutasi(n,r);
    faktorial(n,&fn);
    faktorial((n-r),&fnr);
    faktorial(r,&fr);
    ncr = fn/(fr*fnr);
    printf("Kombinasi %dC%d = %d\n",n,r,ncr);
}

void faktorial (int x, int *y)
{
    int i;
    *y=1;
    for (i=1;i<=x;i++)
    {
        *y = *y*i;
    }
}

void permutasi (int x, int y)
{
    int fx, fxy, xpy;
    faktorial(x,&fx);
    faktorial((x-y),&fxy);
    xpy = fx/fxy;
    printf("Permutasi %dP%d = %d\n",x,y,xpy);
}
