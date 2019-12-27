/* Mengurutkan array dari yang terbesar
 */
 
#include "stdio.h"

int main ()
{
	int a[99];
	int i,j,n;
	int temp;
	printf("Banyak Array A : ");
		scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("A[%d] : ",i+1);
			scanf("%d",&a[i]);
	}
	printf("\nHasilnya\n");
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (a[j] > a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		printf("A[%d] : %d\n",i+1,a[i]);
	}
}
