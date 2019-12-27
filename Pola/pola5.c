#include "stdio.h"

int main ()
{
	int n;
	int i,j;
	printf("Ukuran Pola : ");
		scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			if (i==j || i==1 || i==n || j==1 || j==n )
			{
				printf("O");
			}
			else 
			{
				printf("#");
			}
		}
		printf("\n");
	}
}
