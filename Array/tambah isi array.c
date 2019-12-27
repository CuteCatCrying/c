/* Menambah isi dari Array
 */

#include "stdio.h"

int main ()
{
	int a[99],b[99];
	int i,n;
	int z,ang;
	printf("Banyak Array A : ");
		scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("A[%d] : ",i+1);
			scanf("%d",&a[i]);
			b[i] = a[i];
	}
	printf("\nIndeks yang akan ditambahkan : ");
		scanf("%d",&z);
	printf("Angka : ");
		scanf("%d",&ang);
	for (i=0;i<z-1;i++)
	{
		b[i] = a[i];
		printf("A[%d] : %d\n",i+1,b[i]);
	}
	for (i=z-1;i<=z-1;i++)
	{
		b[i] = ang;
		printf("A[%d] : %d\n",i+1,b[i]);
	}
	for (i=z;i<n+1;i++)
	{
		b[i] = a[i-1];
		printf("A[%d] : %d\n",i+1,b[i]);
	}
}
