#include<stdio.h>
#include<conio.h>
int main()

{
	int a,b;
	printf("enter the value of the a:");
	scanf("%d",&a);
	printf("enter the value of the b:");
	scanf("%d",&b);
	printf("\naddition = %d\nsubtraction = %d\nmultiplication = %d\ndivision = %d\nmodulo = %d",a+b,a-b,a*b,a/b,a%b);
	
	getch();
	return 0;
}
