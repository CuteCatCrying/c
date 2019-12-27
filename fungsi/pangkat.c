/* Pangkat menggunakan fungsi
 */
 
#include "stdio.h"

int pangkat (int x, int y);
int main ()
{
	int x,y;
	int hasil;
	printf("\t\tPangkat\n");
	printf("x pangkat y\n");
	printf("x : ");
		scanf("%d",&x);
	printf("y : ");
		scanf("%d",&y);
	hasil = pangkat(x,y);
	printf("\n%d pangkat %d : %d\n",x,y,hasil);
}

int pangkat (int x, int y)
{
	int i,z,hasil;
	hasil = 1;
	for (i=1;i<=y;i++)
	{
		hasil = hasil*x;
	}
	return hasil;
}
