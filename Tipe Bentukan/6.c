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
    titik a1,a2,a3;
    float hsl;
    printf("Koordinat titik pertama\n");
    printf("X : ");
        scanf("%d",&a1.x);
    printf("Y : ");
        scanf("%d",&a1.y);
    printf("\n");
    printf("Koordinat titik kedua\n");
    printf("X : ");
        scanf("%d",&a2.x);
    printf("Y : ");
        scanf("%d",&a2.y);
    printf("\n");
    printf("M = %d-%d\n",a2.y,a1.y);
    printf("    ---\n");
    printf("    %d-%d\n",a2.x,a1.x);
    a3.x = a2.y-a1.y;
    a3.y = a2.x-a1.x;
    printf("\n");
    printf("M = %d/%d",a3.x,a3.y);
    hsl  = (float)a3.x/a3.y;
    printf("\nGradien : %0.2f",hsl);
}
