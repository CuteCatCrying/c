/** Faktorial
*/

#include "stdio.h"

int faktorial (int x);
int permutasi (int x, int y);
int kombinasi (int x, int y);
int main ()
{
    int n,r;
    int pr,kb;
    printf("Nilai n : ");
        scanf("%d",&n);
    printf("Nilai r : ");
        scanf("%d",&r);
    pr = permutasi(n,r);
    printf("Permutasi = %d\n",pr);
    kb = kombinasi(n,r);
    printf("Kombinasi = %d",kb);
}

int faktorial (int x)
{
    int i,z;
    z=1;
    for (i=1;i<=x;i++)
    {
        z = z*i;
    }
    return(z);
}

int permutasi (int x, int y)
{
    return(faktorial(x)/faktorial(x-y));
}

int kombinasi (int x, int y)
{
    return(faktorial(x)/(faktorial(y)*faktorial(x-y)));
}
