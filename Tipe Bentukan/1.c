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
    waktu w1,w2,w3,w4,w5;
    int detw1,detw2,durasi,durasi1,durasi2;
    printf("Masukkan waktu awal pembicaraan telepon : ");
        scanf("%d%d%d",&w1.jj,&w1.mm,&w1.dd);
    detw1  = (w1.jj*3600)+(w1.mm*60)+w1.dd;
    durasi1= detw1+1;
    printf("Masukkan waktu akhir pembicaraan telepon : ");
        scanf("%d%d%d",&w2.jj,&w2.mm,&w2.dd);
    detw2  = (w2.jj*3600)+(w2.mm*60)+w2.dd;
    durasi2= detw2+1;
    durasi = abs(detw2-detw1);
    printf("\n\n");
    w3.jj  = durasi/3600;
    w3.mm  = durasi%3600/60;
    w3.dd  = durasi%3600%60;
    w4.jj  = durasi1/3600;
    w4.mm  = durasi1%3600/60;
    w4.dd  = durasi1%3600%60;
    w5.jj  = durasi2/3600;
    w5.mm  = durasi2%3600/60;
    w5.dd  = durasi2%3600%60;
    if (durasi1==86400 || durasi2==86400)
        w4.jj=w5.jj=0;
    printf("Waktu pembicaraan awal 1 detik adalah %d jam %d menit %d detik\n",w4.jj,w4.mm,w4.dd);
    printf("Waktu pembicaraan akhir 1 detik adalah %d jam %d menit %d detik\n",w5.jj,w5.mm,w5.dd);
    printf("Waktu pembicaraannya adalah %d jam %d menit %d detik\n\n",w3.jj,w3.mm,w3.dd);
}
