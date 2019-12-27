#include "stdio.h"

int main ()
{
	int i,j,z,n;
	printf("Ukuran Pola : ");
		scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("*");
		}
		for (z=n-1;z>=i;z--)
		{
			printf("#");
		}
		for (j=i;j<=n-1;j++)
		{
			printf("#");
		}
		for (z=1;z<=i;z++)
		{
			printf("*");
		}
		printf("\n");
	}
}

