#include "stdio.h"

void golongan (int x);
int tot_pemakaian (int x, int y);
int pajak (int x, int y);
int pembayaran (int x, int y);

void main ()
{
	int menu;
	printf("Pilih Golongan Beban Anda\n");
	printf("1. Golongan 1 : Rp. 50000\n");
	printf("2. Golongan 2 : Rp. 100000\n");
	printf("Pilih : ");
		scanf("%d",&menu);
	printf("\n");
	golongan(menu);
}

void golongan (int x)
{
	int beban,pemakaian;
	switch (x)
	{
		case 1 :{
					beban = 50000;
					printf("Golongan Pertama Dengan Beban Rp. %d\n",beban);
					printf("Besar Pemakaian (Kubik) : ");
						scanf("%d",&pemakaian);
					printf("\n");
					printf("Total Pemakaian Rp. %d\n",tot_pemakaian(beban,pemakaian));
					printf("Total Pajak Rp. %d\n",pajak(beban,pemakaian));
					printf("Jumlah Yang Harus Dibayar Rp. %d\n\n",pembayaran(beban,pemakaian));
					break;
				}
		case 2 :{
					beban = 100000;
					printf("Golongan Pertama Dengan Beban Rp. %d\n",beban);
					printf("Besar Pemakaian (Kubik) : ");
						scanf("%d",&pemakaian);
					printf("\n");
					printf("Total Pemakaian Rp. %d\n",tot_pemakaian(beban,pemakaian));
					printf("Total Pajak Rp. %d\n",pajak(beban,pemakaian));
					printf("Jumlah Yang Harus Dibayar Rp. %d\n\n",pembayaran(beban,pemakaian));
					break;
				}
		default:{printf("Maaf Golongan Tidak Ada\n\n");}
	}
}

int tot_pemakaian(int x, int y)
{
	int total;
	if (y<=20)
	{
		total = (y*2000)+x;
		return total;
	}
	else
	{
		total = (20*2000)+((y-20)*3000)+x;
		return total;
	}
}

int pajak (int x, int y)
{
	int total;
	total = tot_pemakaian(x,y)* 0.1;
	return total;
}

int pembayaran (int x, int y)
{
	int total;
	total = pajak(x,y)+tot_pemakaian(x,y);
	return total;
}
					
