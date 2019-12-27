/* Menggabungkan array a dan b ke c
 */

#include "stdio.h"

int main ()
{
	int a[99],b[99],c[99];
	int i,n,o;
	int z;
	printf("Banyak Array A : ");
		scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("A[%d] : ",i+1);
			scanf("%d",&a[i]);
		c[i] = a[i];
	}
	printf("\nBanyak Array B : ");
		scanf("%d",&o);
	z=1;
	for (i=n;i<o+n;i++)
	{
		printf("B[%d] : ",z);
			scanf("%d",&b[i]);
		z++;
		c[i] = b[i];
	}
	printf("\nHasil Array C\n");
	for (i=0;i<n+o;i++)
	{
		printf("C[%d] : %d\n",i+1,c[i]);
	}
}
