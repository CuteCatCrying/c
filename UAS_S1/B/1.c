#include "stdio.h"

float luas_alas (int x);
void volume (int x, int y, float *z);
void luas_permukaan (int x, int y, float z);

void main ()
{
	int a,b;
	float tot;
	printf("Jari-jari Alas : ");
		scanf("%d",&a);
	printf("Tinggi Tabung  : ");
		scanf("%d",&b);
	printf("\n");
	printf("Luas Alas Tabung : %.2f\n",luas_alas(a));
	volume(a,b,&tot);
	printf("Volume Tabung    : %.2f\n",tot);
	luas_permukaan(a,b,tot);
}

float luas_alas (int x)
{
	return 3.14*x*x;
}

void volume (int x, int y, float *z)
{
	*z = 3.14*x*x*y;
}

void luas_permukaan (int x, int y, float z)
{
	float tot;
	tot = (2*z) + (2*luas_alas(x));
	printf("Luas Permukaan   : %.2f\n\n",tot);
}
