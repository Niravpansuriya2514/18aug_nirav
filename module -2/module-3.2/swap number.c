#include<stdio.h>
#include<conio.h>
int main()

{
	int a,b,c;
	printf("enter th evalue of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	c = a;
	a = b;
	b = c;
	printf("a = %d\n",a);
	printf("b = %d",b);
	
	getch();
	return 0;
}
