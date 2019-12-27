#include "stdio.h"

int pangkat (int x, int y);

void main ()
{
	int a,b;
	printf("X Pangkat Y\n");
	printf("X : ");
		scanf("%d",&a);
	printf("Y : ");
		scanf("%d",&b);
	printf("\nHasil : %d\n\n",pangkat(a,b));
}

int pangkat (int x, int y)
{
	int z,i;
	z=1;
	for (i=1;i<=y;i++)
	{
		z=z*x;
	}
	return z;
}
