#include<stdio.h>
#include<conio.h>
int main()

{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	(a%2==0)? (printf(" even",a)) : (printf(" odd",a));
	
	getch();
	return 0;
}

