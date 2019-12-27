/**
Nama pembuat        : Zukron Alviandy Rahmadhan
No BP               : 1811081030
*/

#include "stdio.h"

void main()
{
    char huruf;
    int a1,a2,a3,a4,a5;
    a1=a2=a3=a4=a5=0;
    do
    {
        printf("Input Huruf Vokal : ");
            scanf(" %c",&huruf);
            if (huruf=='a')
                a1=a1+1;
            if (huruf=='i')
                a2=a2+1;
            if (huruf=='u')
                a3=a3+1;
            if (huruf=='e')
                a4=a4+1;
            if (huruf=='o')
                a5=a5+1;
    }while (huruf=='a' || huruf=='i' || huruf=='u' || huruf=='e' || huruf=='o');
    printf("\n\tHuruf %c Bukan Huruf Vokal\n\n",huruf);
    printf("Huruf A, %d Buah\n",a1);
    printf("Huruf I, %d Buah\n",a2);
    printf("Huruf U, %d Buah\n",a3);
    printf("Huruf E, %d Buah\n",a4);
    printf("Huruf O, %d Buah\n",a5);
}
