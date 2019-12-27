/* Tipe bentukan dngan nilai mahasiswa
	*/

#include "stdio.h"

typedef struct
{
	int tgs, kuis, uas;
}nilai;

typedef struct
{
	char hur;
	int jum;
}hasil;

int huruf (hasil hur, hasil jum);
int main ()
{
	nilai ni;
	hasil hs;
	printf("Nilai Tugas : ");
		scanf("%d",&ni.tgs);
	printf("Nilai Kuis  : ");
		scanf("%d",&ni.kuis);
	printf("Nilai UAS   : ");
		scanf("%d",&ni.uas);
	printf("\n");
	hs.jum = (0.4*ni.tgs) + (0.4*ni.kuis) + (0.2*ni.uas);
	printf("Nilai Akhir : %d\n",hs.jum);
	huruf(hs.hur,hs.jum);
	
}	

void huruf (hasil hur, hasil jum)
{
	hasil hs;
	if (hs.jum > 80 && hs.jum <=100)
	{
		hs.hur = 'A';
	}
	else if (hs.jum > 70 && hs.jum <=80)
	{
		hs.hur = 'B';
	}
	else if (hs.jum > 60 && hs.jum <= 70)
	{
		hs.hur = 'C';
	}
	else
	{
		hs.hur = 'D';
	}
	printf("Nilau Huruf : %c",hs.hur);
}
