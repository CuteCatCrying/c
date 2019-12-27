#include "stdio.h"

void pilihan (int x);
int umum (int x, int y, int z);
void vip (int x, int y, int z, int *n_tot, int *tot);
void gold (int x, int y, int z, int *n_tot, int *tot);

void main ()
{
	int menu;
	printf("Jenis Member\n");
	printf("1. Umum -> Diskon 0%%\n");
	printf("2. VIP  -> Diskon 10%%\n");
	printf("3. Gold -> Diskon 20%%\n");
	printf("Pilih Member : ");
		scanf("%d",&menu);
	printf("\n");
	pilihan(menu);
}

void pilihan (int x)
{
	int n,biaya,jasa;
	int n_dis, dis;
	switch (x)
	{
		case 1 :{
					printf("Member Umum\n");
					printf("Diskon 0%%\n");
					printf("Banyak Barang  : ");
						scanf("%d",&n);
					printf("Harga Barang Rp. ");
						scanf("%d",&biaya);
					printf("Jasa Perbaikan Rp. ");
						scanf("%d",&jasa);
					printf("\n");
					printf("Total Biaya Yang Harus Dibayar Rp. %d\n\n",umum(n,biaya,jasa));
					break;
				}
		case 2 :{
					printf("Member VIP\n");
					printf("Diskon 10%%\n");
					printf("Banyak Barang  : ");
						scanf("%d",&n);
					printf("Harga Barang Rp. ");
						scanf("%d",&biaya);
					printf("Jasa Perbaikan Rp. ");
						scanf("%d",&jasa);
					printf("\n");
					vip(n,biaya,jasa,&n_dis,&dis);
					printf("Total Biaya Yang Harus Dibayar\n");
					printf("Sebelum Diskon Rp. %d\n",n_dis);
					printf("Setelah Diskon Rp. %d\n\n",dis);
					break;
				}
		case 3 :{
					printf("Member Umum\n");
					printf("Diskon 20%%\n");
					printf("Banyak Barang  : ");
						scanf("%d",&n);
					printf("Harga Barang Rp. ");
						scanf("%d",&biaya);
					printf("Jasa Perbaikan Rp. ");
						scanf("%d",&jasa);
					printf("\n");
					gold(n,biaya,jasa,&n_dis,&dis);
					printf("Total Biaya Yang Harus Dibayar\n");
					printf("Sebelum Diskon Rp. %d\n",n_dis);
					printf("Setelah Diskon Rp. %d\n\n",dis);
					break;
				}
		default:{
					printf("Maaf Member Yang Anda Pilih Tidak Ada\n");
					printf("Tidak Ada Diskon\n");
					break;
				}
	}
}

int umum (int x, int y, int z)
{
	return (x*y)+z;
}

void vip (int x, int y, int z, int *n_tot, int *tot)
{
	*n_tot = (x*y)+z;
	*tot   = *n_tot - ((x*y)+z)*0.1;
}

void gold (int x, int y, int z, int *n_tot, int *tot)
{
	*n_tot = (x*y)+z;
	*tot   = *n_tot - ((x*y)+z)*0.2;
}
