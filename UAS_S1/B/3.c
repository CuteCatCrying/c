#include "stdio.h"

int lama,biaya,obat;
void pilihan (int x);
void kelas_1 (int x, int y, int z, int *n_tot, int *tot);
void kelas_2 (int x, int y, int z, int *n_tot, int *tot);
void kelas_3 (int x, int y, int z, int *n_tot, int *tot);


void main ()
{
	int menu;
	printf("Kelas Pasien Rumah Sakit\n");
	printf("1. Kelas 1 -> Diskon 20%%\n");
	printf("2. Kelas 2 -> Diskon 10%%\n");
	printf("3. Kelas 3 -> Diskon 5%%\n");
	printf("Input Pilihan : ");
		scanf("%d",&menu);
	printf("\n");
	pilihan(menu);
}

void pilihan (int x)
{
	int n_dis, dis;
	switch (x)
	{
		case 1: {
					printf("Kelas 1\n");
					printf("Diskon 20%%\n\n");
					printf("Lama Menginap : ");
						scanf("%d",&lama);
					printf("Biaya Kamar Rp. ");
						scanf("%d",&biaya);
					printf("Biaya Obat Rp. ");
						scanf("%d",&obat);
					printf("\n");
					printf("Total Biaya Yang Harus Dibayar\n");
					kelas_1(lama,biaya,obat,&n_dis,&dis);
					printf("Sebelum Diskon Rp. %d\n",n_dis);
					printf("Setelah Diskon Rp. %d\n\n",dis);
					break;
				}
		case 2: {
					printf("Kelas 2\n");
					printf("Diskon 10%%\n\n");
					printf("Lama Menginap : ");
						scanf("%d",&lama);
					printf("Biaya Kamar Rp. ");
						scanf("%d",&biaya);
					printf("Biaya Obat Rp. ");
						scanf("%d",&obat);
					printf("\n");
					printf("Total Biaya Yang Harus Dibayar\n");
					kelas_2(lama,biaya,obat,&n_dis,&dis);
					printf("Sebelum Diskon Rp. %d\n",n_dis);
					printf("Setelah Diskon Rp. %d\n\n",dis);
					break;
				}
		case 3: {
					printf("Kelas 3\n");
					printf("Diskon 5%%\n\n");
					printf("Lama Menginap : ");
						scanf("%d",&lama);
					printf("Biaya Kamar Rp. ");
						scanf("%d",&biaya);
					printf("Biaya Obat Rp. ");
						scanf("%d",&obat);
					printf("\n");
					printf("Total Biaya Yang Harus Dibayar\n");
					kelas_3(lama,biaya,obat,&n_dis,&dis);
					printf("Sebelum Diskon Rp. %d\n",n_dis);
					printf("Setelah Diskon Rp. %d\n\n",dis);
					break;
				}
		default:{
					printf("Maaf Kelas Yang Anda Pilih Tidak Ada\n");
					printf("Tidak Mendapatkan Diskon\n");
					break;
				}
	}
}	

void kelas_1 (int x, int y, int z, int *n_tot, int *tot)
{
	*n_tot = (x*y)+z;
	*tot   = *n_tot - ((x*y)+z)*0.2;
}

void kelas_2 (int x, int y, int z, int *n_tot, int *tot)
{
	*n_tot = (x*y)+z;
	*tot   = *n_tot - ((x*y)+z)*0.1;
}

void kelas_3 (int x, int y, int z, int *n_tot, int *tot)
{
	*n_tot = (x*y)+z;
	*tot   = *n_tot - ((x*y)+z)*0.05;
}			
