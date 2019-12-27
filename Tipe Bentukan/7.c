/** Nama : Zukron Alviandy Rahmadhan
    NO BP: 1811081030
    Kelas: TRPL 1B
*/

#include "stdio.h"
#include "math.h"

typedef struct
{
    int x,y;
}titik;

void main()
{
    titik a1,a2,a3,a4;
    float z1,x1,jakar,hsl;
    int jx,jy,j;
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
    z1 = ((float)(a1.x+a2.x)/2);
    x1 = ((float)(a1.y+a2.y)/2);
    printf("Koordinat titik tengah : (%0.f,%0.f)",z1,x1);
    printf("\n\n");
    a4.x = a1.x-a2.x;
    a4.y = a1.y-a2.y;
    j    = (a4.x*a4.x)+(a4.y*a4.y);
    jakar= sqrt(j);
    printf("Jarak Antara Dua Titik : %0.2f",jakar);
    printf("\n\n");
    a4.x = a2.y-a1.y;
    a4.y = a2.x-a1.x;
    hsl  = (float)a4.x/a4.y;
    printf("Gradien : %0.2f",hsl);
    printf("\n\n");
}
