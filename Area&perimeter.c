//find the area the perimeter of square and rectangle. Input the sides through the keyboard..
#include<stdio.h>
int main()
{
	int l,b;
	printf("\nEnter side of a square:");
	scanf("%d",&l);
	printf("Area=%d",(l*l));
	printf("\nPerimeter=%d",(4*l));
	
	printf("\nEnter length of a rectengle:");
	scanf("%d",&l);
	printf("Enter breadth of a rectangle:");
	scanf("%d",&b);
	printf("Area=%d",(l*b));
	printf("\nPerimeter=%d",2*(l+b));
}
