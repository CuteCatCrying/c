/* Menukar */

#include "stdio.h"

void tukar (int x, int y);
int main ()
{
	int x,y;
	printf("Nilai Pertama : ");
		scanf("%d",&x);
	printf("Nilai Kedua   : ");
		scanf("%d",&y);
	printf("Nilai\n");
	printf("%d : %d\n",x,y);
	tukar(x,y);
}

void tukar (int x, int y)
{
	int temp;
	temp = x;
	x    = y;
	y    = temp;
	printf("Nilai dalam tukar %d : %d",x,y);
}
