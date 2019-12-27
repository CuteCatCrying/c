/*Komunikasi antar fungsi */

#include "stdio.h"

int luas (float x, float y);
int main ()
{
	float x,y;
	float hasil;
	printf("Panjang : ");
		scanf("%f",&x);
	printf("Lebar   : ");
		scanf("%f",&y);
	hasil = luas(x,y);
	printf("Hasilnya adalah : %.2f",hasil);
}

int luas (float x, float y)
{
	float hasil;
	hasil = x*y;
	return hasil;
}
