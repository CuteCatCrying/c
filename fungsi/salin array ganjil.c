/*Menyalin array a ke b dengan syarat yang ganjil saja
 */

#include "stdio.h"

int salin (int a[99]);
int main ()
{
	int a[99];
	int i,n;
	printf("Banyak Array A : ");
		scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("A[%d] : ",i+1);
			scanf("%d",&a[i]);
	}
	printf("\n");
	salin(a);
}

int salin (int a[99])
{
	int b[99];
	int i,n,z;
	z=1;
	for (i=0;i<n;i++)
	{
		if (a[i]%2!=0)
		{
			b[i] = a[i];
			printf("B[%d] : %d\n",z,b[i]);
			z=z+1;
		}
	}
}
