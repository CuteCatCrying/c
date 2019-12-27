/* Mencari nilai max dan posisi di array 2 dimensi 
 */
 
#include "stdio.h"

int main ()
{
	int a[99];
	int ba,ka;
	int i,j;
	int max,imax,jmax;
	printf("Banyak Array A : ");
		scanf("%d",&ba);
	for (i=0;i<ba;i++)
	{
		printf("A[%d] : ",i+1);
			scanf("%d",&a[i]);
	}
	printf("\n");
	max  = a[0];
	imax = 0;
	for (i=0;i<ba;i++)
	{
		if (a[i] > max)
		{
			max  = a[i];
			imax = i;
		}
	}
	printf("Nilai Max");
	printf("\n");
	printf("A[%d] : %d\n", imax+1, max);
}
