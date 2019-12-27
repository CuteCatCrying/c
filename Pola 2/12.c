/*
Nama    : Alvin Faiz
Kelas   : TRPL 1B
No.BP   : 1811081025
*/
#include "stdio.h"

void main()
{
    int bil;
    int i,a;
    printf("Input : ");scanf("%d",&bil);
    for (i=1;i<=bil;i++)
    {
        for (a=1;a<=bil;a++)
        {
            if (a==i || a==bil || a==1 || i==bil || i==1)
                printf("#");
            else
                printf("O");
        }
        printf("\n");
    }
}
