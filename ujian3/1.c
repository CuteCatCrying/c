/*
	Menyalin isi array tanpa ada yang sama 
*/

#include "stdio.h"

int main ()
{
	int a[99],b[99];
	int i,j,n,z;
	int temp;
	printf("Banyak Array A : "); ///Misal yang diiunput user adalah 1,2,3,2,1,4,4,6,5
		scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("A[%d] : ",i+1);
			scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++) ///Proses mengurutkan dari yang terkecil hingga terbesar 1,1,2,2,3,4,4,5,6
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j] < a[i])				
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	printf("A[%d] : %d\n",i,a[i]);
	}
	printf("\n");
	z=0;
	for (i=0;i<n;i++) ///Proses untuk mengoutput data yang jika sama dengan data berikutnya tidak akan dioutputkan
	{					///tetapi data yang berbeda dengan data berikutnya akan dioutputkan
		if (a[i] != a[i+1])  ///misal 1,1,2,2,3 ..... data pertama dan data kedua sama, jadi yang pertama tidak diouputkan
		{					///dan data yang kedua dan ketiga tidak sama, maka data yang kedua diouputkan
			printf("A[%d] : %d\n",z+1,a[i]);
			z=z+1;
		}
	}

}
