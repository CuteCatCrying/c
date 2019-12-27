/**
Nama file           : for4.c
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
Tanggal pembuatan   : 11 Oktober 2018
Deskripsi           : Awal dan Akhir inpur user, jika awal lebih besar daripada akhir
*/

#include "stdio.h"

void main()
{
    int i, jum;
    int aw, ak, zero;
    float rata;
    printf("Awal : ");
        scanf("%d",&aw);
    printf("Akhir: ");
        scanf("%d",&ak);
    if (aw>ak)
    {
        zero = aw;
        aw   = ak;
        ak   = zero;
    }
    jum = 0;
    for (i=aw;i<=ak;i++)
    {
        printf("%d. \n",i);
        jum = jum + i;
    }
    rata = (float)jum/((ak-aw)+1);
    printf("\nJumlah = %d\n",jum);
    printf("Rata-rata= %.2f\n\n",rata);
}
