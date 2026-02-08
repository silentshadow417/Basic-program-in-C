//Find the Interest are principal amount, period in year and rate of interest....
#include<stdio.h>
int main()
{
	int p,i,r,n;
	printf("\nEnter principal amount:");
	scanf("%d",&p);
	printf("\nEnter rate of interest:");
	scanf("%d",&r);
	printf("\nEnter number of year:");
	scanf("%d",&n);
	i=(p*r*n)/100;
	printf("\nSimple Interest=%d",i);	
}
