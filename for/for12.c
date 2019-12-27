/**
Nama file           : for12.c
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
Tanggal pembuatan   : 11 Oktober 2018
Deskripsi           : Deret Bilangan Genap, awal dan akhir input user
*/

#include "stdio.h"

void main()
{
    int i;
    int aw, ak;
    int keli;
    int jum;
    int data;
    float rata;
    printf("Awal      = ");
        scanf("%d",&aw);
    printf("Akhir     = ");
        scanf("%d",&ak);
    printf("Kelipatan = ");
        scanf("%d",&keli);
    jum = 0;
    data= 0;
    for (i=aw;i<=ak;i++)
    {
        if(i%keli==0)
        {
            printf("%d. \n",i);
            jum = jum + i;
            data= data + 1;
        }
    }
    rata = (float)jum/data;
    printf("Banyak Kelipatan %d = %d\n",keli,data);
    printf("\nJumlah   = %d\n",jum);
    printf("Rata-rata= %.2f\n\n",rata);
}
