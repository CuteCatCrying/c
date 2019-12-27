/** Nama : Zukron Alviandy Rahmadhan
    NO BP: 1811081030
    Kelas: TRPL 1B
*/

#include "stdio.h"
#include "math.h"

typedef struct
{
    int jj,mm,dd;
}waktu;

void main()
{
    waktu w1,w2,w3;
    int detw1,detw2,durasi;
    printf("Masukkan waktu pembicaraan telepon : ");
        scanf("%d%d%d",&w1.jj,&w1.mm,&w1.dd);

    detw1  = (w1.jj*3600)+(w1.mm*60)+w1.dd;
    if(detw1==0)
    {
        detw1=86400;
    }
    durasi = detw1-1;
    printf("\n\n");
    w1.jj  = durasi/3600;
    w1.mm  = durasi%3600/60;
    w1.dd  = durasi%3600%60;
    printf("Waktu pembicaraannya adalah %d jam %d menit %d detik\n\n",w1.jj,w1.mm,w1.dd);
}
