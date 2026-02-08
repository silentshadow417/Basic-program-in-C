//Write a program to store and interchange two numbers in veriable a and b...
#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("\nEnter value for a :");
	scanf("%d",&a);
	printf("\nEnter value for b :");
	scanf("%d",&b);
	
	printf("\nBefore change, a=%d and b=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\n After change, a=%d and b=%d",a,b);
}
