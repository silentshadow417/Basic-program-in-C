//Write a program to enter the temperature in Fehrenheit and convort it to Celsius...
//[C=((F-32)*5)/9]
#include<stdio.h>
int main()
{
	float f;
	printf("\nEnter temperature in Fahrenhrit:");
	scanf("%f",&f);
	printf("Converted to Celsius = %f",((f-32)*5)/9);
}
