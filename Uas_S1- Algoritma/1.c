#include "stdio.h"

int i;
int jumlah (int x[], int y);
void rata (int x[], int y, float *hasil);
void minmax (int x[], int y);

void main ()
{
	int a[99],n;
	float tot;
	printf("Banyak Nilai : ");
		scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("A[%d] : ",i+1);
			scanf("%d",&a[i]);
	}
	printf("\n");
	printf("Jumlah    = %d\n",jumlah(a,n));
	rata(a,n,&tot);
	printf("Rata-rata = %.2f\n",tot);
	minmax(a,n);
}

int jumlah (int x[], int y)
{
	int jumlah = 0;
	for (i=0;i<y;i++)
	{
		jumlah = jumlah + x[i];
	}
	return jumlah;
}

void rata (int x[], int y, float *hasil)
{
	int banyak = 0, jumlah = 0;
	for (i=0;i<y;i++)
	{
		banyak = banyak + 1;
		jumlah = jumlah + x[i];
	}
	*hasil = (float)jumlah/banyak;
}

void minmax (int x[], int y)
{
	int max = x[0], min = x[0];
	for (i=1;i<y;i++)
	{
		if (x[i] > max)
		{
			max = x[i];
		}
		else
		{
			min = x[i];
		}
	}
	printf("Nilai Max = %d\n",max);
	printf("Nilai Min = %d\n",min);
}
