/* Fungsi dengan mengurutkan array */

#include "stdio.h"

void urut (int n, int a[]);
int main ()
{
	int n, a[99];
	int i;
	printf("Banyak Array : ");
		scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("A[%d] : ",i+1);
			scanf("%d",&a[i]);
	}
	printf("Array yang sudah diurut\n");
	urut(n,a);
	for (i=0;i<n;i++)
	{
		printf("A[%d] : %d\n",i+1,a[i]);
	}
}

void urut (int n, int a[])
{
	int i,j,temp;
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (a[j] < a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
