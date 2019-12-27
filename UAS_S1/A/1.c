#include "stdio.h"

float reamur (int x);
void fahrenheit (int x, float *y);
void kelvin (int x);

void main ()
{
	int cel;
	float hasil;
	printf("Input Suhu Celcius : ");
		scanf("%d",&cel);
	printf("\n");
	printf("Konversi Suhu Ke ->\n");
	printf("Remaur     = %.2f\n",reamur(cel));
	fahrenheit(cel,&hasil);
	printf("Fahrenheit = %.2f\n",hasil);
	kelvin(cel);
}

float reamur (int x)
{
	return ((float)4/5)*x;
}

void fahrenheit (int x, float *y)
{
	*y = ((float)9/5)*x+32;
}

void kelvin (int x)
{
	printf("Kelvin     = %d\n\n",x+273);
} 
