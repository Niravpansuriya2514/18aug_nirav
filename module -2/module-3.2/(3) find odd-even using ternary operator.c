#include<stdio.h>
#include<conio.h>
int main()

{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	(a%2==0)? (printf("%d is even",a)) : (printf("%d is odd",a));
	
	getch();
	return 0;
}

