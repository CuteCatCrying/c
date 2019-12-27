/* Tipe bentukan dngan nilai mahasiswa
	*/

#include "stdio.h"

typedef struct
{
	int tgs, kuis, uas;
}nilai;

int main ()
{
	nilai ni;
	int jum,hur;
	printf("Nilai Tugas : ");
		scanf("%d",&ni.tgs);
	printf("Nilai Kuis  : ");
		scanf("%d",&ni.kuis);
	printf("Nilai UAS   : ");
		scanf("%d",&ni.uas);
	printf("\n");
	jum = (0.4*ni.tgs) + (0.4*ni.kuis) + (0.2*ni.uas);
	printf("Nilai Akhir : %d\n",jum);
	if (jum > 80 && jum <=100)
	{
		hur = 'A';
	}
	else if (jum > 70 && jum <=80)
	{
		hur = 'B';
	}
	else if (jum > 60 && jum <= 70)
	{
		hur = 'C';
	}
	else
	{
		hur = 'D';
	}
	printf("Nilau Huruf : %c",hur);
}
