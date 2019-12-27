/* Kombinasi menggunakan fungsi
 */
 
#include "stdio.h"

typedef struct
{
	int z,u,v,w;
}kombina;

int kombinasi (int x, int y);
int main ()
{
	int x, y;
	printf("\t\tKombinasi\n");
	printf("nCr\n");
	printf("n : ");
		scanf("%d",&x);
	printf("r : ");
		scanf("%d",&y);
	kombinasi(x,y);
}

int kombinasi (int x, int y)
{
	kombina si;
	int i, hasil;
	si.z = 1;
	for (i=1;i<=x;i++)
	{
		si.z = si.z*i;
	}
	si.u = 1;
	si.v = x-y;
	for (i=1;i<=si.v;i++)
	{
		si.u = si.u*i;
	}
	si.w = 1;
	for (i=1;i<=y;i++)
	{
		si.w = si.w*i;
	}
	hasil = (float)si.z/(si.v*si.w);
	printf("\n%dC%d : %d",x,y,hasil);
}
