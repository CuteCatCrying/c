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
    durasi = detw1+1;
    printf("\n\n");
    w3.jj  = durasi/3600;
    w3.mm  = durasi%3600/60;
    w3.dd  = durasi%3600%60;
    if (durasi==86400)
        w3.jj=0;
    printf("Waktu pembicaraannya adalah %d jam %d menit %d detik\n\n",w3.jj,w3.mm,w3.dd);
}
