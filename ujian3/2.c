/* Mencari nilai max dan posisi di array 2 dimensi 
 */
 
#include "stdio.h"

int main ()
{
	int a[99][99];
	int ba,ka;
	int i,j;
	int max,imax,jmax;
	printf("Baris Array A : ");
		scanf("%d",&ba);
	printf("Kolom Array A : ");
		scanf("%d",&ka);
	for (i=0;i<ba;i++)
	{
		for (j=0;j<ka;j++)
		{
			printf("A[%d,%d] : ",i+1,j+1); ///Proses penginputan
				scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	max  = a[0][0]; ///Acuannya adalah data yang pertama, karena array dimulai dgn indeks 0, maka [0][0]
	imax = 0;		///Setiap max harus ada nilai perbandinganny terlebih dahulu
	jmax = 0; 
	for (i=0;i<ba;i++)
	{
		for (j=0;j<ka;j++)
		{
			if (a[i][j] > max) ///Proses mencari nilai yang besar dengan membandingkan nilai pertama
			{
				max  = a[i][j];
				imax = i;
				jmax = j;
			}
		}
	}
	printf("Nilai Max\n");
	printf("A[%d,%d] : %d\n", imax+1, jmax+1, max);
}
