/** Nama : Zukron Alviandy Rahmadhan
    NO BP: 1811081030
    Kelas: TRPL 1B
*/

#include "stdio.h"

typedef struct
{
    int x,y;
}pecahan;

void main()
{
    float hsl;
    pecahan p1,p2,p3;
    printf("Pecahan Pertama\n");
    printf("X : ");
        scanf("%d",&p1.x);
    printf("Y : ");
        scanf("%d",&p1.y);
    printf("\n");
    printf("Pecahan Kedua\n");
    printf("X : ");
        scanf("%d",&p2.x);
    printf("Y : ");
        scanf("%d",&p2.y);
    printf("\n");
    printf("Pecahan\n");
    printf("%d/%d + %d/%d",p1.x,p1.y,p2.x,p2.y);
    printf("\n");
    p3.x = (p1.x*p2.y)+(p2.x*p1.y);
    p3.y = p1.y*p2.y;
    printf("Hasil Pecahan\n");
    printf("%d/%d\n",p3.x,p3.y);
    hsl  = (float)p3.x/p3.y;
    printf("= %0.2f\n",hsl);
}
