#include "stdio.h"

float tugas (int x);
float kuis (int x);
float uas (int x);
float uts (int x);
float nilai_akhir (int x, int y, int z, int za);
int nilai_huruf (int x);

int main ()
{
    int tgs,kuis,uts,uas;
    int na;
    printf("Nilai Tugas : ");
        scanf("%d",&tgs);
    printf("Nilai Kuis  : ");
        scanf("%d",&kuis);
    printf("Nilai UTS   : ");
        scanf("%d",&uts);
    printf("Nilai UAS   : ");
        scanf("%d",&uas);
    printf("\nNilai Akhir : %.2f\n",nilai_akhir(tgs,kuis,uts,uas));
    na = nilai_akhir(tgs,kuis,uts,uas);
    printf("Nilai Huruf   : %c\n",nilai_huruf(na));
}

float tugas (int x)
{
    return((float)x*15/100);
}

float kuis (int x)
{
    return((float)x*15/100);
}

float uts (int x)
{
    return((float)x*30/100);
}

float uas (int x)
{
    return((float)x*40/100);
}

float nilai_akhir (int x, int y, int z, int za)
{
    return(tugas(x)+kuis(y)+uts(z)+uas(za));
}

int nilai_huruf (int x)
{
    char c;
    if (x>=81 && x<=100)
    {
        c='A';
        return(c);
    }
    else if (x>=66 && x<=80)
    {
        c='B';
        return(c);
    }
    else if (x>=51 && x<=65)
    {
        c='C';
        return(c);
    }
    else
    {
        c='D';
        return(c);
    }
}
