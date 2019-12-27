/** Nama : Zukron Alviandy Rahmadhan
    NO BP: 1811081030
    Kelas: TRPL 1B
*/

#include "stdio.h"

typedef struct
{
    int h,b;
}tanggal;

void main()
{
    tanggal t1,t2,t3,t4;
    int pilih,jum;
    printf("Input Tanggal\n");
    printf("Hari : ");
        scanf("%d",&t1.h);
    jum = t1.h+1;
    printf("Bulan\n");
    printf("1. Januari\n");
    printf("2. Februari\n");
    printf("3. Maret\n");
    printf("4. April\n");
    printf("5. Mei\n");
    printf("6. Juni\n");
    printf("7. Juli\n");
    printf("8. Agustus\n");
    printf("9. Sepetember\n");
    printf("10. Oktober\n");
    printf("11. November\n");
    printf("12. Desember\n");
    printf("Bulan : ");
        scanf("%d",&pilih);
    switch(pilih)
    {
        case 1 : {
                    if (jum==32)
                    {
                        t1.h=1;
                        printf("%d Februari\n",t1.h);
                    }
                    else
                    {
                        t1.h=jum;
                        printf("%d Januari\n",t1.h);
                    }break;
                 }
        case 2 : {
                    if (jum==29)
                    {
                        t1.h=1;
                        printf("%d Maret\n",t1.h);
                    }
                    else
                    {
                        t1.h=jum;
                        printf("%d Februari\n",t1.h);
                    }break;
                 }
        case 3 : {
                    if (jum==32)
                    {
                        t1.h=1;
                        printf("%d April\n",t1.h);
                    }
                    else
                    {
                        t1.h=jum;
                        printf("%d Maret\n",t1.h);
                    }break;
                 }
        case 4 : {
                    if (jum==31)
                    {
                        t1.h=1;
                        printf("%d Mei\n",t1.h);
                    }
                    else
                    {
                        t1.h=jum;
                        printf("%d April\n",t1.h);
                    }break;
                 }
        case 5 : {
                    if (jum==32)
                    {
                        t1.h=1;
                        printf("%d Juni\n",t1.h);
                    }
                    else
                    {
                        t1.h=jum;
                        printf("%d Mei\n",t1.h);
                    }break;
                 }
        case 6 : {
                    if (jum==31)
                    {
                        t1.h=1;
                        printf("%d Juli\n",t1.h);
                    }
                    else
                    {
                        t1.h=jum;
                        printf("%d Juni\n",t1.h);
                    }break;
                 }
        case 7 : {
                    if (jum==32)
                    {
                        t1.h=1;
                        printf("%d Agustus\n",t1.h);
                    }
                    else
                    {
                        t1.h=jum;
                        printf("%d Juli\n",t1.h);
                    }break;
                 }
        case 8 : {
                    if (jum==32)
                    {
                        t1.h=1;
                        printf("%d September\n",t1.h);
                    }
                    else
                    {
                        t1.h=jum;
                        printf("%d Agustus\n",t1.h);
                    }break;
                 }
        case 9 : {
                    if (jum==31)
                    {
                        t1.h=1;
                        printf("%d Oktober\n",t1.h);
                    }
                    else
                    {
                        t1.h=jum;
                        printf("%d September\n",t1.h);
                    }break;
                 }
        case 10 : {
                    if (jum==32)
                    {
                        t1.h=1;
                        printf("%d November\n",t1.h);
                    }
                    else
                    {
                        t1.h=jum;
                        printf("%d Oktober\n",t1.h);
                    }break;
                 }
        case 11 : {
                    if (jum==31)
                    {
                        t1.h=1;
                        printf("%d Desember\n",t1.h);
                    }
                    else
                    {
                        t1.h=jum;
                        printf("%d November\n",t1.h);
                    }break;
                 }
        case 12 : {
                    if (jum==32)
                    {
                        t1.h=1;
                        printf("%d Januari\n",t1.h);
                    }
                    else
                    {
                        t1.h=jum;
                        printf("%d Desember\n",t1.h);
                    }break;
                 }
        default: {
                    printf("\n\nBulan Tidak Ada\n\n");
                 }
    }
}
