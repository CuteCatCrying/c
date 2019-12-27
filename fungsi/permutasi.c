/* Permutasi menggunakan fungsi
 */
 
#include "stdio.h"

typedef struct
{
	int z,u,v;
}perm;

int permutasi (int x, int y);
int main ()
{
	int x,y;
	printf("\t\tPermutasi\n");
	printf("nPr\n");
	printf("n : ");
		scanf("%d",&x);
	printf("r : ");
		scanf("%d",&y);
	permutasi(x,y);
}

int permutasi (int x, int y)
{
	int i,hasil;
	perm utasi;
	utasi.z =1;
	for (i=1;i<=x;i++)
	{
		utasi.z = utasi.z*i;
	}
	utasi.v =1;
	utasi.u = x-y;
	for (i=1;i<=utasi.u;i++)
	{
		utasi.v = utasi.v*i;
	}
	hasil = (float)utasi.z / utasi.v;
	printf("\n%dP%d : %d\n",x,y,hasil);
}
