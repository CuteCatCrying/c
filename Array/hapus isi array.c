/* Menghapus isi array
 */
 
#include "stdio.h"

int main ()
{
	int a[99];
	int i,n;
	int z;
	printf("Banyak Array A : ");
		scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("A[%d] : ",i+1);
			scanf("%d",&a[i]);
	}
	printf("\n");
	printf("Indeks yang akan dihapus : ");
		scanf("%d",&z);
	for (i=0;i<z-1;i++)
	{
		printf("A[%d] : %d\n",i+1,a[i]);
	}
	for (i=z;i<n;i++)
	{
		printf("A[%d] : %d\n",i+1,a[i]);
	}
}
