/* Menggabungkan array a dan b ke c secara selang seling 
 */
 
#include "stdio.h"

int main ()
{
	int a[99],b[99],c[99];
	int i,n,o;
	int z,x;
	printf("Banyak Array A : ");
		scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("A[%d] : ",i+1);
			scanf("%d",&a[i]);
	}
	printf("\nBanyak Array B : ");
		scanf("%d",&o);
	for (i=0;i<o;i++)
	{
		printf("B[%d] : ",i+1);
			scanf("%d",&b[i]);
	}
	if (o > n)
	{
		z = o;
	}
	if (o < n)
	{
		z = n;
	}
	x=0;
	for (i=0;i<z;i++)
	{
		if (i<n)
		{
			c[x] = a[i];
			x++;
		}
		if (i<o)
		{
			c[x] = b[i];
			x++;
		}
	}
	printf("\nHasil Array C\n");
	for (i=0;i<x;i++)
	{
		printf("C[%d] : %d\n",i+1,c[i]);
	}
}
