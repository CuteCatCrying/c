/* Faktorial dengan fungsi 
 */

#include "stdio.h"

int faktor (int n);
int main ()
{
	int n;
	printf("\t\tFaktorial\n");
	printf("Angka : ");
		scanf("%d",&n);
	printf("%d!",n);
	printf("\n");
	faktor(n);
}

int faktor (int n)
{
	int i,z;
	z=1;
	for (i=1;i<=n;i++)
	{
		z = z*i;
	}
	printf("%d! = %d",n,z);
}
