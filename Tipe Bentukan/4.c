/** Nama : Zukron Alviandy Rahmadhan
    NO BP: 1811081030
    Kelas: TRPL 1B
*/

#include "stdio.h"

typedef struct
{
    int x,y;
}titik;

void main()
{
    titik a;
    printf("Absis   : ");
        scanf("%d",&a.x);
    printf("Ordinat : ");
        scanf("%d",&a.y);
    printf("\n\n");
    printf("Pencerminan Pada Sumbu X : (%d,%d)\n",a.x,-a.y);
    printf("Pencerminan Pada Sumbu Y : (%d,%d)\n",-a.x,a.y);
}
