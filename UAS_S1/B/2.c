#include "stdio.h"

void kelipatan (int x, int y);
int jumlah (int x, int y);

void main ()
{
	int aw, ak;
	printf("Masukan Awal : ");
		scanf("%d",&aw);
	printf("Masukan Akhir: ");
		scanf("%d",&ak);
	printf("\n");
	kelipatan(aw,ak);
	printf("\n");
	printf("Jumlah Deret : %d\n\n",jumlah(aw,ak));
}

void kelipatan (int x, int y)
{
	int i;
	for (i=x;i<=y*3;i++)
	{
		if (i%3==0)
		{
			printf("%d ",i);
		}
	}
}

int jumlah (int x, int y)
{
	int jumlah,i;
	jumlah = 0;
	for (i=x;i<=y*3;i++)
	{
		if (i%3==0)
		{
			jumlah = jumlah + i;
		}
	}
	return jumlah;
}
