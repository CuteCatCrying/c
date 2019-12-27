#include "stdio.h"

int main ()
{
	int n;
	int i,j,z;
	int c,v;
	int x;
	printf("Ukuran Pola : ");
		scanf("%d",&n);
	for (x=1;x<=(n*2)-1;x++)
	{
		printf("*");
	}
	printf("\n");
	for (i=2;i<=n;i++)
	{
		for (j=i;j<=n;j++)
		{
			printf("*");
		}
		for (z=2;z<=i;z++)
		{
			printf(" ");
		}
		for (c=n+3;c<=i+n;c++)
		{
			printf(" ");
		}
		for (v=i;v<=n;v++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i=n;i>=2;i--)
	{
		for (j=i;j<=n;j++)
		{
			printf("*");
		}
		for (z=2;z<=i;z++)
		{
			printf(" ");
		}
		for (c=n+3;c<=i+n;c++)
		{
			printf(" ");
		}
		for (v=i;v<=n;v++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (x=1;x<=(n*2)-1;x++)
	{
		printf("*");
	}
}
