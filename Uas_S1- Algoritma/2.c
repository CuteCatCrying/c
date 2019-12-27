#include "stdio.h"

void harga_tiket (int x,int y);
int tot_harga_tiket (int x, int y);
void dis_tot_harga_tiket (int x, int y);

void main ()
{
	int kelas,tujuan;
	printf("(1) Kelas Eksekutif\n");
	printf("Tujuan :\n");
	printf("\tJakarta  (1)\n");
	printf("\tYogya    (2)\n");
	printf("\tSurabaya (3)\n");
	printf("(2) Kelas Bisnis\n");
	printf("Tujuan :\n");
	printf("\tJakarta  (1)\n");
	printf("\tYogya    (2)\n");
	printf("\tSurabaya (3)\n");
	printf("(3) Kelas Ekonomi\n");
	printf("Tujuan :\n");
	printf("\tJakarta  (1)\n");
	printf("\tYogya    (2)\n");
	printf("\tSurabaya (3)\n");
	printf("\nSilahkan Pilih Kelas : ");
		scanf("%d",&kelas);
	printf("Tujuan : ");
		scanf("%d",&tujuan);
	printf("\n");
	harga_tiket(kelas,tujuan);
}

void harga_tiket (int x, int y)
{
	int harga,slot;
	if (x==1 && y==1)
	{
		harga = 70000;
		printf("Harga Tiket per Orang Rp. %d\n",harga);
		printf("Banyak Tiket : ");
			scanf("%d",&slot);
		printf("\nTotal Harga Tiket Adalah Rp. %d\n",tot_harga_tiket(harga,slot));
	}
	else if (x==1 && y==2)
	{
		harga = 80000;
		printf("Harga Tiket per Orang Rp. %d\n",harga);
		printf("Banyak Tiket : ");
			scanf("%d",&slot);
		printf("\nTotal Harga Tiket Adalah Rp. %d\n",tot_harga_tiket(harga,slot));
	}
	else if (x==1 && y==3)
	{
		harga = 90000;
		printf("Harga Tiket per Orang Rp. %d\n",harga);
		printf("Banyak Tiket : ");
			scanf("%d",&slot);
		printf("\n");
		dis_tot_harga_tiket(harga,slot);
	}
	else if (x==2 && y==1)
	{
		harga = 40000;
		printf("Harga Tiket per Orang Rp. %d\n",harga);
		printf("Banyak Tiket : ");
			scanf("%d",&slot);
		printf("\nTotal Harga Tiket Adalah Rp. %d\n",tot_harga_tiket(harga,slot));
	}
	else if (x==2 && y==2)
	{
		harga = 50000;
		printf("Harga Tiket per Orang Rp. %d\n",harga);
		printf("Banyak Tiket : ");
			scanf("%d",&slot);
		printf("\nTotal Harga Tiket Adalah Rp. %d\n",tot_harga_tiket(harga,slot));
	}
	else if (x==2 && y==3)
	{
		harga = 60000;
		printf("Harga Tiket per Orang Rp. %d\n",harga);
		printf("Banyak Tiket : ");
			scanf("%d",&slot);
		printf("\nTotal Harga Tiket Adalah Rp. %d\n",tot_harga_tiket(harga,slot));
	}
	else if (x==3 && y==1)
	{
		harga = 10000;
		printf("Harga Tiket per Orang Rp. %d\n",harga);
		printf("Banyak Tiket : ");
			scanf("%d",&slot);
		printf("\nTotal Harga Tiket Adalah Rp. %d\n",tot_harga_tiket(harga,slot));
	}
	else if (x==3 && y==2)
	{
		harga = 20000;
		printf("Harga Tiket per Orang Rp. %d\n",harga);
		printf("Banyak Tiket : ");
			scanf("%d",&slot);
		printf("\n");
		dis_tot_harga_tiket(harga,slot);
	}
	else if (x==3 && y==3)
	{
		harga = 10000;
		printf("Harga Tiket per Orang Rp. %d\n",harga);
		printf("Banyak Tiket : ");
			scanf("%d",&slot);
		printf("\nTotal Harga Tiket Adalah Rp. %d\n",tot_harga_tiket(harga,slot));
	}
	else
	{
		printf("Maaf Piliha Kelas atau Tujuan Tidak Ada\n\n");
	}
}

int tot_harga_tiket (int x, int y)
{
	int total;
	total = x*y;
	return total;
}

void dis_tot_harga_tiket (int x, int y)
{
	int no_dis,dis,diskon;
	if (y>=4)
	{
		no_dis = x*y;
		diskon = (x*y)*0.1;
		dis    = no_dis-diskon;
		printf("Total Harga Tiket Adalah Rp. %d\n",no_dis);
		printf("Selamat Anda Mendapatkan Diskon Sebesar 10%%\n");
		printf("Besar Diskon Rp. %d\n",diskon);
		printf("Harga Yang Harus Dibayar Rp. %d\n",dis);
	}
	else
	{
		no_dis = x*y;
		printf("Harga Yang Harus Dibayar Rp. %d\n",no_dis);
	}
}
