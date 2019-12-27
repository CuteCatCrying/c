/* Mencari array dalam array
 */
 
#include "stdio.h"

int main ()
{
	int a[99];
	int i,n,z,x;
	int car;
	printf("Banyak Array A : ");
		scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("A[%d] : ",i+1);
			scanf("%d",&a[i]);
	}
	printf("Array yang dicari : ");
		scanf("%d",&car);
	z=0;
	for (i=0;i<n;i++)
	{
		if (z==0)
		{
			if (a[i]==car)
			{
				printf("Array ada yaitu %d\n",a[i]);
				z++;
			}
			else
			{
				printf("Maaf array tidak ada\n");
				z++;
			}
		}
	}
	for (i=0;i<n;i++)
	{
		if (a[i]== car)
		{
			printf("%d Pada indeks %d\n",car,i+1);
		}
	}
}
